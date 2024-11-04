class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int high = n-1;
        int low = 0;
        while( low <= high ){
            int mid = low + (high-low)/2;
            if(nums[mid] == target) return mid;
            cout<<nums[mid]<<endl;
            if(nums[mid] >= nums[low]){ // first half sorted
                if( nums[low] <= target && nums[mid] > target ){
                    high = mid-1;
                }
                else{
                    low = mid+1;
                }
            }
            else {
                if( nums[mid] < target && nums[high] >= target ){ // second half sorted
                    low = mid + 1;
                }
                else{
                    high = mid-1;
                }
            }
        }
        
        return -1;
    }
};