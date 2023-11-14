#include<iostream>
#include<cmath>
using namespace std;

//1. count the divisors
void contare_Div(int n) {
	if (n<=0) cout<<"A khong phai la so nguyen duong\n";
	else {
		int outcome = 0;
		for (int i = 1; i<= n; i++) {
			if (n%i==0) outcome++;		
		}
		cout<<"A co "<<outcome<<" uoc so\n";
	}
}

//2. check primes
bool controlla_PriNum( int n) {
	if (n<2) return false;
	else {
		for (int i = 2; i<= n/2; i++) {
			if (n%i == 0) return false;
		}
		return true;
	}
}

//3. count digits that are primes in positive numbers 
int contare_PriNum( int n) {
	int result = 0;
	while(n) {
		int tempo = n%10;
		if (controlla_PriNum(tempo)) {
			result++;
		}
		n=n/10;
	}
	return result;
}
int main() {
	int A;
	cout<<"Nhap A = ";
	cin>>A;
	
	cout<<"\n* Dem so uoc so cua so nguyen duong A\n";
	contare_Div(A);
	
	cout<<"\n* Kiem tra so nguyen A co phai so nguyen to khong\n";
	if (controlla_PriNum(A)) cout<<A<<" la so nguyen to\n";
	else cout<<A<<" khong la so nguyen to\n";
	
	cout<<"\n* Kiem tra xem so nguyen duong A co bao nhieu chu so la so nguyen to\n";
	if (A<=0) cout<<endl<<"A khong phai la so nguyen duong";
	else cout<<"So nguyen duong A co "<<contare_PriNum(A)<<" chu so la so nguyen to";
	
	return 0;	
}
