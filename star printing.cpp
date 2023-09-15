#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	/*
		for(int i=6; i>=1;i--){
		
		for (int j=1;j<=1;j++){
		cout<<"*";
   }
	
	cout<<endl;	
	}
	*/
int n;
	cout<<"number of lines ";
	cin>>n;
	
	for (int i=1; i>=n;i++){
		for (int j=1;j>=n;j++)
		cout<<"*";
	}
	
	
	
	
	
	
	return 0;
}
