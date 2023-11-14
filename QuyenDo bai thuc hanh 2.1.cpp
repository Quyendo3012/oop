#include <iostream>
#include <string>
using namespace std; 

class Box 
{
	public: 
		void nhap();
		void xuat();
		int get_cdai(){
			return cdai;
		}
		int get_crong(){
			return crong;
		}
		int get_ccao(){
			return ccao;
		}
		friend istream &operator >> (istream &in, Box &c);
		friend ostream &operator << (ostream &out, Box &c);
		friend bool operator ==(Box m, Box n);
	private: 
		int cdai, crong, ccao;
	
};

istream &operator >> (istream &in, Box &c)
{
	cout<<"Nhap chieu dai box: "; in>>c.cdai;
	cout<<"Nhap chieu rong box: "; in>>c.crong;
	cout<<"Nhap chieu cao box: "; in>>c.ccao;
	return in;
}

ostream &operator << (ostream &out, Box &c)
{
	cout<<"\nChieu dai la: "<<c.cdai;
	cout<<"\nChieu rong la: "<<c.crong;
	cout<<"\nChieu cao la: "<<c.ccao;
	return out;
}
bool operator == (Box m,  Box n)
{
	if(m.get_cdai() == n.get_cdai() && m.get_crong ()== n.get_crong() && m.get_ccao() == n.get_ccao())
	{
		return true;
	}
	return false;
}

int main ()
{
	Box m,n;
	cout<<"Nhap box thu 1: \n";
	cin>>m;
	cout<<"\nNhap box thu 2:\n";
	cin>>n;
	cout<<"\n\nBox 1 co thong tin la: ";
	cout<<m;
	cout<<"\n\nBox 2 co thong tin la: ";
	cout<<n;
	if(m==n) {
		cout<<"\n\nVay 2 khoi hop nay bang nhau";
	} else {
		cout<<"\n\nVay 2 khoi hop nay khong bang nhau";
	return 0;
	}
}
	
