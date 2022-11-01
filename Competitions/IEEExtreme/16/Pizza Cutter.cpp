#include <iostream>
#include <set>

using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
        
        int N;
        cin >> N;
        set<int> d;
        if(N==0){
            cout <<"1\n";
        }else{
            for(int j=0; j<N;j++){
                int a;
                cin >> a;
                while(a<0){
                    a=a+360;
                }

            a=a%180;
            d.insert(a);
            }
            cout << d.size()*2 << "\n";
        }
        
    }
    return 0;
}