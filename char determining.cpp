#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
//	cout<<"hello world";
/*int x,y,z;
cout<<"enter value for x: ";
cin>>x;
cout<<"enter value for y: ";
cin>>y;

z=x+y;

cout<<"the sum of two numbers is = "<<z;
*/

/*
	char a = 'A';
	char b='\t';
	cout<<a;
	cout<<b;
	a= 'B';
	cout<<a;
	cout<<"\n";
	

*/

int ftemp, ctemp;
cout<<"enter the temperature in farenheit";
cin>>ftemp;
ctemp= (ftemp-32) * 5/9;
cout<<"In celsius it will be: "<<ctemp<<"\n";
return 0;
}

