#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void mathPlus(int, int,  int, int);
void mathMinus(int, int, int, int);
void mathMulti(int, int, int, int);
void mathDivid(int, int, int, int);
int scoreCount(int, int);

void mathChoice(){
	
	unsigned seed= time(NULL);
	srand(seed);
	int randomNum=rand();
	
	int a= randomNum%900+536;
	int b= randomNum%900+284;
	
	int x= randomNum%861+49;
	int y= randomNum%617+70;

	int answer;
	int problem;
	int total;
	
	cout<<"MeTH GENERATOR" <<endl <<"1.(+)		2.(-)		3.(X)		4. (/) IGNORE DECIMALS" <<endl;
	cout<<"Make a choice: "; cin>>problem;
	switch(problem){
		case 1 : mathPlus(a, b, answer, total);break;
		case 2 : mathMinus(a, b, answer, total);break;
		case 3 : mathMulti(x, y, answer, total);break;
		case 4 : mathDivid(x, y, answer, total);break;
	}

}

int scoreCount(int c, int answer){
	bool getPoint(answer == c);
	return getPoint;
}

void mathPlus(int a, int b, int answer, int total){
	
	int c= a+b;
	if(a<1000){cout<<" ";} cout<< a <<endl;
	if(b<1000){cout<<" ";}cout<< b <<endl;
	cout<<"----- +" <<endl; 
	cin>> answer;
	
	int score= scoreCount(c, answer);
	total =+ score;
	cout<<"Your score: " <<total <<endl;
	
	if (answer==c){
		cout<<"OH JOY!" <<endl;
	}
	else if (answer==c && a%3==0){
		cout<<"THE INTERNET SALUTES YOU!" <<endl;
	}
	else if (answer==c && a%7==0){
		cout<<"YOU MADE IT LOOK EASY!" <<endl;
	}
	else if (answer!=c && a%7==0){
		cout<< "I NEVER HAD FAITH IN YOU, THE ANSWER IS " << c <<endl;
	}
	else{cout<< "I AM DISAPPOINTED, THE ANSWER IS " << c <<endl;
	}
	mathChoice();
}


void mathMinus(int a, int b, int answer, int total){
	
	int c= a-b;
	if(a<1000){cout<<" ";} cout<< a <<endl;
	if(b<1000){cout<<" ";}cout<< b <<endl;
	cout<<"----- -" <<endl; 
	cin>> answer;
	
	int score= scoreCount(c, answer);
	total =+ score;
	cout<<"Your score: " <<total <<endl;
	
	if (answer==c){
		cout<<"EASY AIN'T IT?" <<endl;
	}
	else if (answer==c && a%3==0){
		cout<<"EVERYTHING MAKES SENSE NOW!" <<endl;
	}
	else if (answer==c && a%7==0){
		cout<<"I KNOW THIS ISN'T YOUR FIRST TIME!" <<endl;
	}
	else if (answer!=c && a%3==0){
		cout<<"AND I THOUGHT MY JOKES WERE BAD! THE ANSWER IS " << c <<endl;
	}
	else{cout<< "YOUR MATH TEACHERS ARE ASHAMED! THE ANSWER IS " << c <<endl;
	}
	mathChoice();
}


void mathMulti(int x, int y, int answer, int total){
	
	int c= x*y;
	if(x<100){cout<<" ";} cout<< x <<endl;
	if(y<100){cout<<" ";}cout<< y <<endl;
	cout<<"----- x" <<endl; 
	cin>> answer;
	
	int score= scoreCount(c, answer);
	total =+ score;
	cout<<"Your score: " <<total <<endl;
	
	if (answer==c){
		cout<<"YOUR LIFE HAS MEANING AGAIN!" <<endl;
	}
	else if (answer==c && x%5==0){
		cout<<"*SLOW CLAP*" <<endl;
	}
	else if (answer==c && c%3==0){
		cout<<"YOU'RE THE MAN(OR WOMAN, IT DEPENDS) NOW!" <<endl;
	}
	else if (answer!=c && y%3==0){
		cout<<"YOU WANT ROASTS WITH THAT? THE ANSWER IS " << c <<endl;
	}
	else{cout<< "MAYBE YOU PREFER CARD GAME? THE ANSWER IS " << c <<endl;
	}
	mathChoice();
}

void mathDivid(int x, int y, int answer, int total){
	int c= y/x;
	if(y<100){cout<<" ";} cout<< y <<endl;
	cout<<"-----" <<endl; 
	if(x<100){cout<<" ";}cout<< x <<endl
	<<"= ";
	
	cin>> answer;
	
	int score= scoreCount(c, answer);
	total =+ score;
	cout<<"Your score: " <<total <<endl;
	
	if (answer==c){
		cout<<"YOUR BRAIN HAS EVOLVED!" <<endl;
	}
	else if (answer==c && x%5==0){
		cout<<"YOU GOT THE TOUCH!" <<endl;
	}
	else if (answer==c && c%9==0){
		cout<<"ARE YOU STILL SINGLE?" <<endl;
	}
	else if (answer!=c && x%5==0){
		cout<<"MY BUM IS ITCHY... THE ANSWER IS " << c <<endl;
	}
	else{cout<< "HELLO DARKNESS, MY OLD FRIEND. THE ANSWER IS " << c <<endl;
	}
	mathChoice();
}

