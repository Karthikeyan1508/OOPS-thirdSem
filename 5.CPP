#include<iostream.h>
#include<conio.h>

void printArray(int arr[], int n){
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

void andOperation(int arr1[], int arr2[], int n){
	int result[10];
	for(int i=0;i<n;i++)
		result[i] = arr1[i] & arr2[i];
	cout<<"Bitwise AND: ";
	printArray(result,n);
}

void orOperation(int arr1[], int arr2[], int n){
	int result[10];
	for(int i=0;i<n;i++)
		result[i] = arr1[i] | arr2[i];
	cout<<"Bitwise OR: ";
	printArray(result,n);
}

void xorOperation(int arr1[], int arr2[], int n){
	int result[10];
	for(int i=0;i<n;i++)
		result[i] = arr1[i] ^ arr2[i];
	cout<<"Bitwise XOR: ";
	printArray(result,n);
}

int main(){
	int n;
	int i;
	clrscr();
	cout<<"Enter the number of bits: ";
	cin>>n;

	int arr1[10], arr2[10];
	cout<<"\nEnter the first binary number: ";
	for(i=0;i<n;i++)
		cin>>arr1[i];
	cout<<"\nEnter the second binary number: ";
	for(i=0;i<n;i++)
		cin>>arr2[i];

	cout<<"\nBinary 1: ";
	printArray(arr1,n);
	cout<<"Binary 2: ";
	printArray(arr2,n);
	andOperation(arr1,arr2,n);
	orOperation(arr1,arr2,n);
	xorOperation(arr1,arr2,n);

	getch();
	return 0;
}




