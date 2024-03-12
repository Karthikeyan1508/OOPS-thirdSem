#include<iostream>
using namespace std;

int search(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int search(double arr[], int size, double key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    int intArr[] = {10,20,30,40,50};
    double doubleArr[] = {1.1,2.2,3.3,4.4,5.5};
    int intIndex = search(intArr,5,30);
    if(intIndex!=-1){
        cout<<"Integer key value found at index "<<intIndex<<endl;
    }
    else
        cout<<"Integer key value not found "<<endl;

    int doubleIndex = search(doubleArr,5,3.3);
    if(doubleIndex!=-1)
        cout<<"Double key value found at index "<<doubleIndex<<endl;
    else
        cout<<"Double key value not found "<<endl;
    return 0;
}
