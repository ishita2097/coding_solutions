class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int> > maxLocal;
        vector<int> top,mid,bottom;
        for(int i=1;i<n-1;i++){
            vector<int> max_3x3, max_in_row;
            for(int j=1;j<n-1;j++){
                top={grid[i-1][j-1],grid[i-1][j],grid[i-1][j+1]};
                mid={grid[i][j-1],grid[i][j],grid[i][j+1]};
                bottom={grid[i+1][j-1],grid[i+1][j],grid[i+1][j+1]};
                max_3x3={*max_element(top.begin(),top.end()),
                            *max_element(mid.begin(),mid.end()),
                            *max_element(bottom.begin(),bottom.end())};
                max_in_row.push_back(*max_element(max_3x3.begin(),max_3x3.end()));
            }
            maxLocal.push_back(max_in_row);
        }
        return maxLocal;
    }
};