#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	
	unsigned seed= time(0);
	srand(seed);
	int randomNum=rand();
	
	int sign= randomNum%3;
	int a= randomNum%900+126;
	int b= randomNum%900+568;
	int c= a+b;
	int answer;
	char more;
	
	do{
	cout<<"MeTH GENERATOR" <<endl;
	if(a<1000){cout<<" ";} cout<< a <<endl;
	if(b<1000){cout<<" ";}cout<< b <<endl;
	cout<<"----- +"; 
	cin>> answer;
	
	if (answer==c){
		cout<<"OH JOY!" <<endl;
	}
	else{cout<< "I AM DISAPPOINTED, THE ANSWER IS " << c <<endl;
	}
	do{cout<<"Want more?(y/n)"<<endl; cin>>more;}
	while(more!='y' && more!='n');

}while(more=='y');
if(more=='n'){
	cout<<"CHERRY BYE!";
}
return 0;
}
