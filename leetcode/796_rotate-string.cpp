class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length() != goal.length())
            return false;
        if(s==goal)
            return true;

        queue<char> s_q, goal_q;
        for(char s_i: s)
            s_q.push(s_i);

        for(char g_i: goal)
            goal_q.push(g_i);

        for(char c: s){
            s_q.push(s_q.front());
            s_q.pop();
            if(s_q==goal_q)
                return true;
        }
        return false;
    }
};