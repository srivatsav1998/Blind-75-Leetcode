int maxProfit(vector<int>& prices) {
    int ans = 0;
    int first = prices.size()-2;
    int second = prices.size()-1;
    
    while(first >= 0)
    {   
        int val = prices[second] - prices[first];
        if(val <= 0)
        {
            second = first;
        }
        else
        {
            ans = max(ans, val);
        }
        first--;
    }
    return ans;
}