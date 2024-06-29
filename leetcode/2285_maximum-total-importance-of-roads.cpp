class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        long long max_tot_imp = 0;
        vector<int> vertices_count(n,0);
        int size_ = roads.size();
        for(int i=0; i<size_; i++){
            for(int j=0; j<2; j++){
                // cout<<roads[i][j]<<endl;
                vertices_count[roads[i][j]]++;
            }
        }
        sort(vertices_count.begin(), vertices_count.end());
        for(int i=0; i<n; i++){
            // cout<<vertices_count[i]<<endl;
            max_tot_imp += (long long)vertices_count[i]*(i+1);
        }

        return max_tot_imp;  
    }
};