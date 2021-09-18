#include <bits/stdc++.h>

using namespace std;

int main() {
	float H,U,D,F,Dt,can;
	int dias;
	scanf("%f %f %f %f",&H,&U,&D,&F);
	while(H>0){
		
		can=U*(F/100);
		Dt=0;
		dias=1;
		while(1){
			Dt+=U;
			if(U > 0){
				U-=can;
			} 
			
			if(Dt>H){
				cout << "success on day ";
				break;
			}
			Dt-=D;
			if(Dt<0){
				cout << "failure on day ";
				break;
			}
			dias++;
		}
		cout << dias << "\n";
		scanf("%f %f %f %f",&H,&U,&D,&F);
	}
	return 0;
}
