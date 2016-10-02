// Write a program that uses a loop to display the characters for the ASCII codes 0
// through 127. Display 16 characters on each line.

#include<iostream>
using namespace std;
int main(){
	
	for(int num=0; num<=127; num++){
	cout<< " " <<num <<" " << (char) num;
	if(num%16==0){ cout<<"\n";
	}
	}
	
return 0;}
