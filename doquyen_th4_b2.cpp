#include <iostream>
using namespace std;

class sanpham {
	protected: 
		string ten, nhasx; 
	public:
		virtual void nhap();
		virtual void xuat();
};

void sanpham::nhap(){
	fflush(stdin);
	cout<<"Nhap ten: "; getline(cin,ten);
	cout<<"Nhap ten nha san xuat : "; getline(cin,nhasx);
}

void sanpham::xuat(){
 cout<<"\nTen san pham: "<<ten;
 cout<<"\nNha san xuat: "<<nhasx;
}

class banle:public sanpham {
 private:
  	double giabanle = 0;
  	int soluong = 0;
 public:
 	int bill();
  	void nhap();
  	void xuat();
};

void banle::nhap(){
	cout<<"\n\tBAN LE: ";
 	sanpham::nhap();
 	cout<<"\nNhap gia: "; cin>>giabanle;
 	cout<<"\nSo luong: "; cin>>soluong;
 	while (soluong >=10 or soluong <0);
 		cout<<"So luong hop le nho hon 10"; cin>>soluong; 
 }
 
void banle::xuat(){
	sanpham::xuat();
 	cout<<"\nDon gia: "<<giabanle;
 	cout<<"\nSo luong: "<<soluong;
}

int banle::bill(){
 	return giabanle * soluong;
}

class bansi: public sanpham{
	private: 
		double giabansi = 0;
		int soluong = 0;	
	public: 
	int bill();
  	void nhap();
  	void xuat();
};	

void bansi::nhap(){
	cout<<"\n\tBAN SI: ";
 	sanpham::nhap();
 	cout<<"\nNhap gia si: "; cin>>giabansi;
 	cout<<"\nSo luong si: "; cin>>soluong;
 	while (soluong <=100 or soluong >0);
 		cout<<"So luong hop le lon hon 100"; cin>>soluong; 
 }
 
void bansi::xuat(){
	sanpham::xuat();
 	cout<<"\nDon gia: "<<giabansi;
 	cout<<"\nSo luong: "<<soluong;
}
int get_min(sanpham *a[], int n) { 
	int kq = a[0] >bill();
	for (int i=1; i<n; i++) {
		if (a[i]->bill() < kq){
			kq = a[0] ->bill();
		}
	}
	return kq;
} 
	
int main(){
	int n = 0;
	cout<<"Nhap so doi tuong can nhap: "; cin>>n;
	sanpham *a[n];
	banle *bl = new banle[n];
	bansi *bs = new bansi[n];
	for( int i = 0; i<n; i++) {
		int b;
		cout<<"\n1.--Ban le-- ";
  		cout<<"\n2.--Ban si-- ";
  		cout<<"\nHay nhap lua chon: ";
  		cin>>b;
  switch(b){
   case 1:
    {
	banle bl;
	a[i] = &bl; 
    cout<<"\tNhap thong tin san pham ban le!";
    a[i]->nhap();
    break;
    }
   case 2:
    {
    bansi bs;
    cout<<"\tNhap thong tin san pham ban si!";
    a[i]= &bs;
    a[i]->nhap();
    break;
    }
   default: break;
  }
}
	fflush(stdin);
	int billMin = get_min(a, n);
	int stt = 0;
	cout<<"\n\nThanh toan it nhat la: "<<billMin;
	cout<<"\nSan pham co thanh toan it nhat: "<<endl;
	
		}
	}
	}
		
}
