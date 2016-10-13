#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void mathPlus(int, int,  int, char);
void mathMinus(int, int, int, char);

void mathChoice(){
	
	unsigned seed= time(0);
	srand(seed);
	int randomNum=rand();
	
	int sign= randomNum%3;
	int a= randomNum%900+560;
	int b= randomNum%900+270;

	int answer;
	char more;
	
	int problem;
	
	do{
	cout<<"MeTH GENERATOR" <<endl <<"1. (+)		2.(-)" <<endl
		<<"Make a choice: "; cin>>problem;
	switch(problem){
		case 1 : mathPlus(a, b, answer, more);break;
		case 2 : mathMinus(a, b, answer, more);break;
	}
} while(problem<0 && problem<3);
}

void mathPlus(int a, int b, int answer, char more){
	
	do{
	if(a<1000){cout<<" ";} cout<< a <<endl;
	if(b<1000){cout<<" ";}cout<< b <<endl;
	cout<<"----- +" <<endl; 
	cin>> answer;
	
	int c= a+b;
	if (answer==c){
		cout<<"OH JOY!" <<endl;
	}
	else{cout<< "I AM DISAPPOINTED, THE ANSWER IS " << c <<endl;
	}
	do{cout<<"Want more?(y/n)"<<endl; cin>>more;}
	while(more!='y' && more!='n');

}while(more=='y');
if(more=='n'){
	cout<<"CHERRY BYE!" <<endl;
	mathChoice();
	}
}

void mathMinus(int a, int b, int answer, char more){
	
	do{
	if(a<1000){cout<<" ";} cout<< a <<endl;
	if(b<1000){cout<<" ";}cout<< b <<endl;
	cout<<"----- -" <<endl; 
	cin>> answer;
	
	int c= a-b;
	if (answer==c){
		cout<<"OH JOY!" <<endl;
	}
	else{cout<< "I AM DISAPPOINTED, THE ANSWER IS " << c <<endl;
	}
	do{cout<<"Want more?(y/n)"<<endl; cin>>more;}
	while(more!='y' && more!='n');

}while(more=='y');
if(more=='n'){
	cout<<"CHERRY BYE!" <<endl;
	mathChoice();
	}
	
}
