//CSES

#include <iostream>     
#include <algorithm>
using namespace std;


int main(){
	int t,a,b;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d",&a,&b);
		if(a>b){
			if(a>b*2 || (a+b)%3!=0){
				printf("NO\n");
			}else{
				printf("YES\n");
			}
		}else{
			if(b>a*2 || (a+b)%3!=0){
				printf("NO\n");
			}else{
				printf("YES\n");
			}
		}
	}
	return 0;
}