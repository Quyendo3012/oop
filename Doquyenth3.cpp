#include<iostream>
using namespace std;

class Student{
	protected:
		string hoten, lop;
		int namsinh, tuoi;
	public:
		void input();
		void output();
};

void Student::input() {
	fflush(stdin);
	cout<<"Nhap ho va ten cua sinh vien: "; getline(cin,hoten);
	fflush(stdin);
	cout<<"Nhap lop: "; getline(cin,lop);
	cout<<"Nhap nam sinh: "; cin>>namsinh;
	cout<<"Nhap tuoi: "; cin>>tuoi;
}

void Student::output() {
	cout<<"\nHo ten: "<<hoten<<endl;
	cout<<"\nLop: "<<lop<<endl;
	cout<<"\nNam sinh: "<<namsinh<<endl;
	cout<<"\nTuoi: "<<tuoi<<endl;
}

class phieumuon:Student{
	protected:
		string sohieu, ngaymuon, hantra;
		int sophieumuon;
	public:
		void input();
		void output();
		int get_sophieumuon () {
			return sophieumuon;
		}
};

void phieumuon::input() {
	Student::input();
	fflush(stdin);
	cout<<"Nhap so phieu muon: "; cin>>sophieumuon;
	fflush(stdin);
	cout<<"Nhap ngay muon: "; getline(cin, ngaymuon);
	cout<<"Nhap han tra: "; getline(cin,hantra);
	cout<<"Nhap so hieu sach: "; getline(cin,sohieu);
}

void phieumuon::output(){
	Student::output();
	cout<<"\nSo phieu muon: "<<sophieumuon<<endl;
	cout<<"\nNgay muon: "<<ngaymuon<<endl;
	cout<<"\nHan tra: "<<hantra<<endl;
}

int tong_sophieumuon(phieumuon a[], int x) {
	int kq = 0;
	for (int i = 0 ;i<x; i++) {
		kq += a[i].get_sophieumuon();
	}
	return kq;
}

int main() {
	int x;
	cout<<"So luong sinh vien muon sach: "; cin>>x;
	phieumuon a[x];
	for (int i = 0 ;i<x; i++) {
		cout<<"\nXuat thong tin phieu muon thu "<<i+1<<endl;
		a[i].input();
	}
	cout<<"\n\nThong tin phieu muon:\n";
	for (int i = 0 ;i<x; i++) {
		cout<<"\nXuat hong tin phieu muon thu "<<i+1<<endl;
		a[i].output();
	}
	cout<<"\nTong so phieu muon: "<<tong_sophieumuon(a,x);
	
}
