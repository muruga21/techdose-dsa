class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int k = intervals.size();
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> arr;
        arr.push_back(intervals[0]);
        for(int i=1;i<k;i++){
            if(intervals[i][0]<=arr.back()[1]){
                arr.back()[1] = (max(intervals[i][1] , arr.back()[1]));
            }
            else{
                arr.push_back(intervals[i]);
            }
        }
        return arr;
        
        
    }
};