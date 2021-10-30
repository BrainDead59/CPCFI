//ID: 1090

#include<iostream>
#include<queue>

using namespace std;

int main(){
    priority_queue<int, vector<int>, greater<int>> aschil;
    priority_queue<int> deschil;
    int N,X, c, sum = 0, gondola = 0, auxmax, auxmin;

    scanf("%d %d",&N,&X);

    for(int i =0; i<N; i++){
        scanf("%d",&c);
        aschil.push(c);
        deschil.push(c);
    }

    while(N>0){
        auxmin = aschil.top();
        auxmax = deschil.top();
        sum = auxmin + auxmax;
        if(sum > X){
            gondola++;
            deschil.pop();
            N--;
        }else{
            gondola++;
            deschil.pop();
            aschil.pop();
            N -= 2;
        }
    }
    printf("%d\n",gondola);
    return 0;
}