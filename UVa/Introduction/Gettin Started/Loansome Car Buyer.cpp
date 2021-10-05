#include <bits/stdc++.h>

using namespace std;

int main() {
	int months, casos,j=0;
	double payment, loan, worth=0, pago=0;

	while (1){
		cin >> months >> payment >> loan >> casos;
		
		if (months < 0){
			break;
		}

		double deps[months];
		int month;
		double dep;

		while (casos--) {
			cin >> month >> dep;
			for (int i = month; i < months; i++){
				deps[i] = dep;
			}
		}

		month = 0;
		pago = loan/months;
		worth = loan + payment;
		worth = worth - (worth*deps[0]);
		
		while (worth < loan) {
			month++;
			loan -= pago;
			worth =worth - (worth*deps[month]);
		}
		
		if (month == 1){
			cout << "1 month" << endl;
		}
		else{
			cout << month << " months" << endl;
		}
		
	}

	return 0;
}
