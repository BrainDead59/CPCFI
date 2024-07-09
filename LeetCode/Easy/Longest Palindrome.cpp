class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> diccionario;
        for(int i=0;i<s.length();i++){
            diccionario[s[i]]++;
        }
        int contador=0;
        bool bandera=false;
        for(auto z: diccionario){
            if(z.second%2==0){
                contador+=z.second;
            }else{
                contador+=z.second-1;
                bandera=true;
            }
        }
        if(bandera) contador++;
        return contador;
    }
};