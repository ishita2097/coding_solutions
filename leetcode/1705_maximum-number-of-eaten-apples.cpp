class Solution {
public:
    int eatenApples(vector<int>& apples, vector<int>& days) {
        int apples_eaten=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> day_apple_counter;
        pair<int,int> top;
        int i;
        for(i=0;i<apples.size();i++){
            if(day_apple_counter.size()==0){
                if(apples[i]==0)
                    continue;
                else{
                    apples_eaten++;
                    if(apples[i]-1!=0)
                        day_apple_counter.push({days[i]+i,apples[i]-1});
                }
            }
            else{
                if(apples[i]!=0)
                    day_apple_counter.push({days[i]+i,apples[i]});
                top=day_apple_counter.top();
                day_apple_counter.pop();
                
                apples_eaten++; 
                if(top.second-1!=0 && top.first>i+1){
                    day_apple_counter.push({top.first,top.second-1});
                }
                
                top=day_apple_counter.top();
                while(top.first==i+1 && day_apple_counter.size()>0){
                    // cout<<top.first<<top.second;
                    day_apple_counter.pop();
                    top=day_apple_counter.top();
                }
                
            }
        }
        while(day_apple_counter.size()!=0){
            top=day_apple_counter.top();
            // cout<<top.second;
            while((top.first<i+1 || top.second==0) && day_apple_counter.size()>0){
                // cout<<"popped";
                day_apple_counter.pop();
                top=day_apple_counter.top();    
            }
            if(day_apple_counter.size()>0){
                apples_eaten++;
                top=day_apple_counter.top();
                day_apple_counter.pop();
                day_apple_counter.push({top.first,top.second-1});    
            }
            i++;   
        }
        return apples_eaten;

    }
};