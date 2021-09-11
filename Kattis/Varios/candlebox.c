#include<stdio.h>
int main(){
	int d,r,t,i,j;
	int rita[45],theo[45];
	scanf("%d",&d);
	scanf("%d",&r);
	scanf("%d",&t);
	
	for(i=0;i<45;i++){
		rita[i]=0;
		theo[i]=0;
	}
	
	i=3;
	j=d;
	while(1){
		if(i>=3){
			theo[i] = i + theo[i-1];
		}
		if(i>=4){
			rita[i] = i + rita[i-1];
		}
		if(theo[j-d] + rita[j] == r + t){
			printf("%d",r-rita[j]);
			break;
		}
		j++;
		i++;
	}
/*
	for(i=3;i<45;i++){
		if(i>=3){
			theo[i] = i + theo[i-1];
		}
		if(i>=4){
			rita[i] = i + rita[i-1];
		}
	}
	
	for(i=d;i<45;i++){
		if(theo[i-d] + rita[i] == r + t){
			printf("%d",r-rita[i]);
		}
	}*/
	
	return 0;
}
