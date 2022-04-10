class Solution {
public:
    int calPoints(vector<string>& ops) {   
        stack<int> stk;
        for(auto op:ops){
            if(op == "+"){
                int a = stk.top();
                stk.pop();
                int b = stk.top();
                stk.push(a);
                stk.push(a+b);
            }
            else if(op == "D"){
                stk.push(stk.top()*2);
            }
            else if(op == "C"){
                stk.pop();
            }
            else{
                stk.push(stoi(op));
            }
        }
        int score = 0;
        while(!stk.empty()){
            score += stk.top();
            stk.pop();
        }
        return score;
    }
};