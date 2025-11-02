//
// Created by Niklas Grimm on 01.11.25.
//

#ifndef TWO_SUM_MAP_H
#define TWO_SUM_MAP_H
#include <vector>
#include <unordered_map>

using namespace std;
class Solution_map {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        for(int i =0; i< nums.size(); i++ ) {
            map[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (map.count(complement) && map[complement] != i) {
                return {i, map[complement]};
            }
        }

        return {}; // No solution found

    }
};

class Solution_simple {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i =0; i< nums.size(); i++ ){
            for(int j =i; j< nums.size(); j++ ){
                if(nums[i]  + nums[j] == target and i != j){
                    return {i,j};
                }
            }
        }
        return {-1};
    }
};


#endif //TWO_SUM_MAP_H
