#include <iostream> 
#include <fstream> 
#include <sstream> 
#include <vector> 
#include <list> 
#include <string> 
#include <deque> 
#include <stack> 
#include <queue> 
#include <map> 
#include <set> 
#include <algorithm>
#include <numeric>  
#include <functional> 
#include <utility> 
#include <stdexcept> 
#include "text_query.h" 

using std::cin; 
using std::cout; 
using std::endl; 
using std::ifstream; 
using std::istringstream; 
using std::vector; 
using std::list; 
using std::string; 
using std::deque;
using std::stack; 
using std::queue; 
using std::map; 
using std::multimap; 
using std::set; 
using std::multiset; 
using std::priority_queue; 
using std::pair; 
using std::runtime_error; 
using namespace std; 

class Query_base{
  friend class Query; 
protected:
  typedef TextQuery::line_no line_no; 
  virtual ~Query_base() {}
private:
  virtual set<line_no> eval(const TextQuery&) const = 0; 
  virtual ostream& display(ostream& = std::cout) const = 0; 
}; 


class WordQuery : public Query_base{
public:
  WordQuery(const string& word) : query_word(word) 
  {  }
private:
  virtual set<line_no> eval(const TextQuery& tq) const{
    return tq.run_query(query_word); 
  }

  virtual ostream& display(ostream& o) const{
    cout << "WordQuery display" << endl; 
    o << "\"" << query_word << "\""; 
    return o; 
  }

  string query_word; 
}; 

class Query{
  friend Query operator~(const Query& q); 
  friend Query operator|(const Query &lhs, const Query &rhs); 
  friend Query operator&(const Query &lhs, const Query &rhs); 
public:
  Query(const string& word) : q(new WordQuery(word)), use(new int(1)) 
  {  }
  Query(const Query &c) : q(c.q), use(c.use) 
  { ++ *use;}
  ~Query() { decr_use(); }
  Query& operator=(const Query& c){
    ++ *c.use; 
    decr_use(); 
    q = c.q; 
    use = c.use; 
    return *this; 
  }

  set<TextQuery::line_no> eval(const TextQuery& t) const { return q->eval(t); }
  ostream& display(ostream& o) const {
    cout << "Query display" << endl; 
    return q->display(o); 
  }

private:
  Query(Query_base* query) : q(query), use(new int(1)) 
  {  } 
  void decr_use() { if(--*use == 0) { delete q; delete use; } }

  Query_base *q; 
  int *use; 
}; 
  
inline ostream&
operator<<(ostream &os, const Query &q){
  cout << "operator<< " << endl; 
  return q.display(os);
}

class NotQuery : public Query_base{
  friend Query operator~(const Query& q); 
  NotQuery(const Query &query) : q(query) 
  { }
  virtual set<line_no> eval(const TextQuery &tq) const {
    set<line_no> ret; 
    set<line_no> result = q.eval(tq); 
    for(int i=0; i<tq.size(); ++i){
      if(result.find(i) == result.end())
        ret.insert(i); 
    }

    return ret; 
  }

  virtual ostream& display(ostream& o) const {
    cout << "NotQuery display" << endl; 
    o << "~(" << q << ")";
    return o;
  }

  const Query q;
};

inline Query operator~(const Query &oper){
  return new NotQuery(oper); 
}

class BinaryQuery : public Query_base{
protected:
  BinaryQuery(const Query &lhs, const Query &rhs, string op)
    : left(lhs), right(rhs), oper(op) 
  {  }
  virtual ostream& display(ostream &os) const { 
    cout << "BinaryQuery display" << endl; 
    os << "(" << left << oper << right << ")"; 
    return os; 
  } 

  const Query left; 
  const Query right; 
  string oper; 
}; 

class OrQuery : public BinaryQuery{
  friend Query operator|(const Query &lhs, const Query &rhs); 
  OrQuery(const Query &lhs, const Query &rhs) : BinaryQuery(lhs, rhs, "|") 
  {  }
  virtual set<line_no> eval(const TextQuery &tq) const {
    set<line_no> result = left.eval(tq); 
    set<line_no> ret = right.eval(tq); 
    ret.insert(result.begin(), result.end()); 
    return ret; 
  }
}; 

class AndQuery : public BinaryQuery{
  friend Query operator&(const Query &lhs, const Query &rhs); 
  AndQuery(const Query &lhs, const Query &rhs) : BinaryQuery(lhs, rhs, "&") 
  {  }
  virtual set<line_no> eval(const TextQuery &tq) const {
    set<line_no> ret; 
    set<line_no> left_res = left.eval(tq); 
    set<line_no> right_res = right.eval(tq); 
    set_intersection(left_res.begin(), left_res.end(), 
                     right_res.begin(),right_res.end(), 
                     inserter(ret, ret.begin()));
    return ret; 
  }
};

inline Query operator|(const Query &lhs, const Query &rhs)
{
  return new OrQuery(lhs, rhs); 
}

inline Query operator&(const Query &lhs, const Query &rhs)
{ 
  return new AndQuery(lhs, rhs); 
}

int main(int argc, char **argv)
{
  ifstream ifs("xiaoshuo.txt"); 
 
  TextQuery tq; 
  tq.read_file(ifs); 
  //Query q = Query("fiery") & Query("bird") | Query("wind"); 
  //Query q("fiery"); 
  //Query q = ~Query("fiery"); 
  //Query q = Query("fiery") & Query("bird"); 
  //Query q = ~(Query("fiery") & Query("bird") | Query("wind")); 
  //Query q("Daddy"); 
  //Query q = ~Query("Alice"); 
  //Query q = Query("hair") | Query("Alice"); 
  //Query q = Query("fiery") & Query("bird") | Query("wind"); 
  Query q = Query("she") | Query("him") | Query("but"); 
  set<TextQuery::line_no> ret = q.eval(tq); 
  //set<TextQuery::line_no> ret = tq.run_query("fiery"); 
  cout << "Executing Query for: " << q << endl; 
  for(set<TextQuery::line_no>::iterator it = ret.begin(); 
      it != ret.end(); ++ it)
    cout << "(line " << *it+1 << ") " << tq.text_line(*it) << endl; 

  return 0; 
}
