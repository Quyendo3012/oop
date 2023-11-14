#include <iostream>
#include <string>
using namespace std; 
const int n = 3;
class Matrix
{
	public: 
		void nhap();
		void xuat();
		Matrix();
		friend istream& operator>>(istream&in, Matrix&);
		friend ostream& operator<<(ostream&out, Matrix);
		Matrix operator+(Matrix);
		Matrix operator*(Matrix);
	private: 
		  int a[10][10];
          int n;
};

istream& operator>>(istream& is, Matrix& m){
   int mt;
   cout<<"Nhap kich thuoc ma tran: "; cin>>m.n;
   for(int i=0;i<m.n;i++)
		for(int j=0;j<m.n;j++){
		cout<<"a["<<i<<"]["<<j<<"]: ";
        cin>>mt;
        m.a[i][j]=mt;
     }
     return is;   
}
ostream& operator<<(ostream& os, Matrix m){
    for(int i=0;i<m.n;i++){
        for(int j=0;j<m.n;j++){
        cout<<m.a[i][j]<<"    ";
        }
        cout<<endl;  
        }
 return os;
}
Matrix operator+(Matrix u){
	Matrix v;
	v.n=u.n;
 	for(int i=0;i<u.n;i++)
    	for(int j=0;j<u.n;j++){
     	v.a[i][j]=this->a[i][j]+u.a[i][j];
    }
   return v;
}
Matrix operator *(Matrix a, Matrix b){
	Matrix ketqua;
	for (int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
		ketqua.a[i][j]=0;
		{
			for( int k=0;k<n;k++){
				ketqua.a[i][j]+=(a.a[i][k]*b.a[k][j]);
			}
		}
	}
	}
	return ketqua;
}


int main(){
Matrix mt1, mt2;
cout<<"Nhap ma tran 1: "<<endl;
cin>>mt1;
cout<<mt1;
cout<<"Nhap ma tran 2: "<<endl;
cin>>mt2;
cout<<mt2;
cout<<"Tong hai ma tran: "<<endl;
cout<<mt1+mt2;
cout<<"Tich hai ma tran: "<<endl;
cout<<mt1*mt2;
return 0;

}

