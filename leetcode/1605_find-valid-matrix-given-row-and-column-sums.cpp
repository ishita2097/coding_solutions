class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int row_nums = rowSum.size(), col_nums = colSum.size();
        vector<vector<int>> matrix(row_nums, vector<int>(col_nums, 0));
        for(int r = 0; r < row_nums; r++){
            for(int c = 0; c < col_nums; c++){
                matrix[r][c] = min(rowSum[r], colSum[c]);
                rowSum[r] -= matrix[r][c];
                colSum[c] -= matrix[r][c];
            }
        }
        return matrix;   
    }
};

// class Solution {
// public:
//     vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
//         vector<vector<int>> matrix;
//         vector<int> row;
//         int row_nums = rowSum.size(), col_nums = colSum.size();
//          for(int r = 0; r < row_nums; r++){
//             row.clear();
//             for(int c = 0; c < col_nums; c++){
//                 if(rowSum[r] <= colSum[c]){
//                     row.push_back(rowSum[r]);
//                     colSum[c] = colSum[c] - rowSum[r];
//                     rowSum[r] = 0;
//                 }
//                 else{
//                     row.push_back(colSum[c]);
//                     rowSum[r] = rowSum[r] - colSum[c];
//                     colSum[c] = 0;
//                 }
//             }
//             matrix.push_back(row);
//         }
//         return matrix;   
//     }
// };