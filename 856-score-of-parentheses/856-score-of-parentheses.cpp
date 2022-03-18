class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.length();
        stack<int> stk;
        int score = 0;
        for(int i = 0; i < n; i++){
            if(s[i]=='('){
                stk.push(score);
                score = 0;
            }
            else {
                score = stk.top() + max(score*2, 1);
                stk.pop();
            }
        }
        return score;
    }
};