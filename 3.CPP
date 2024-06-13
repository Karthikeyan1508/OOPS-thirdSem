// 3. Write a C++ Program to call a C function using an extern "C" linkage directive. Use compound statement linkage diretive for #include<math.h>

#include<iostream.h>
#include<conio.h>
#include<math.h>

extern "C"{
	doubleMySqrt(double x){
		return sqrt(x);
	}
}

int main(){
	double x=100;
	clrscr();
	double y=doubleMySqrt(x);
	cout<<"Square Root of "<<x<<" is : "<<y<<endl;
	getch();
	return 0;
}