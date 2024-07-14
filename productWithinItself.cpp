/* Given an integer array nums, return an array answer such thatanswer[i] is equal to the product of all the elements of numsexcept nums[I].

The product of any prefix or suffix of nums is guaranteed to fit in a32-bit integer.

You must write an algorithm that runs in O(n) time and withoutusing the division operation.
*/

#include <iostream>
#include <vector>
using namespace std;

void productItself(vector<int> arr, vector<int>& result) {
    // create a prefix product array
    vector<int> prefixProduct = arr;
    vector<int> suffixProduct = arr;
    int n = arr.size();
    prefixProduct[0] = 1;
    suffixProduct[n-1] = 1;
    for(int i=1; i<arr.size(); i++) {
        prefixProduct[i] = prefixProduct[i-1] * arr[i-1];
    }
    for(int i = n-2; i>=0; i--) {
        suffixProduct[i] = suffixProduct[i+1] * arr[i+1];
    }
    for(int i=0; i<n;i++) {
        cout << prefixProduct[i] * suffixProduct[i];
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    vector<int> result;
    productItself(arr, result);
}