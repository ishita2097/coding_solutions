class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> a(edges[0]), b(edges[1]);
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[0] || a[i]==b[1])
                return a[i];
        } 
        return -1;  
    }
};