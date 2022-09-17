//Leetcode: Group Anagrams
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mymap;
        for(int i=0;i<strs.size();i++){
            string st= strs[i];
            sort(st.begin(),st.end());
            mymap[st].push_back(strs[i]);
        }
            
        vector<vector<string>> result;
        for(auto z: mymap){
            result.push_back(z.second);
        }
        return result;
    }
};