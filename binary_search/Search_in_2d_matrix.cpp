class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        int tempRow = 0, tempCol = colSize-1;
        while(tempCol>-1 && tempRow<rowSize){
            if(matrix[tempRow][tempCol]==target){
                return 1;
            }
            if( matrix[tempRow][tempCol]<target){
                tempRow++;
            }
            else{
                tempCol--;
            }
        }
        return 0;
    }
};