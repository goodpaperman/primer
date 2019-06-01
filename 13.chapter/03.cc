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
#include <utility> 
#include <stdexcept> 

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

class Message; 
class Folder{
public:
  Folder() {}
  void addmsg(Message &msg)
       { messages.insert(&msg); }
  void remmsg(Message &msg)
       { messages.erase(&msg); } 
  void dump(); 

private:
  set<Message*> messages;  
}; 

class Message{
public:
  Message(const string &str = ""):contents(str) {}
  Message(const Message &m) : contents(m.contents), folders(m.folders)
         { put_msg_in_folders(folders.begin(), folders.end()); }
  Message& operator=(const Message &rhs){
    if(&rhs != this){
      remove_msg_from_folders(); 
      contents = rhs.contents; 
      folders = rhs.folders; 
      put_msg_in_folders(rhs.folders.begin(), rhs.folders.end()); 
    }
    return *this; 
  }
  ~Message()
        { remove_msg_from_folders(); }
  void save(Folder& folder)
        { folders.insert(&folder); }  
  void remove(Folder& folder)
        { folders.erase(&folder); }
  string str() { return contents; }

private:
  string contents; 
  set<Folder*> folders; 
  void put_msg_in_folders(set<Folder*>::iterator first, 
                          set<Folder*>::iterator last){
    for(set<Folder*>::iterator it = first; it != last; ++ it)
      (*it)->addmsg(*this); 
  }

  void remove_msg_from_folders(){
    for(set<Folder*>::iterator it = folders.begin(); 
        it != folders.end(); ++ it)
      (*it)->remmsg(*this); 
  }
}; 

void Folder::dump()
{
  for(set<Message*>::iterator it = messages.begin(); 
      it != messages.end(); ++ it)
  {
    cout << (*it)->str() << endl; 
  }
}

int main(int argc, char **argv)
{
  Folder f; 
  Message m("OK"), m2(m), m3 = m2, m4; 
  m4 = m3; 
  f.addmsg(m);
  f.addmsg(m2); 
  f.addmsg(m3); 
  f.addmsg(m4); 
  m.save(f);  
  m2.save(f); 
  m3.save(f); 
  m4.save(f); 
  f.dump(); 
  return 0; 
}
