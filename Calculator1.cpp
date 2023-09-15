#include <iostream>
using namespace std;
void add (float x, float y);
void sub(float x, float y);
void  mult(float x, float y);
void div (float x, float y);
int main(){
	int n,x,y;
cout<<"calculator in C++\n Enter the choice\n";
cout<<"Enter 1 for addition";
cin>>n;
cout<<"Enter 2 for Subtraction";
cin>>n;
cout<<"Enter 3 for Multiplication";
cin>>n;
cout<<"Enter 4 for Division";
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
	
	cout<<"enter first value";
	cin>>x;
		cout<<"enter second value";
	cin>>y;
	cout<<"the addition of" <<x<<" and "<<y<< "is" <<x+y;
	
	
}
