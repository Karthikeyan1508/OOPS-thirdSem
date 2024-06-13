#include<iostream.h>
#include<string.h>
#include<fstream.h>

int main(){
	char str[50],st[50];
	ifstream in("sample.txt");
	ofstream out("sample2.txt");

	while(!in.eof()){
		in.getline(st,50);
		strcat(str, st);
		strcat(str, "n");
	}
	in.close();

	strrev(str);
	out<<str<<endl;
	out.close();

	return 0;
}