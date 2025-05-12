class Solution {
    public:
        bool isPalindrome(int x) {
            if(x<0)
                return false;
            long rev_num = 0; int y = x;
            while(y){
                rev_num = rev_num * 10 + (y%10);
                y = y/10;
                cout<<rev_num<<" "<<y<<endl;
            }    
            return (rev_num==x);
        }
    };