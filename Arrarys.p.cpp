// days.cpp
// shows days from start of year to date specified
#include <iostream>
using namespace std;
int main()
{
int month, day, total_days,year,r_days;
bool ly;
int days_per_month[12] = { 31, 28, 31, 30, 31, 30,
31, 31, 30, 31, 30, 31 };
cout << "\nEnter month (1 to 12): "; //get date
cin >> month;
cout << "Enter day (1 to 31): ";
cin >> day;
cout<<"Enter year  ";
cin>>year;
if(year%400==0){
	days_per_month[1]=29;
	ly=true; }
else if(year%100==0){
		days_per_month[1]=28;
		ly=false;}
else if(year%4==0){
	days_per_month[1]=29;
	ly=true;}
else{


cout<<year<<" is not a leap year ";
}

total_days = day; //separate days
for(int j=0; j<month-1; j++){//add days each month
total_days += days_per_month[j];
//cout<<j<<endl;
}
cout << "Total days from start of year is: " << total_days << endl;

if(ly!=true)
cout<<" Remaining days are: "<<365-total_days;
else
cout<<" Remaining days are: "<<366-total_days+1;


return 0;
}

