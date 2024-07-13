/* You are given an array of prices where prices[i] is the price of agiven stock on an ith day.
You want to maximize your profit by choosing a single day to buyone stock and choosing a different day in the future to sell thatstock.
Return the maximum profit you can achieve from this transaction.If you cannot achieve any profit, return 0
*/

#include <iostream>
#include <vector>
using namespace std;

void bestBuySell(vector<int> prices, int& k) {
    int buy = prices[0];
    for(int i=1; i<prices.size(); i++) {
        if(prices[i] < buy) {
            buy = prices[i];
        }
        else if(prices[i] - buy > k) {
            k = prices[i] - buy;
        }
    }
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    int profit = 0;
    bestBuySell(prices, profit);
    cout << endl;
    cout << "Maximum profit is" << profit << endl;
}