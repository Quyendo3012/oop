#include<iostream>
using namespace std;

class staff{
	private:
		string staffCode;
		string fullName;
		int yearBirth;
		string major;
	public:
		int salary;
		void input();
		void output();		
};

void staff::input() {
	fflush(stdin);
	cout<<"Nhap ma nhan vien: ";
	getline(cin, staffCode);
	cout<<"Nhap ho ten: ";
	getline(cin, fullName);
	cout<<"Nhap nam sinh: ";
	cin>>yearBirth;
	fflush(stdin);
	cout<<"Nhap chuyen mon: ";
	getline(cin, major);
	cout<<"Nhap bac luong: ";
	cin>>salary;
}

void staff::output() {
	cout<<"Ma nhan vien: "<<staffCode<<endl;
	cout<<"Ho ten: "<<fullName<<endl;
	cout<<"Nam sinh: "<<yearBirth<<endl;
	cout<<"Chuyen mon: "<<major<<endl;
	cout<<"Bac luong: "<<salary<<endl;
}
int main() {
	staff nv[20];
	int n, pos_max_salary;
	do{
		cout<<"So nhan vien can nhap: ";
		cin>>n;
	}while(n<=0 || n>5);
	for ( int i = 0; i< n; i++) {
		cout<<"\nNhap nhan vien thu "<<i+1<<endl;
		staff temp;
		temp.input();
		nv[i] = temp;
	}
	for ( int i = 0 ; i<n; i++) {
		cout<<"\nXuat thong tin nhan vien thu "<<i+1<<endl;
		nv[i].output();
	}
	
	// Print out the info of the person with the highest salary
	pos_max_salary = 0;
	for (int i = 1 ; i<n; i++) {
		if (nv[i].salary > nv[pos_max_salary].salary) pos_max_salary = i;
	}
	cout<<"\nNhan vien co bac luong cao nhat: "<<endl;
	nv[pos_max_salary].output();
	
	return 0;

}
