class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<float,pair<int,int>> , vector<pair<float,pair<int,int>>>, greater<pair<float,pair<int,int>>> > pq;
        float frac;
        for(int i=0;i<arr.size()-1;i++){
            for(int j=i+1;j<arr.size();j++){
                frac = (float)arr[i]/arr[j];
                // cout<<frac<<endl;
                pq.push(make_pair(frac,make_pair(arr[i],arr[j])));
            }
        }    
        
        for(int ksmall=0;ksmall<k-1;ksmall++){
            pq.pop();
        }
        
        vector<int> res{pq.top().second.first,pq.top().second.second};
        return res;
    }
};