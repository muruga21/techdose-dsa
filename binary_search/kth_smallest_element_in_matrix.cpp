class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int low = 0;
        int high = matrix.size();
        int n = matrix[0].size();
        while(low<=high){
            int mid = low + (high-low)/2;
            if(mid*n > k){
                high = mid-1;
            }
            else if( mid*n < k ){
                low = mid+1;
            }
            else{
                high = mid-1;
                break;
            }
        }
        return matrix[high][k-(high*n)-1];
    }
};