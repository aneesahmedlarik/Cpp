#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int input(){
		int num;

	cout<<"Enter number of months to get it's name. ";
	cin>>num;
	return num;
}

void monthname(int num){
	
	switch(num){
		case 1: cout<<num<<" = january";
		break;
		case 2: cout<<num<<" = February";
		break;
		case 3: cout<<num<<" = March";
		break;
		case 4: cout<<num<<" = April";
		break;
		case 5: cout<<num<<" = May";
		break;
		case 6: cout<<num<<" = June";
		break;
		case 7: cout<<num<<" = July";
		break;
		case 8: cout<<num<<" = August";
		break;
		case 9: cout<<num<<" = September";
		break;
		case 10: cout<<num<<" = October";
		break;
		case 11: cout<<num<<" = November";
		break;
		case 12: cout<<num<<" = December";
		break;
		default: cout<<"Enter number between (1 to 12) \n";
		monthname(input());
	
	}
	
}





int main(int argc, char** argv) {
	monthname(input());

	return 0;
}
