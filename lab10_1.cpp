#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double x,y,z ;
	cout << "Enter initial loan: ";
	cin >> x ;
	cout << "Enter interest rate per year (%): ";
	cin >> y;
	cout << "Enter amount you can pay per year: ";
	cin >> z;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int i =1 ;
	while (x + x*y/100 >=z)
	{
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		i++;
		cout << setw(13) << left << x;
		cout << setw(13) << left << x*y/100 ;
		x += x*y/100;
		cout << setw(13) << left << x;
		cout << setw(13) << left << z;
		x -= z ;
		cout << setw(13) << left << x;
		cout << "\n";	
	}
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		i++;
		cout << setw(13) << left << x;
		cout << setw(13) << left << x*y/100 ;
		x += x*y/100;
		cout << setw(13) << left << x;
		cout << setw(13) << left << x;
		x -= x ;
		cout << setw(13) << left << x;

	

	
	return 0;
}
