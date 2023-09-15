#include <iostream>
using namespace std;
float area(float r) ;
int main()

{
	float r;
	cout<<"enter the value for r = ";
	cin>>r;
	cout<<"area of circle at radius"<<r<<" = "<<area(r);}
	
	float area(float r){
	
	float pi = 3.14;
	return pi*r*r;
}
	

