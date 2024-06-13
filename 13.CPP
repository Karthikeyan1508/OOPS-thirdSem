#include<iostream.h>
#include<conio.h>

class student{
	public:
		int regno, age;
		char name[20];
		void readData();
};

class pgstudent: public student{
	public:
		int stipend, sem;
		float fees;
		void readData();
};

class ugstudent: public student{
	public:
		int stipend, sem;
		float fees;
		void readData();
};

void student::readData(){
	cout<<"Enter name: ";
	cin.ignore();
	cin.getline(name, 20);
	cout<<"Enter Register Number: ";
	cin>>regno;
	cout<<"Enter age: ";
	cin>>age;
}

void ugstudent::readData(){
	student::readData();
	cout<<"Enter Semester: ";
	cin>>sem;
	cout<<"Enter the fees: ";
	cin>>fees;
	cout<<"Enter the stipend: ";
	cin>>stipend;
}

void pgstudent::readData(){
	student::readData();
	cout<<"Enter Semester: ";
	cin>>sem;
	cout<<"Enter the fees: ";
	cin>>fees;
	cout<<"Enter the stipend: ";
	cin>>stipend;
}

int main(){
	ugstudent ug[20];
	pgstudent pg[20];
	int i,n,m;
	float average;
	clrscr();
	cout<<"\nEnter the number of entries in the ugstudent class: ";
	cin>>n;
	for(i=0;i<n;i++)
		ug[i].readData();
	int sem;
	for(sem=1;sem<=8;sem++){
		float sum=0;
		int found=0,count=0;
		for(i=0;i<n;i++){
			if(ug[i].sem==sem){
				sum+=ug[i].age;
				found = 1;
				count++;
			}
		}
		if(found==1){
			average = sum/count;
			cout<<"\nAverage age of sem "<<sem<<" is "<<average;
		}
	}

	cout<<"\nEnter the number of entries in the pgstudent class: ";
	cin>>n;
	for(i=0;i<n;i++)
		pg[i].readData();

	for(sem=1;sem<=8;sem++){
		float sum=0;
		int found=0,count=0;
		for(i=0;i<n;i++){
			if(pg[i].sem==sem){
				sum+=pg[i].age;
				found = 1;
				count++;
			}
		}
		if(found==1){
			average = sum/count;
			cout<<"\nAverage age of sem "<<sem<<" is "<<average;
		}
	}
}

