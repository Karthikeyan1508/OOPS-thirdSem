#include<iostream.h>
#include<conio.h>
#include<string.h>

class Student{
	public:
		int regno;
		char name[20];
		int semester;
		char branch[20];

	void getData(){
		cout<<"Enter Register Number: ";
		cin>>regno;
		cout<<"Enter Name: ";
		cin.ignore();
		cin.getline(name,20);
		cout<<"Enter Sem: ";
		cin>>semester;
		cout<<"Enter Branch: ";
		cin.ignore();
		cin.getline(branch,20);
	}
};

class Exams: public virtual Student{
	public:
		int marks1;
		int marks2;
		int marks3;
		void getMarks(){
			cout<<"Enter Marks1: ";
			cin>>marks1;
			cout<<"Enter Marks2: ";
			cin>>marks2;
			cout<<"Enter Marks3: ";
			cin>>marks3;
		}
};

class Sports: public virtual Student{
	public:
		char sportsGrade;
		void getSports(){
			cout<<"Enter sports grade: ";
			cin>>sportsGrade;
		}
};

class Awards: public Exams, public Sports{
	public:
		void display(){
			cout<<"Name: "<<Student::name<<endl;
			cout<<"Register Number: "<<Student::regno<<endl;
			cout<<"Branch: "<<Student::branch<<endl;
			cout<<"Semester: "<<Student::semester<<endl;
			cout<<"Marks 1: "<<marks1<<endl;
			cout<<"Marks 2: "<<marks2<<endl;
			cout<<"Marks 3: "<<marks3<<endl;
			cout<<"Sports Grade: "<<sportsGrade<<endl;
		}
};

int main(){
	clrscr();
	Awards a1;
	a1.getData();
	a1.getMarks();
	a1.getSports();
	a1.display();
	getch();
	return 0;
}
