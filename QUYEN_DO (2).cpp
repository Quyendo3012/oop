#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class SUBJECT
{
private:
public:
    string nameSj;
    int credit;
    void input();
    void output();
};

class STUDENT
{
private:
    string ten;
    int soMonHoc;
    SUBJECT monhoc[3];

public:
    void input();
    void output();
};

void STUDENT::input()
{
    cout << "Nhap ho va ten: "; getline(cin, ten);
    cout << endl;
     for (int i = 0; i < 3; i++)
    {
       fflush(stdin);
        cout << "Ten mon hoc: ";
        getline(cin, monhoc[i].nameSj);
        cout << "So tin chi: ";
        cin >> monhoc[i].credit;
    }
}
   

void STUDENT::output()
{
    int tongcredit=0, tongHP=0;
    cout << "Sinh vien: " << ten << endl;
    cout << "So mon hoc: 3\nGom:\n";
    cout << setw(7) << left << "STT" << setw(20) << left << "Ten mon" << setw(7) << left << "STC" << setw(10) << left << "Tien HP";
    for (int i = 0; i < 3; i++)
    {
        cout << endl;
        cout << setw(7) << left << i + 1;
        cout << setw(20) << left << monhoc[i].nameSj;
        cout << setw(7) << left << monhoc[i].credit;
        cout << setw(10) << left << monhoc[i].credit *  335000;
        tongcredit += monhoc[i].credit;
        tongHP += monhoc[i].credit *  335000;
    }
    cout << endl;
    cout << setw(7) << left << "Tong" << setw(20) << left << "" << setw(7)<<left<<tongcredit<<setw(10)<<left<<tongHP;
}

int main()
{
    STUDENT sv;
	cout<<endl;
    sv.input();
	cout<<endl;
    sv.output();
    return 0;
}
