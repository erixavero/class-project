#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

//Randomizer for numbers to be printed in the problems
class Randomizer{
	
	int a;
	int b;
	int x;
	int y;

public: 

//set and get each variable used in the math problems
	int setA(){
	this->a= rand()%900+536;
	return a;
	}
	
	int getA(){
		return a;
	}
	
	int setB(){
	this->b= rand()%900+284;
	return b;
	}
	
	int getB(){
		return b;
	}
	
	int setX(){
	this->x= rand()%331+49;
	return x;
	}
	
	int getX(){
		return x;
	}
	
	int setY(){
	this->y= rand()%123+70;
	return y;
	}
	
	int getY(){
		return y;
	}
};

// Score class to run score counting in the background
class Score{
	int score= 0;

public:
	void scoreCount(int c, int answer){
		if(c == answer)
			this->score = score+1;
	}
	
	int scorePrint(){
		return score;
	}
};

//Math class to arrange different math operations
class Math {	
	int answer;
	int session;
	
public:
	//called in mathChoice
	
	void mathPlus();	// addition problems
	void mathMinus();	//subtraction problems
	void mathMulti();	//multiplication problems
	void mathDivid();	//division problems
};

void mathChoice();

void Math::mathPlus(){
	
	Randomizer num;
	Score count;
	
	// ask sessions
	do{
	cout<<"How many sessions? "; cin>>session;
	if(session<0){
		cout<<"NEGATIVE INPUT" <<endl;
	}
	else if(session==0){
		cout<<"You sure give up easily"<<endl;
	}
	
	}while(session<0);
	
	//the game
	for(int i=0; i<session; i++)
	{
	int c= num.setA()+num.setB();
	if(num.getA()<1000){cout<<" ";}cout<< num.getA() <<endl;
	if(num.getB()<1000){cout<<" ";}cout<< num.getB() <<endl;
	cout<<"----- +" <<endl; 
	cin>> answer;
	
	// show score
	count.scoreCount(c, answer);
	cout<<"Your score: " <<count.scorePrint() <<endl;
	
	if (answer==c){
		cout<<"OH JOY!" <<endl;
	}
	else if (answer==c && c%3==0){
		cout<<"THE INTERNET SALUTES YOU!" <<endl;
	}
	else if (answer==c && c%7==0){
		cout<<"YOU MADE IT LOOK EASY!" <<endl;
	}
	else if (answer!=c && c%2==0){
		cout<< "I NEVER HAD FAITH IN YOU, THE ANSWER IS " << c <<endl;
	}
	else{cout<< "I AM DISAPPOINTED, THE ANSWER IS " << c <<endl;
	}
}	
	cout<<"Total score: " <<count.scorePrint() <<" / " <<session <<endl;
	mathChoice();
}


void Math::mathMinus(){
	
	Randomizer num;
	Score count;
	
	// ask sessions
	do{
	cout<<"How many sessions? "; cin>>session;
	if(session<0){
		cout<<"NEGATIVE INPUT" <<endl;
	}
	else if(session==0){
		cout<<"Are you even trying?"<<endl;
	}
	}while(session<0);
	
	//the game
	for(int i=0; i<session; i++)
	{
	int c= num.setA()-num.setB();
	if(num.getA()<1000){cout<<" ";}cout<< num.getA() <<endl;
	if(num.getB()<1000){cout<<" ";}cout<< num.getB() <<endl;
	cout<<"----- -" <<endl; 
	cin>> answer;
	
	// show score
	count.scoreCount(c, answer);
	cout<<"Your score: " <<count.scorePrint() <<endl;
	
	//show different messages
	if (answer==c){
		cout<<"EASY AIN'T IT?" <<endl;
	}
	else if (answer==c && c%3==0){
		cout<<"EVERYTHING MAKES SENSE NOW!" <<endl;
	}
	else if (answer==c && c%2==0){
		cout<<"I KNOW THIS ISN'T YOUR FIRST TIME!" <<endl;
	}
	else if (answer!=c && c%3==0){
		cout<<"AND I THOUGHT MY JOKES WERE BAD! THE ANSWER IS " << c <<endl;
	}
	else{cout<< "YOUR MATH TEACHERS ARE ASHAMED! THE ANSWER IS " << c <<endl;
	}
}
	cout<<"Total score: " <<count.scorePrint() <<" / " <<session <<endl;
	mathChoice();
}

void Math::mathMulti(){
	
	Randomizer num;
	Score count;
	
	// ask sessions desired
	do{
	cout<<"How many sessions? "; cin>>session;
	if(session<0){
		cout<<"NEGATIVE INPUT" <<endl;
	}
	else if(session==0){
		cout<<"Maybe you'd like something else?"<<endl;
	}
	}while(session<0);
	
	//the game
	for(int i=0; i<session; i++)
	{
	int c= num.setX()*num.setY();
	if(num.getX()<1000){cout<<" ";}cout<< num.getX() <<endl;
	if(num.getY()<1000){cout<<" ";}cout<< num.getY() <<endl;
	cout<<"----- x" <<endl; 
	cin>> answer;
	
	//show score
	count.scoreCount(c, answer);
	cout<<"Your score: " <<count.scorePrint() <<endl;
	
	// Different replies
	if (answer==c){
		cout<<"YOUR LIFE HAS MEANING AGAIN!" <<endl;
	}
	else if (answer==c && c%5==0){
		cout<<"*SLOW CLAP*" <<endl;
	}
	else if (answer==c && c%3==0){
		cout<<"YOU'RE THE MAN(OR WOMAN, IT DEPENDS) NOW!" <<endl;
	}
	else if (answer!=c && c%3==0){
		cout<<"YOU WANT ROASTS WITH THAT? THE ANSWER IS " << c <<endl;
	}
	else{cout<< "MAYBE YOU PREFER CARD GAME? THE ANSWER IS " << c <<endl;
	}
}
	cout<<"Total score: " <<count.scorePrint() <<" / " <<session <<endl;
	mathChoice();
}

void Math::mathDivid(){

	Randomizer num;
	Score count;
	
	// Ask amount of sessions desired
	do{
	cout<<"How many sessions? "; cin>>session;
	if(session<0){
		cout<<"NEGATIVE INPUT" <<endl;
	}
	else if(session==0){
		cout<<"Aw... I was just getting to the good part"<<endl;
	}
	}while(session<0);
	
	// The game
	for(int i=0; i<session;i++){
	int c= num.setX()/num.setY();
	if(num.getX()<100){cout<<" ";} cout<<num.getX() <<endl;
	cout<<"-----" <<endl; 
	if(num.getY()<100){cout<<" ";}cout<<num.getY() <<endl
	<<"= ";
	
	cin>> answer;
	
	// Present score every round
	count.scoreCount(c, answer);
	cout<<"Your score: " <<count.scorePrint() <<endl;
	
	// Show different messages for every round
	if (answer==c){
		cout<<"YOUR BRAIN HAS EVOLVED!" <<endl;
	}
	else if (answer==c && c%5==0){
		cout<<"YOU GOT THE TOUCH!" <<endl;
	}
	else if (answer==c && c%2==0){
		cout<<"I LOVE YOU... ARE YOU STILL SINGLE?" <<endl;
	}
	else if (answer!=c && c%5==0){
		cout<<"MY BUM IS ITCHY... THE ANSWER IS " << c <<endl;
	}
	else{cout<< "HELLO DARKNESS, MY OLD FRIEND. THE ANSWER IS " << c <<endl;
	}
}
	cout<<"Total score: " <<count.scorePrint() <<" / " <<session <<endl;
	mathChoice();
}

// Main menu of math game
void mathChoice(){
	
	//declare randomizer based on time
	srand(time(0));
	
	//Call in Math class
	Math game;
	
	int problem;
	
	cout<<endl <<"MeTH GENERATOR" <<endl <<"1.(+)		2.(-)		3.(X)		4. (/) IGNORE DECIMALS" <<endl
		<<"Other numbers to quit" <<endl;
	cout<<"Make a choice: "; cin>>problem;
	
	//Calling different functions based on choice
	switch(problem){
		case 1 : game.mathPlus();break;
		case 2 : game.mathMinus();break;
		case 3 : game.mathMulti();break;
		case 4 : game.mathDivid();break;
		default : cout<<"Toodles...";
	}

}

/*
int main(){
	
	srand(time(0));
	
	mathChoice();
	
	return 0;
} */
