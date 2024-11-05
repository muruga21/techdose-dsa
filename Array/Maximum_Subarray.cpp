class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = 0;
        int maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            ans = ans+nums[i];
            if(maxi<ans){
                maxi = ans;
            }
            if(maxi<0){
                maxi=0;
            }
        }
        return maxi;
        
    }
};