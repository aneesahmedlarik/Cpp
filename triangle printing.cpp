#include <iostream>
#include<iomanip>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cout<<"enter the number of rows you want to see as a triangle: ";
	cin>>n;
	/*	for(int i=1; i<=n;i++){
		
		for (int j=1;j<=i;j++){
	//	cout<< std::setw(15);
		cout<<"*";
		
   }
	
	cout<<endl;	
	
}

	 for(int i = n; i >= 1; --i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout<< "*";
        }
        cout << endl;
    }*/
    for(int i=1;i<=n;i++){ 
	for(int j=10 ;j>=i;j--){
	 cout<<" "; }
	  for(int k=1;k<=i*2-1;k++){ 
	  cout<<"*"; } 
	  cout<<endl;
}
	return 0;}
