//Kattis ID: zoo 
//PU++ Semana 1


#include <bits/stdc++.h>
using namespace std;
 
int main(){
    cin.tie(0);
    int n,contador=0;
    string s;
    vector<string> zoo;
    set<string> zo;
    vector<string> z;

    scanf("%d",&n);
    getline(cin,s);
    while(n!=0){
        contador++;
        for(int i=0;i<n;i++){
            getline(cin,s);
            stringstream ss(s);
            string word;
            while (ss >> word) {
                transform(word.begin(), word.end(), word.begin(),[](unsigned char c){ return std::tolower(c); });
                z.push_back(word);
            }
            zoo.push_back(z[z.size()-1]);
            zo.insert(z[z.size()-1]);
            z.clear();
        }
        sort(zoo.begin(),zoo.end());

        printf("List %d:\n",contador);
        for(auto i : zo){
            int numero = count(zoo.begin(), zoo.end(), i);
            cout << i << " | " << numero << endl;
        }
        
        zoo.clear();
        zo.clear();
        scanf("%d",&n);
        getline(cin,s);
    }
    return 0;
}