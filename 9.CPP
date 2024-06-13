#include<iostream.h>
#include<conio.h>

template <class T>
T successor(T x){
	return x+1;
}

template <class X>
X sum(X arr[], int size){
	int i;
	X total = 0;
	for(i=0;i<size;i++){
		total+=arr[i];
	}
	return total;
}

int main(){
	clrscr();
	cout<<"Successor of 5: "<<successor(5)<<endl;
	cout<<"Successor of 5.5: "<<successor(5.5)<<endl;
	cout<<"Successor of a: "<<successor('a')<<endl;

	int intArr[] = {1, 2, 3, 4};
	int intArrSize = sizeof(intArr)/sizeof(int);

	float floatArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
	int floatArrSize = sizeof(floatArr)/sizeof(float);

	double doubleArr[] = {55.0, 69.3};
	int doubleArrSize = sizeof(doubleArr)/sizeof(double);

	cout<<"Sum of Integer array: "<<sum(intArr, intArrSize)<<endl;
	cout<<"Sum of Float array: "<<sum(floatArr, floatArrSize)<<endl;
	cout<<"Sum of Double array: "<<sum(doubleArr, doubleArrSize)<<endl;

	getch();
	return 0;
}