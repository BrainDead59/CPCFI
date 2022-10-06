string caesarCipher(string s, int k){
    for(int i=0;i<s.size();i++){
        if(s[i]>64 && s[i]<91){ //mayus
            s[i]=(s[i]-'A'+k)%26 +'A'; 
        }
        if(s[i]>96 && s[i]<123){ //minus
            s[i]=(s[i]-'a'+k)%26 +'a';
        }
    }
    return s;
}