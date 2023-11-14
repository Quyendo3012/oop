#include <iostream>
#include <string>
using namespace std;

class thethuvien
{
	public:
		void input();
		void output();
		string get_lop()
		{
			return lop;
		}
		string get_mathe()
		{
			return mathe;
		}	
	private:
		string mathe, tnd, lop;
		int  nam_hethan;
};

void thethuvien::input()
{
	cout<<"Hay nhap ma the: "; getline(cin, mathe);
	cout<<"Hay nhap ten nguoi doc: ";  getline(cin, tnd);
	cout<<"Hay nhap lop cua ban: ";  getline(cin, lop);
	cout<<"Hay nhap nam het han: ";  cin>>nam_hethan;
	cin.ignore();
}

void thethuvien::output()
{
	cout<<"Ma the: "<< mathe;
	cout<<"\nTennguoidoc: "<< tnd;
	cout<<"\nLop: "<< lop;
	cout<<"\nNam het han: "<< nam_hethan;
}

int main(){
	thethuvien a1,a2;
	cout<<"Nhap thong tin chu the 1 "<<endl;
	a1.input();
	cout<<"Nhap thong tin chu the 2 "<<endl;
	a2.input();
	if(a1.get_lop()==a2.get_lop())
	{
		cout<<"Hai chu the cung lop";
	} 
	else{
		cout<<"Hai chu the khong cung lop";
	}
	return 0;
}
	
