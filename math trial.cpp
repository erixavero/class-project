#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void mathPlus(int, int,  int, char);
void mathMinus(int, int, int, char);
void mathMulti(int, int, int, char);

void mathChoice(){
	
	unsigned seed= time(NULL);
	srand(seed);
	int randomNum=rand();
	
	int a= randomNum%900+536;
	int b= randomNum%900+284;
	
	int x= randomNum%861+49;
	int y= randomNum%617+70;

	int answer;
	char more;
	
	int problem;
	
	do{
	cout<<"MeTH GENERATOR" <<endl <<"1.(+)		2.(-)		3.(X)" <<endl
		<<"Make a choice: "; cin>>problem;
	switch(problem){
		case 1 : mathPlus(a, b, answer, more);break;
		case 2 : mathMinus(a, b, answer, more);break;
		case 3 : mathMulti(x, y, answer, more);break;
	}
} while(problem<0 && problem<3);
}

void mathPlus(int a, int b, int answer, char more){
	
	int c= a+b;
	if(a<1000){cout<<" ";} cout<< a <<endl;
	if(b<1000){cout<<" ";}cout<< b <<endl;
	cout<<"----- +" <<endl; 
	cin>> answer;
	
	if (answer==c){
		cout<<"OH JOY!" <<endl;
	}
	else{cout<< "I AM DISAPPOINTED, THE ANSWER IS " << c <<endl;
	}
	mathChoice();
}


void mathMinus(int a, int b, int answer, char more){
	
	int c= a-b;
	if(a<1000){cout<<" ";} cout<< a <<endl;
	if(b<1000){cout<<" ";}cout<< b <<endl;
	cout<<"----- -" <<endl; 
	cin>> answer;
	
	if (answer==c){
		cout<<"EASY AIN'T IT?" <<endl;
	}
	else{cout<< "YOUR MATH TEACHERS ARE ASHAMED! THE ANSWER IS " << c <<endl;
	}
	mathChoice();
}


void mathMulti(int x, int y, int answer, char more){
	
	int c= x*y;
	if(x<1000){cout<<" ";} cout<< x <<endl;
	if(y<1000){cout<<" ";}cout<< y <<endl;
	cout<<"----- x" <<endl; 
	cin>> answer;
	
	if (answer==c){
		cout<<"YOUR LIFE HAS MEANING AGAIN!" <<endl;
	}
	else{cout<< "MAYBE YOU PREFER CARD GAME? THE ANSWER IS " << c <<endl;
	}
	mathChoice();
}

