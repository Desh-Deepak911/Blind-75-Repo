// WAP to return indices of the two numbers from a numbers array such that they add up to the target.

#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void findTwoSum (vector<int> nums, int target, vector<int>& result) {
    sort(nums.begin(), nums.end());
    int i=0;
    int size = nums.size();
    int j=size-1;
    while(i<size-1 || j>i) {
        if(nums[i] + nums[j] > target) {
            j--;
        }
        else if(nums[i] + nums[j] < target) {
            i++;
        }
        else {
            result.push_back(i);
            result.push_back(j);
            return;
        }
    }
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int k = 9;
    vector<int> result;
    findTwoSum(nums, k, result);
    for(auto i: result) {
        cout << result[i] << endl;
    }
}