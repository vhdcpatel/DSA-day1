#include <algorithm>
#include <iostream>
#include <vector>
// #include<bits/stdc++.h>
using namespace std;

// Better code:
int bestTimeToBuyAndSellStock(vector<int>& prices) {
  int maxProfit = 0;
  int low = 0, high = 0;
  while (high < prices.size()) {
    int profit = prices[high] - prices[low];
    if (prices[high] < prices[low]) {
      low = high;
    }
    maxProfit = max(maxProfit, profit);
    high++;
  }
  return maxProfit;
}

// My code logic
int maxProfit(vector<int>& prices) {
  int maxProfit = 0, profit = 0;
  int low = 0, high = 1;
  while (high < prices.size()) {
    profit = prices[high] - prices[low];
    if (prices[high] >= prices[low]) {
      high++;
    } else if (prices[high] < prices[low]) {
      // low++;
      // bug here draw line chart to understand.(if it beats low then it will be
      // lowest so we have to move low directly to that point.)
      low = high;
      // high = low + 1;
    }
    maxProfit = max(maxProfit, profit);
  }
  return maxProfit;
}

// from striver code.
int maxProfit2(vector<int>& prices) {
  int mini = prices[0];
  int maxProfit = 0;
  int n = prices.size();
  for (int i = 0; i < n; i++) {
    int cost = prices[i] - mini;
    maxProfit = max(maxProfit, cost);
    mini = min(mini, prices[i]);
  }
  return maxProfit;
}

/*
  // From leet-code submission.
 int profit = 0;
        int currMax = prices[prices.size() -1];
        for(int i=prices.size()-2;i>=0;i--){
            if(currMax < prices[i]) {
                currMax = prices[i];
            } else {
                profit = max(profit,currMax-prices[i]);
            }
        }

        return profit;
*/

int main() { return 0; }