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