class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int max_cust_satisfied = 0, cust_num = customers.size();
        int window_curr = 0, window_max = 0, is_grumpy_window = 0;
        for(int i = 0; i < cust_num; i++){
            if(i>=minutes){
                if(is_grumpy_window > 0)
                    window_max = (window_max < window_curr)? window_curr : window_max;
                window_curr = grumpy[i-minutes]?(window_curr - customers[i-minutes]):window_curr;
                is_grumpy_window -= grumpy[i-minutes];
            }

            is_grumpy_window += grumpy[i];
            if(grumpy[i] == 0)
                max_cust_satisfied += customers[i];
            else
               window_curr += customers[i]; 

        }
        window_max = (window_curr>window_max)?window_curr:window_max;
        return max_cust_satisfied + window_max;
    }
};