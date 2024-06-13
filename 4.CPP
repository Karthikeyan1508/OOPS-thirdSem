// 4. Write a C++ Program to accept a line of text and count the number of words, characters, and digits in it.

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

int main(){
	char line[50];

	int wordCount=0, charCount=0, digitCount=0;
	cout<<"Enter a line of text: ";
	cin.getline(line,50);
	for(int i=0;i<strlen(line);i++){
		if(isalpha(line[i]))
			charCount++;
		else if(isdigit(line[i]))
			digitCount++;

		if(isspace(line[i]) && !isspace(line[i-1]))
			wordCount++;
	}

	if(!isspace(line[strlen(line)-1])){
		wordCount++;
	}

	cout<<"Word Count: "<<wordCount<<endl;
	cout<<"Character Count: "<<charCount<<endl;
	cout<<"Digit Count: "<<digitCount<<endl;

	getch();
	return 0;
}