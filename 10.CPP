#include<iostream.h>
#include<math.h>
#include<conio.h>

class COMPLEX{
	private:
		float real;
		float img;
	public:
		COMPLEX(){
			real = 0;
			img = 0;
		}

		COMPLEX(float r,float i){
			real = r;
			img = i;
		}

		COMPLEX(int r){
			real = r;
			img = 0;
		}

		COMPLEX ADD(COMPLEX C){
			COMPLEX res;
			res.real = real + C.real;
			res.img = img + C.img;
			return res;
		}

		COMPLEX ADD(int r){
			COMPLEX res;
			res.real = real + r;
			res.img = img;
			return res;
		}

		void display(){
			if(img<0) cout<<real<<" - i"<<abs(img)<<endl;
			else cout<<real<<" + i"<<img<<endl;
		}
};

int main(){
	clrscr();
	COMPLEX C1(4,5);
	COMPLEX C2(3,-2);
	COMPLEX C3;

	cout<<"C1 : ";
	C1.display();

	cout<<"C2 : ";
	C2.display();

	C3 = C1.ADD(C2);
	cout<<"C1 + C2 = ";
	C3.display();

	C3 = C1.ADD(2);
	cout<<"C1 + 2 = ";
	C3.display();

	getch();
	return 0;
}