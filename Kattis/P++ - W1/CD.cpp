//Kattis ID: cd
//PU++ Semana 1

#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    int a,b,contador=0,element;
    map <int,int> array;
    scanf("%d %d",&a,&b);

    while(1){
        if(a==0 && b==0){
            break;
        }
        
        for(int i=0;i<a;i++){
            scanf("%d",&element);
            array.insert(pair<int,int>(element,0));
        }

        for(int i=0;i<b;i++){
            scanf("%d", &element);
            if(array.find(element) != array.end()){
                contador++;
            }
        }

        printf("%d\n", contador);
        contador=0;
        array.clear();
        scanf("%d %d",&a,&b);
    }

    return 0;   
}