// Problem : best time to buy and sell stock 
// platform ; takeuforward
// difficulty :medium 
// TC : O(N)
// SC : O(1)

class Solution{
public:
    int stockBuySell(vector<int> arr, int n){
        int cost = INT_MIN;
        int mini = arr[0];
        int profit =0;
        for(int i=1 ; i<n; i++) {
            cost = arr[i] - mini;
            profit = max(profit , cost);
            mini = min ( mini , arr[i]);
        }
        return profit;
    }
};
