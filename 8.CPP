#include<iostream.h>
#include<conio.h>

int search(int arr[], int size, int key){
	int i;
	for(i=0;i<size;i++){
		if(arr[i]==key)
			return i;
	}
	return -1;
}

int search(double arr[], int size, double key){
	int i;
	for(i=0;i<size;i++){
		if(arr[i]==key)
			return i;
	}
	return -1;
}

int main(){
	int intArray[] = {10, 20, 30, 40};
	double doubleArray[] = {1.1, 2.2, 3.3, 4.4};
	clrscr();

	int intIndex = search(intArray, 4, 30);
	if(intIndex!=-1){
		cout<<"Integer key value found at index "<<intIndex<<"."<<endl;
	}
	else cout<<"Integer key value is not found.";

	int doubleIndex = search(doubleArray, 4, 2.2);
	if(doubleIndex!=-1){
		cout<<"Double key value found at index "<<doubleIndex<<"."<<endl;
	}
	else cout<<"Double key value is not found.";
	getch();
	return 0;
}