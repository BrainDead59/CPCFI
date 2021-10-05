#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,P1,P2,S,D;
	scanf("%lld",&n);
	for(int i=0;i<n;i++){
		scanf("%lld %lld",&S,&D);
		if( (S-D)< 0 || (S+D)%2!=0 || (S-D)%2!=0){
			printf("impossible\n");
		}else{
			P1=(S+D)/2;
			P2=(S-D)/2;
			if(P1>P2){
				printf("%lld %lld\n",P1,P2);
			}else{
				printf("%lld %lld\n",P2,P1);
			}
		}
	}
    return 0;
}
