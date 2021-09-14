#include <bits/stdc++.h>
using namespace std;

int main(){
	int k,C[2],O[2];
	scanf("%d",&k);
	while(k!=0){
		scanf("%d %d",&O[0],&O[1]);
		for(int i=0;i<k;i++){
			scanf("%d %d",&C[0],&C[1]);
			if(C[0]==O[0] || C[1]==O[1] ){
				printf("divisa\n");
			}else if(C[0]>O[0]){
				if(C[1]>O[1]){
					printf("NE\n");
				}else{
					printf("SE\n");
				}
			}else{
				if(C[1]>O[1]){
					printf("NO\n");
				}else{
					printf("SO\n");
				}
			}
		}
		scanf("%d",&k);
	}
	return 0;
}
