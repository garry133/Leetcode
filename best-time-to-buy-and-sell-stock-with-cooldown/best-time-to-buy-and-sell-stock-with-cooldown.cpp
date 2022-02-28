class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buy[prices.size()];
       int sell[prices.size()];
       int rest[prices.size()];
        buy[0]=0;
        sell[0]=-prices[0];
        rest[0]=INT_MIN;
        for(int i=1;i<prices.size();i++){
            buy[i]=max(buy[i-1],rest[i-1]);
            sell[i]=max(sell[i-1],buy[i-1]-prices[i]);
            rest[i]=sell[i-1]+prices[i];
        }
        return max(buy[prices.size()-1],rest[prices.size()-1]);
    }
};