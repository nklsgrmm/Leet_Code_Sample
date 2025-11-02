#include <iostream>
#include "two_sum_map.h"


int main() {

    Solution_map  solution_map1 ;
    Solution_simple solution_simple1;
    vector<int> v1 = {3,2,4};
    int target = 6;

    //Hello World
    vector<int> result;

    result = solution_map1.twoSum(v1, target);
    cout << result[0]  <<"\t" << result[1] << endl;

    result = solution_simple1.twoSum(v1, target);
    cout << result[0]  <<"\t" << result[1] << endl;
}