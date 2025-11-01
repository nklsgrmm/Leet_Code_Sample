#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i =0; i< nums.size(); i++ ){
            for(int j =i; j< nums.size(); j++ ){
                if(nums[i]  + nums[j] == target){
                    return {i,j};
                }
            }
        }
        return {0,0};
    }
};

int main() {

Solution * solution1 = new Solution();
    vector<int> v1 = {2,7,11,15};
    vector<int> result;
    vector<int> result2;
    vector<int> &v2 = v1;
    result = solution1->twoSum(v2, 9);
    cout << result[0]  <<"\t" << result[1] << endl;
}