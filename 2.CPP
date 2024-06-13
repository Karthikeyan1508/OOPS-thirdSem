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

