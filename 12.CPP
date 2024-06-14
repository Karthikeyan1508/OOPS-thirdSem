#include<iostream.h>
#include<conio.h>

class matrix{
	private:
		long m[5][5];
		int row, col;
	public:
		void getData();
		int operator==(matrix);
		matrix operator+(matrix);
		matrix operator-(matrix);
		friend ostream & operator <<(ostream &, matrix &);
};

int matrix::operator==(matrix cm){
	if(row == cm.row && col == cm.col)
		return 1;
	return 0;
}

void matrix::getData(){
	cout<<"Enter the number of rows: ";
	cin>>row;
	cout<<"Enter the number of columns: ";
	cin>>col;
	cout<<"Enter the elements of the matrix: ";
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cin>>m[i][j];
		}
	}
}

matrix matrix::operator+(matrix am){
	matrix temp;
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			temp.m[i][j] = m[i][j] + am.m[i][j];
		}
		temp.row=row;
		temp.col=col;
	}
	return temp;
}

matrix matrix::operator-(matrix sm){
	matrix temp;
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			temp.m[i][j] = m[i][j] - sm.m[i][j];
		}
		temp.row=row;
		temp.col=col;
	}
	return temp;
}

ostream & operator <<(ostream & fout, matrix &d){
	int i,j;
	for(i=0;i<d.row;i++){
		for(j=0;j<d.col;j++){
			fout<<d.m[i][j];
			cout<<" ";
		}
		cout<<endl;
	}
	return fout;
}

int main(){
	matrix m1, m2, m3, m4;
	clrscr();
	m1.getData();
	m2.getData();
	if(m1==m2){
		m3=m1+m2;
		m4=m1-m2;
		cout<<"Addition of matrices: "<<endl;
		cout<<m3;
		cout<<"Subtraction of matrices: "<<endl;
		cout<<m4;
	}
	else
		cout<<"Order of the input matrices is not identical.";

	getch();
	return 0;
}