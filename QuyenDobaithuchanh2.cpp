#include <iostream>
#include <string>
using namespace std;

class sinhvien
{
	private:
	string msv, tensv, lop;	
		
	public:
		
		void nhap();
		void xuat();
		double score;	
		string get_ma()
		{
			return msv;
		void set_ma(string s);	
};

void sinhvien::nhap()
{
	fflush(stdin);
	cout<<"Nhap ma sinh vien: "; getline(cin, msv);
	cout<<"Nhap ho ten sinh vien: "; getline(cin, tensv);
	cout<<"Nhap lop: "; getline(cin, lop);
	cout<<"Nhap diem: "; cin>>score;
}

void sinhvien::xuat() 
{
	cout<<"Ma sinh vien: "<<msv<<endl;
	cout<<"\nHo ten sinh vien: "<<tensv<<endl;
	cout<<"\nLop: "<<lop<<endl;
	cout<<"\nDiem: "<<score<<endl;
}
void sinhvien::set_ma(string s)
{
	msv = s;
}
int main() {
	int n, max_score;
	string s;
	do{
		cout<<"Nhap so sinh vien: ";
		cin>>n;
	}while(n<=0 || n>10);
	sinhvien sv[20]];
	for ( int i = 0; i< n; i++) {
		cout<<"\nSinh vien thu "<<i+1<<endl;
		sv[i].nhap();
		for (int j = 0; j<i; j++){
		
			if(sv[i].get_ma()==sv[j].get_ma()){
				cout<<endl;
				cout<<"DA PHAT HIEN TRUNG MA, XIN HAY NHAP LAI! ";
				fflush(stdin);
				getline(cin,s);
				sv[i].set_ma(s);
				cout<<endl;
				break;
			}
		}
	}
	for ( int i = 0 ; i<n; i++) {
		cout<<"\nIn ra thong tin sinh vien thu "<<i+1<<endl;
		sv[i].xuat();
	}
	
	// Print out the info of the student with highest score
	max_score = 0;
	for (int i = 1 ; i<n; i++) {
		if (sv[i].score > sv[max_score].score) max_score = i;
	}
	cout<<"\nSinh vien co so diem cao nhat: "<<endl;
	sv[max_score].out();
	
	return 0;

}
