#include<iostream.h>
#include<string.h>
#include<conio.h>

class employee{
	int empNo;
	char empName[20];
	float empBasic;
	float empDA;
	float empHRA;
	float empNet;

	public:
		void read();
		float calculateNetSalary();
		void display();
};

void employee::read(){
	cout<<"Enter employee number: ";
	cin>>empNo;
	cout<<"Enter employee name: ";
	cin.ignore();
	cin.getline(empName,20);
	cout<<"Enter base salary: ";
	cin>>empBasic;
	cout<<"Enter DA: ";
	cin>>empDA;
	cout<<"Enter HRA: ";
	cin>>empHRA;
}

float employee::calculateNetSalary(){
	float empNet = empBasic + empDA + empHRA;
	return empNet;
}

void employee::display(){
	cout<<"<----Details of Employee---->"<<endl;
	cout<<"Employee number: \t"<<empNo<<endl;
	cout<<"Employee name: \t"<<empName<<endl;
	cout<<"Base Salary: \t"<<empBasic<<endl;
	cout<<"DA: \t"<<empDA<<endl;
	cout<<"HRA: \t"<<empHRA<<endl;
	cout<<"Net Salary: \t"<<empNet<<endl;
	cout<<"------------------------------"<<endl<<endl<<endl;
}

int main(){
	int numOfEmployees;
	int i;
	clrscr();
	cout<<"How many employee details do you want to enter? ";
	cin>>numOfEmployees;

	employee* emp = new employee[numOfEmployees];
	for(i=0;i<numOfEmployees;i++){
		emp[i].read();
		emp[i].calculateNetSalary();
	}

	for(i=0;i<numOfEmployees;i++)
		emp[i].display();
	delete[] emp;
	getch();
	return 0;
}
