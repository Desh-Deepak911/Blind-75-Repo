/*Given an integer array nums, return true if any value appears atleast twice in the array,
and return false if every element isdistinct.*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

bool isDuplicate(vector<int> arr) {
    unordered_map<int, int> hashmap;
    for (auto i: arr) {
        hashmap[i]++;
        if(hashmap[i] > 1) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {1, 1, 2, 3};
    bool hasDuplicates = isDuplicate(arr);
    cout << hasDuplicates << endl;
}