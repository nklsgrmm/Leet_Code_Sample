#include <iostream>
#include <stack>
#include <map>

using namespace std;


bool isValid(string s) {

stack<char> syms;
map<char,char> complement;

complement={{'(',')'},{'{','}'}, {'[',']'}   };


int curl=0;
int bra = 0;
int edg = 0;
char latest;

for(int i=0; i<s.size(); i++){
  if(s[i] =='(' || s[i] =='['  || s[i] =='{'){
    syms.push(s[i]);
  }
  else if(i==0) {
    return false;
  }
  else if(!syms.empty()){
    if(s[i] == complement[syms.top()] ){
          syms.pop();
      }
      else{
        return false;
      }
  
  }
  else if(i==s.size()-1 && syms.empty() ){
    return false;
  }
  else if(syms.empty()){
      return false;
  }
  
  
}
  
  
   
  
  if(syms.empty()){
    return true;
  }
  else{
    return false;
  }
 

}



int main(int argc, char **argv){
  
string s = "Hallo" ;
         
         cout << isValid("]") << endl;
        cout << isValid("(])") << endl;
        cout << isValid("[])") << endl;
        cout << isValid("[]()}{}") << endl;
	
	return 0;
}


