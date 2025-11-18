#include <iostream>
#include <vector>
#include <cstring>

using namespace std;


string longestCommonPrefix(vector<string>& strs) {
int j = -1;
bool equ  = 1 ;
string prefix="";

while(equ){
j++;
 if(strs.size() == 1){
 return strs[0];
 }
            for(int i=0; i<  strs.size(); i++ ){
                equ = (strs[0][j] == strs[i][j]);
                 if(!equ){
                    break;
                 }
            }
        if(equ){
           prefix +=  strs[0][j]; 
       }
       
      
       
  
}


  return prefix;
};



int main(int argc, char **argv){
  vector<string> str_arr = {"",""};

  string result;
       result = longestCommonPrefix(str_arr);
        cout << result << endl;
	return 0;
}


