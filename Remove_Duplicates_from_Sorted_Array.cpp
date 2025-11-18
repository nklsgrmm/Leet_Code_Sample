#include <iostream>
#include <stack>
#include <map>
#include <vector>

using namespace std;


int removeDuplicates(vector<int>& nums) {
       int erased =0;
       vector<int>::iterator it;
       for(it = nums.begin(); it != nums.end(); it++  ){
          if(*it == *(it+1)){
            nums.erase(it);
            it++;
            erased = 0;
          }
       }
       
       return erased;
}


void printVect(vector<int>& nums){
  
  for(vector<int>::iterator it = nums.begin(); it !=nums.end(); it++  ){
    cout << *it << endl;
  }
}


int main(int argc, char **argv){
  
  vector<int> vect = {1,1,2};
  printVect(vect);
  
  cout << removeDuplicates(vect) << endl;
  printVect(vect);

}


