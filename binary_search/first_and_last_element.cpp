class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans={0,0};
        int n=nums.size();
        bool found = false;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
                ans[0]=i;
                found = true;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(nums[i]==target){
                ans[1]=i;
                break;
            }
        }
        if(found==false){
            ans[0]=-1;
            ans[1]=-1;
        }
        return ans;
    }
};