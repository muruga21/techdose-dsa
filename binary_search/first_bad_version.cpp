// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int stop = n;
        while(start<stop){
            int mid = start + (stop - start) / 2;
            if(isBadVersion(mid)){
                stop = mid;
            }
            else{
                start = mid+1;
            }
        }
        return start;
    }
};