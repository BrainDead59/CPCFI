// Leetcode: Valid Anagram

class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mymap1;
        map<char,int> mymap2;
        if(s.size()==t.size()){
            for(int i=0;i<s.size();i++)
                mymap1[s[i]]+=1;
            
            for(int i=0;i<t.size();i++)
                mymap2[t[i]]+=1;
            
            int contador=0;
            for(int i=0;i<s.size();i++){
               if(mymap1[s[i]]==mymap2[s[i]])
                   contador++;
            }
            if(contador==s.size())
                return true;
            else
                return false;
        }else
            return false;
    }
};