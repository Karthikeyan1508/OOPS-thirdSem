// 2.Write a C++ Program to accept an alphabet and check whether it is a vowel or a consonant. If it is a vowel, return its predecessor, else its successor. Use call-by-reference with reference arguments.

#include<iostream.h>
#include<conio.h>
#include<ctype.h>

void checkAlphabet(char alphabet, char& result){
	if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u' ||	alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U'){
		result=alphabet-1;
		cout<<"\n"<<alphabet<<" is vowel;\nIt's predecessor is : "<<result<<endl;
	}
	else{
		result=alphabet+1;
		cout<<"\n"<<alphabet<<" is consonant;\nIt's successor is : "<<result<<endl;
	}
}

int main(){
	char alphabet, result;
	clrscr();
	cout<<"Enter an alphabet : ";
	cin>>alphabet;
	if(!isalpha(alphabet)){
		cout<<"\nEntered character is not a alphabet.";
	}else{
		checkAlphabet(alphabet,result);
	}
	getch();
	return 0;
}

