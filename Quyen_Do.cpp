#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

const int course_1credit = 335000;

class studysubject
{
	string nameofsubject;
	int numofcredit;
	public:
		void input();
		void output(int CC);
		int get_numofcredit();
		int fee(int CC);
};
class student{
	string fullname;
	studysubject subject[3];
	public:
		void input();
		void output();
		int sumofcredit();
		int sumoffee();
};
void student::input(){
	cout<<"Nhap ten sinh vien: ";
	getline(cin, fullname);
	for(int i= 0; i< 3; i++) {
		cout<<endl<<"Nhap mon hoc thu "<<i+1<<": \n";
		subject[i].input();
	}
}
void student::output(){
	cout<<endl<<"Sinh vien: "<<fullname<<endl;
	cout<<"So mon hoc: 3"<<endl;
	cout<<"Gom: "<<endl;
	cout<<setw(10)<<left<<"STT";
	cout<<setw(30)<<left<<"Ten mon hoc";
	cout<<setw(5)<<right<<"STC";
	cout<<setw(30)<<right<<"Tien hoc phi";
	for (int i = 0 ;i < 3; i++) {
		cout<<endl<<setw(10)<<left<<i+1;
		subject[i].output(course_1credit);
	}
	cout<<endl<<setw(10)<<left<<"Tong";
	cout<<setw(30)<<left<<"";
	cout<<setw(5)<<right<<sumofcredit();
	cout<<setw(30)<<right<<sumoffee();
	
}
int student::sumofcredit(){
	int sum = 0;
	for (int i = 0 ; i<3; i++) {
		sum += subject[i].get_numofcredit();
	}
	return sum;
}
int student::sumoffee(){
	int sum = 0;
	for (int i = 0 ; i<3; i++) {
		sum += subject[i].fee(course_1credit);
	}
	return sum;
}
void studysubject::input(){
	fflush(stdin);
	cout<<"Nhap ten mon hoc: ";
	getline(cin, nameofsubject);
	cout<<"Nhap so tin chi: ";
	cin>>numofcredit;
}
void studysubject::output(int CC){
	cout<<setw(30)<<left<<nameofsubject;
	cout<<setw(5)<<right<<numofcredit;
	cout<<setw(30)<<right<<fee(CC);
}
int studysubject::get_numofcredit() {
	return numofcredit;
}
int studysubject::fee(int CC){
	return CC * get_numofcredit();
}
int main() {
	student sv;
	sv.input();
	sv.output();
}
