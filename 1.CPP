> 1. Raising a number n to a power p is the same as multiplying n by itself p times. Write a function called power ( ) that takes a double value for n and an int value for p, and
returns the result as double value. Use a default argument of 2 for p, so that if this argument is omitted, the number will be squared. Write a main ( ) function that gets
values from the user to test this function.


#include<iostream.h>
#include<conio.h>

double power(double n,int p=2){
	double res=1;
	for(int i=0;i<=p;i++){
		res=res*n;
	}return res;
}

int main(){
	double n,result;
	int p;
	clrscr();
	cout<<"Enter n and p values: ";
	cin>>n>>p;
	result=power(n,p);
	cout<<n<<" raised to "<<p<<" is "<<result<<endl;

	result=power(n);
	cout<<"By default parameter: "<<n<<" raised to 2 is "<<result<<endl;
	getch();
	return 0;
}
