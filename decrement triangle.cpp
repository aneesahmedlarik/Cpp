#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cout<<"enter the number of rows you want to see as a triangle: ";
	cin>>n;
		for(int i=1; i<=n;i++){
		
		for (int j=1;j<=i;j++){
		cout<<"*";
   }
	
	cout<<endl;	
	}	

//square is same
/*
for(int i=5; i>1; i--){
	for(int j=5;j>1;j--)
	cout<<"*";

cout<<endl;

	}	
*/	
	
	

	/*	for(int i=n; i>=1;i--){
		
		for (int j=1;j<=i;j++){
		cout<<"*";
   }
	
	cout<<endl;	
	}

	
	*/
	
	
	
	return 0;
}
