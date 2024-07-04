class Solution {
public:
    bool isValid(string s) {
        stack<char> caracteres;
        caracteres.push('a');
        for(int i=0;i<s.length();i++){
            if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
                caracteres.push(s[i]);
            }
            if(s[i]==')'){
                if(caracteres.top()!='('){
                    return false;
                }else{
                    caracteres.pop();
                }
            }
            if(s[i]=='}'){
                if(caracteres.top()!='{'){
                    return false;
                }else{
                    caracteres.pop();
                }
            }
            if(s[i]==']'){
                if(caracteres.top()!='['){
                    return false;
                }else{
                    caracteres.pop();
                }
            }
        }
        if(caracteres.size()==1){
            return true;
        }else{
            return false;
        }
    }
};