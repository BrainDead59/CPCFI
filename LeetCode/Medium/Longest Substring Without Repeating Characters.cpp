class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> valores;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+"|| tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/"){
                int val2 = valores.top();
                valores.pop();
                int val1 = valores.top();
                valores.pop();
                if(tokens[i]=="+"){
                    valores.push(val1+val2);
                }
                if(tokens[i]=="-"){
                    valores.push(val1-val2);
                }
                if(tokens[i]=="*"){
                    valores.push(val1*val2);
                }
                if(tokens[i]=="/"){
                    valores.push(floor(val1/val2));
                }
            }else{
                valores.push(stoi(tokens[i]));
            }
        }
        return valores.top();
    }
};