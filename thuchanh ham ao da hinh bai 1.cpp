#include <iostream>

using namespace std;

class nguoi{
 protected:
  string hoten;
 public:
  virtual void nhap();
  virtual int thuong()=0;
  virtual void xuat();
  string get_ten(){
   return hoten;
  }
};
void nguoi::nhap(){
 fflush(stdin);
 cout<<"\nNhap hoten: ",getline(cin,hoten);
}
void nguoi::xuat(){
 cout<<"\nHO TEN: "<<hoten;
}
class SV:public nguoi{
 private:
  int dttn;
 public:
  void nhap();
  void xuat();
  int thuong();
};
void SV::nhap(){
 cout<<"\n\tSINH VIEN: ";
 nguoi::nhap();
 cout<<"Diem thi tot nghiep: ";cin>>dttn;
 }
int SV::thuong(){
 if(dttn>8) return 1;
 else return 0;
}
void SV::xuat(){
 nguoi::xuat();
 cout<<"\nDiem thi tot nghiep: "<<dttn;
}
class GV:public nguoi{
 private:
  int sbb;
 public:
  void nhap();
  void xuat();
  int thuong();
  
};
void GV::nhap(){
 cout<<"\n\tGIANG VIEN: ";
 nguoi::nhap();
 cout<<"So bai bao: ";cin>>sbb;
}
int GV::thuong(){
 if(sbb>3) return 1;
 else return 0;
}
void GV::xuat(){
 nguoi::xuat();
 cout<<"So bai bao: "<<sbb;
}
int main(){
 nguoi *a[20];
 int size=0;
 int b;
 do {
  cout<<"\n1 Nhap sinh vien!";
  cout<<"\n2 Nhap giang vien!";
  cout<<"\nVui long nhap lua chon: ";
  cin>>b;
  switch(b){
   case 1:
    { 
     cout<<"\tNhap thong tin sinh vien!";
     a[size]=new SV;
     a[size]->nhap();
     size++;
     break;
    }
   case 2:
    {
     cout<<"\tNhap thong tin giang vien!";
     a[size]=new GV;
     a[size]->nhap();
     size++;
     break;
    }
   default:  break;
  }
  
 }while(b==1||b==2);
 string k;
 cout<<"Nhap ten can tim: ";getline(cin,k);
 cin.ignore();
 for(int i=0;i<=size;i++){
  if(a[i]->get_ten()==k){
   cout<<"Thong tin can tim la: ";
   a[i]->xuat();
  }
  else cout<<"Khong co thong tin can tim!!";
 }
 
}
