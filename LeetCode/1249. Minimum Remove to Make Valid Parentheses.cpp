class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string solutionClose="";
        int open=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                open++;
            }else if(s[i]==')'){
                if(open==0){
                    continue;
                }
                open--;
            }
            solutionClose+=s[i];
        }
        
        string solutionOpen="";
        for(int i=solutionClose.length()-1;i>=0;i--){
            if(solutionClose[i]=='('){
                if(open-- > 0){
                    continue;
                }
            }
            solutionOpen+=solutionClose[i];
        }
        reverse(solutionOpen.begin(), solutionOpen.end());
        
        return solutionOpen;
    }
};