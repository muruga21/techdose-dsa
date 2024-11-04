class Solution {
public:

    bool isCapable(vector<int>& weights, int days, int currentLoad){
        int helper = 0;
        int currdays = 1;
        for(auto x : weights){
            if((helper + x) > currentLoad){
                helper = 0;
                currdays++;
            }
            helper += x;
            if(currdays > days){
                return false;
            }
        }
        return true;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int maxWeight = *max_element(weights.begin(), weights.end());
        int totalWeight = 0;
        for(auto x : weights) totalWeight+=x;
        int low = maxWeight;
        int high = totalWeight;
        
        while(low < high){
            int mid = low + (high - low) / 2;
            if(isCapable(weights, days, mid)){
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
