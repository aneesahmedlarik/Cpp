#include <iostream>
using namespace std;
int main()
{
	float rad, area;
	const float PI= 3.14159;
	cout<<"enter radius of circle";
	cin>>rad;
	
	area = PI*rad*rad;
	cout<<"Area is: " <<area<<endl;
	return 0;
	
}

