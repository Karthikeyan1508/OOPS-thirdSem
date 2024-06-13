#include <iostream.h>
#include <fstream.h>
#include<string.h>
#include<conio.h>

int main() {
    char str[20]="\0", st[10],sti[20];

    ofstream out1 ("sample.txt");
    cout<<"Enter the string to be in file\n"<<endl;
    cin>>sti;
    out1<<sti;
    out1.close();
    ifstream in("sample.txt");

    ofstream out("sample2.txt");
    while (!in.eof()) {
	in.getline(st, 1000);
	strcat(str, st);
	strcat(str, "\n");
    }
    in.close();

    strrev(str);
    cout << str << endl;
    out << str << endl;
    out.close();
    getch();
    clrscr();
    return 0;
}
