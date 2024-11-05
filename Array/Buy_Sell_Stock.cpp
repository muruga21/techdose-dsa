class Solution{
    public:
    int maxProfit (vector<int>& prices){
        int min_ = prices[0];
        int max_ = 0;
        for(int i=1,i<=prices.size();i++){
            cur = prices[i] - min_;
            max_ = max(max_ , cur);
            min_ = min(min_ , prices[i]);
        }
        return max_;
    }
}
    
        