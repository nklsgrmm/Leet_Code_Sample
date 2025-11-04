#include <iostream>
#include "two_sum_map.h"


int main() {

    Solution_TwoSum  solution_TwoSum ;
    vector<int> v1 = {3,2,4};
    int target = 6;

    //Hello World
    vector<int> result;

    result = solution_TwoSum.twoSum_map(v1, target);
    cout << result[0]  <<"\t" << result[1] << endl;

    result = solution_TwoSum.twoSum_simple(v1, target);
    cout << result[0]  <<"\t" << result[1] << endl;
}