#include<iostream>

using namespace std;

int main(){
	string DNA;
	int con = 1, i, aux;
	
	cin>> DNA;
	for(i=0; i<DNA.length(); i++){
		if(DNA[i]==DNA[i+1]){
			con++;
		}
		if(DNA[i]!=DNA[i+1]){
			con = 1;
		}
		if(con>=aux){
				aux = con;
		}
	}
	cout<<aux;
	return 0;
}
