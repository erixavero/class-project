#include<iostream>
#include<iomanip>

//Each game is seperated in its own file
#include "math trial.cpp"
#include "decision game.cpp"

using namespace std;

int main(){
	
	int choice;
	
	// Title screen
	cout<<"//=================================\\\\"<<endl
		<<"||"			<<setw(35)			 <<"||"<<endl
		<<"||"<<setw(23)<<"FINAL PROJECT"<<setw(12)<<"||"<<endl
		<<"||"<<setw(22) <<"Eric Savero"<<setw(13) <<"||"<<endl
		<<"||"<<setw(22) <<"2001 586294"<<setw(13) <<"||"<<endl
		<<"||"			<<setw(35)			 <<"||"<<endl
		<<"\\\\=================================//"<<endl;
	
	// Main menu
	cout<<endl
		<<"Welcome" <<endl
		<<"1. Math trial"<<endl
		<<"2. Decision game" <<endl
		<<"Other numbers to exit"<<endl
		<<"Take a pick: "; cin>>choice;
	switch(choice){
		case 1 : mathChoice();break;
		case 2 : problemsPicker();break;
		default : cout<<"CHERRY BYE";
	}
	
return 0;}
