#include<stdio.h>

int main(){
	int W[1],P[101],L[101];
	scanf("%d",&W[0]);
	scanf("%d",&W[1]);
	int i,j;
	
	for(i=0;i<W[0]+1;i++){
		L[i]=0;
	}
	
	L[W[0]]=W[0];
	for(i=0;i<W[1];i++){
		scanf("%d",&P[i]);
		L[P[i]]=P[i];
		int prueba=W[0]-P[i];
		if(prueba<W[0] && prueba>0){
			L[prueba]=prueba;
		}
		j=i;
	}
	
	i--;
	while(1){
		while(i>-1){
			int prueba=P[j]-P[i];
			if(prueba<W[0] && prueba>0){
				L[prueba]=prueba;
			}
			i--;
		}
		i=j--;
		if(j==1){
			break;
		}
		j--;
	}
	
	for(i=1;i<W[0]+1;i++){
		if(L[i]!=0){
			printf("%d ",L[i]);
		}
	}

	return 0;
}

