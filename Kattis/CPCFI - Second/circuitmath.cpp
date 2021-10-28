#include <iostream>
#include <stack>

using namespace std;

int main(){
	int n, count=0;
	bool variables[26];
	string input;
	string aux;
	stack<bool> exp;

	cin >> n;
	getline(cin, aux);

	getline(cin, aux);
	for(int i = 0; i < aux.size(); i+=2){
		if(aux[i] == 'T'){
			variables[count] = true;
			count++;
		}
		else{
			variables[count] = false;
			count++;
		}
	}

	getline(cin, input);

	for(int i = 0; i < input.size(); i+=2){
		if(input[i] == '*'){
			bool aux1 = exp.top();
			exp.pop();
			bool aux2 = exp.top();
			exp.pop();

			exp.push(aux1&&aux2);
		}
		else if(input[i] == '+'){
			bool aux1 = exp.top();
			exp.pop();
			bool aux2 = exp.top();
			exp.pop();

			exp.push(aux1||aux2);
		}
		else if(input[i] == '-'){
			bool aux1 = exp.top();
			exp.pop();

			exp.push(!aux1);
		}
		else{
			exp.push(variables[(int)input[i] - 65]);
		}
	}
	
	if(exp.top()){
		cout << "T" << endl;
	}
	else{
		cout << "F" << endl;
	}

	return 0;
}