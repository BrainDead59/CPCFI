class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(magazine.length()<ransomNote.length()){
            return false;
        }else{
            map<char,int> diccionarioM, diccionarioR;
            for(int i=0;i<magazine.length();i++){
                diccionarioM[magazine[i]]++;
            }
            for(int i=0;i<ransomNote.length();i++){
                diccionarioR[ransomNote[i]]++;
            }
            for(auto z: diccionarioR){
                if(diccionarioM[z.first]<z.second){
                    return false;
                }
            }
            return true;
        }
    }
};