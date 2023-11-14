#include <iostream>
using namespace std;
class time{
    private:
        int hour,min,sec;
    public:
        friend istream &operator >> (istream &in,time &a);
        friend ostream &operator << (ostream &out,time a);
        operator int();
};

istream &operator >> (istream &in,time &a){
    cout<<"Nhap gio: ";in>>a.hour;
    cout<<"Nhap phut: ";in>>a.min;
    cout<<"Nhap giay: ";in>>a.sec;
    return in;
}

ostream &operator << (ostream &out,time a){  
    cout<<a.hour<<" Gio "<<a.min<<" Phut "<<a.sec<<" Giay ";
    return out;
}
time::operator int(){
	int Sum=0;
	if(hour>=1){
		Sum=Sum+hour*3600;
	}	
	if(min>=1)
		Sum=Sum+min*60;
	Sum=Sum+sec;
	return Sum;	
}	
int main(){
	time t;
	cin>>t;
	cout<<endl<<t;
	cout<<"\n\t=> Thoi gian khi da chuyen doi la: "<<int(t);
return 0;	
}
