// A country club, which currently charges $2,500 per year for membership, has
// announced it will increase its membership fee by 4% each year for the next six years.
// Write a program that uses a loop to display the projected rates for the next six years.

#include<iostream>
using namespace std;
int main(){
	
	int yrs, pay= 2500;
	for(yrs=1; yrs<=6; yrs++){
		int fee= (pay + pay*4/100)*yrs ;
		cout <<"year " <<yrs <<"  fee $ " <<fee <<endl;
	}
	
return 0;}
