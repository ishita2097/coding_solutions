class Solution {
public:
    int passThePillow(int n, int time) {
        bool revert = (time/(n - 1))%2;
        cout<<revert;
        if(revert)
            return (n - time % (n - 1));
        return 1 + (time % (n - 1));
        
    }
};