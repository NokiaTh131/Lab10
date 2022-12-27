#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan, rate, pay, Prev, total, inter;
	cout << "Enter initial loan: "; //หนี้
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	Prev = loan;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	for(int i = 0;true;i++) {
		inter = Prev*(rate/100);
		total = inter + Prev;
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i+1; 
		cout << setw(13) << left << Prev;
		cout << setw(13) << left << inter;
		cout << setw(13) << left << total;
		if(total < pay) pay = total;
		cout << setw(13) << left << pay;
		cout << setw(13) << left << total - pay;
		cout << "\n";

		Prev = total - pay;
		if(Prev == 0) {
			break;
		}
	}	
	
	return 0;
}
