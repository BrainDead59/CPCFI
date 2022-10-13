
class Nodo{
    public:
        class Nodo* hijos[26]={};
        bool esHoja=false;
        bool tienePre=false;
};

class Trie{
    Nodo* root;
    
    public:
        Trie(){
            root = new Nodo();
        }
        
        bool insertarVerificar(string s){
            Nodo* actual = root;
            for (int i=0;i<s.length();i++){
                if (actual->hijos[s[i]-'a']== nullptr) {
                    actual->hijos[s[i]-'a'] = new Nodo();
                    actual->tienePre=true;
                }
                actual = actual->hijos[s[i]-'a'];
                if(actual->esHoja==true) return true;
            }
            if(actual->tienePre==true) return true;
            actual->esHoja = true;
            return  false;
        }
};

int noPrefix(vector<string> words) {
   Trie* arbol = new Trie();
   for(int i=0;i<words.size();i++){
       bool verifica=arbol->insertarVerificar(words[i]);
       if(!verifica){
           continue;
       }else{
           cout << "BAD SET\n" << words[i]; 
           return 0;
       }
   }
   cout << "GOOD SET\n"; 
   return 0;
}