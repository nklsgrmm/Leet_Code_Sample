#include <iostream>
#include <vector>

using namespace std;


int ctoint(char c){
  switch (c){
  case 'I':
  return 1;
  case 'V':
  return 5;
  case 'X':
  return 10;
  case 'L':
  return 50;
  case 'C': 
  return 100;
  case 'D':
  return 500;
  case 'M':
  return 1000;
  }
return 0;

}



int main(int argc, char **argv){

  string s = argv[1];

int sum = 0;
        
        for(int i = 0; i < s.size()-1; i++){
          if( ctoint(s[i]) < ctoint(s[i+1]) ) {
            sum -= ctoint(s[i]);
          }
          else{
            sum += ctoint(s[i]);
          }
        
        
          
        }
        sum += ctoint(s[s.size()-1]);
        
        std::cout << sum << std::endl;
        
	return 0;
}


