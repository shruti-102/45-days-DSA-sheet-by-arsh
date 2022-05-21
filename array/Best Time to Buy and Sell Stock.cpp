//time: O(n) space: O(n)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0,minbuy=prices[0];
        int n=prices.size();
        vector<int> dp(n,0);
        
        for(int i=1;i<n;i++)
        {
            minbuy=min(minbuy,prices[i]);
            dp[i]=max(dp[i-1],prices[i]-minbuy);
        }
        return dp[n-1];
    }
};

//********************************************************************

//time: O(n) space: O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0,minbuy=prices[0];
        int n=prices.size();
        int prevprofit=0,curprofit;
        
        for(int i=1;i<n;i++)
        {
            minbuy=min(minbuy,prices[i]);
            curprofit=max(prevprofit,prices[i]-minbuy);
            prevprofit=curprofit;
        }
        return curprofit;;
    }
}; 
