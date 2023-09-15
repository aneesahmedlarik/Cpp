#include <iostream>
using namespace std;
void add (float x, float y);
void sub(float x, float y);
void  mult(float x, float y);
void div (float x, float y);
int main(){
	int n,x,y;
cout<<"calculator in C++\n Enter the choice\n";
cout<<"Enter 1 for addition \n";

cout<<"Enter 2 for Subtraction\n";

cout<<"Enter 3 for Multiplication\n";

cout<<"Enter 4 for Division\n";
cin>>n;

switch(n){
	case 1: add(x,y);
	break;
	case 2: sub(x,y);
	break;
	case 3: mult(x,y);
	break;
	case 4: div(x,y);
	break;
default: cout<<"choice was inncorrect";}
	return 0;
}


void add (float x, float y){
	
	cout<<"enter first value = ";
	cin>>x;
		cout<<"enter second value =";
	cin>>y;
	cout<<"the addition of" <<x<<" and "<<y<< " is " <<x+y;
	
	
}
void sub(float x, float y){
		cout<<"enter first value = ";
	cin>>x;
		cout<<"enter second value = " ;
	cin>>y;
	cout<<"the  subtraction of" <<x<<" and "<<y<< " is " <<x-y;
	
}

void  mult(float x, float y){
		cout<<"enter first value = ";
	cin>>x;
		cout<<"enter second value = ";
	cin>>y;
	cout<<"the  multiplication of" <<x<<" and "<<y<< " is " <<x*y;
}
void div (float x, float y){
		cout<<"enter first value =";
	cin>>x;
	print:
		cout<<"enter second value (non zero) =";
	cin>>y;
	
	if(y==0){
		goto print;
	}
	cout<<"the  divion of" <<x<<" and "<<y<< " is " <<x/y;
}


