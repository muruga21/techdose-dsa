#include<numeric>
class Solution {
public:
    int check(vector<int> weights , int days , int mid){
        int curr = 0;
        int c = 1;
        int n = weights.size();
        for(int i=0;i<n;i++){
            if(curr+weights[i]>mid){
                c+=1;
                curr = weights[i];
            }
            else{
                curr+=weights[i];
            }
        }
        if(c>days){
            return 0;
        }
        return 1;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(),weights.end());
        int high = accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid = low + (high-low)/2;
            cout<<mid<<" ";
            int ans = check(weights , days , mid);
            if(ans){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};