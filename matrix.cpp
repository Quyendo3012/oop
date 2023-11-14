#include<iostream>
#include<iomanip>
using namespace std;
const int n = 3;

class Matrix{
	public:
		friend istream & operator >>(istream &in, Matrix &a);
		friend ostream &operator <<(ostream &out, Matrix a);
		int operator () (int h, int c) {
			return matran[h-1][c-1];
		}
		friend Matrix operator +(Matrix a, Matrix b);
		friend Matrix operator *(Matrix a, Matrix b);
	private:
		int matran[n][n];
};
istream & operator >>(istream &in, Matrix &a) {
	for ( int i = 0 ; i< n ; i++) {
		for(int j = 0 ; j<n ; j++) {
			cout<<"a["<<i+j<<"] = ";
			in>>a.matran[i][j];
		}
	}
	return in;
}
ostream & operator <<(ostream &out, Matrix a) {
	for ( int i = 0 ; i< n ; i++) {
		for(int j = 0 ; j<n ; j++) {
			out<<setw(5)<<left<<a.matran[i][j];
			if ((j+1)%n ==0) {
				cout<<endl;
			}
		}
	}
	return out;
}
Matrix operator +(Matrix a, Matrix b) {
	Matrix kq;
	for ( int i = 0 ; i< n ; i++) {
		for(int j = 0 ; j<n ; j++) {
			kq.matran[i][j] = a.matran[i][j] + b.matran[i][j];
		}
	}
	return kq;
}
Matrix operator *(Matrix a, Matrix b){
	Matrix kq;
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
		kq.matran[i][j]=0;
		{
			for( int k=0;k<n;k++){
				kq.matran[i][j]+=(a.matran[i][k]*b.matran[k][j]);
			}
		}
	}
	}
	return kq;
}

int main() {
	Matrix mt1,mt2;
	cout<<"Nhap ma tran 1: \n";
	cin>>mt1;
	cout<<"\nNhap ma tran 2:\n";
	cin>>mt2;
	cout<<"\nMa tran 1 co thong tin la:\n"<<mt1;
	cout<<"\n\nMa tran 2 co thong tin la:\n"<<mt2;
	Matrix phepcong = mt1+mt2;
	cout<<"\n--Tong 2 ma tran-- \n";
	cout<<phepcong;
	Matrix phepnhan = mt1*mt2;
	cout<<"--Tich 2 ma tran-- \n";
	cout<<phepnhan;
}
