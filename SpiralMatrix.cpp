class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {           
        vector<int> ans;

        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total = row*col;

        int startingRow = 0;
        int startingCol = 0;
        int endingCol = col-1;
        int endingRow = row-1;

        while(count<total) {

            //printing starting row
            for(int index=startingCol; count<total && index<= endingCol; index++ ){
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;

            //printing last column
            for(int index=startingRow; count<total && index <= endingRow; index++ ){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            //printing last Row
            for(int index=endingCol; count<total && index >= startingCol; index--){
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            //printing starting Col

            for(int index=endingRow; count<total && index>= startingRow; index-- ){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
        
    }
};
