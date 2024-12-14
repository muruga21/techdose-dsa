class Solution {
public:
    bool isValid(int mid, int m, int n, int k){
        int count = 0;
        for(int i = 1 ; i <= m; i++){
            count += min(mid/i,n);
        }
        // cout<<count<<" "<<mid<<" "<<endl;
        return count>=k;
    }
    int findKthNumber(int m, int n, int k) {
        int low = 1, high = m*n;
        while(low<high){
            int mid = low+(high-low)/2;
            if(!isValid(mid,m,n,k)){
                low=mid+1;
            }
            else high = mid;
        }
        return low;
    }
};