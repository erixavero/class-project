#include<iostream>
#include "math trial.cpp"
#include "decision game.cpp"

using namespace std;

int main(){
	
	int choice;
	
	cout<<"Welcome" <<endl
		<<"1. Math trial	2. Decision game" <<endl
		<<"Take a pick: "; cin>>choice;
	switch(choice){
		case 1 : mathChoice();break;
		case 2 : problemsPicker();break;
		
	}
	
return 0;}
