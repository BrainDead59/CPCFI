class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==1){
            return 1;
        }
        int n=s.length(),maxi=0,val;
        for(int j=0;j<n;j++){
            int i=j;
            unordered_set<char> caracter;
            while(i<n){
                if(caracter.find(s[i]) != caracter.end()){
                    val=caracter.size();
                    maxi = max(maxi,val);
                    break;
                }else{
                    caracter.insert(s[i]);
                    val=caracter.size();
                    maxi = max(maxi,val);
                }
                i++;
            }
        }
        return maxi;
    }
};