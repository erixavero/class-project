#include<iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>

using namespace std;

void set1(int, int);
void set2(int, int);
void set3(int, int);

void problemsPicker(){
	
unsigned seed= time(NULL);
	srand(seed);
	int counter=rand()%10+1;
	int outcome= rand();
	
int choice;
cout<<"The choices you make in this part will affect the story." <<endl
	<<"Choose wisely."<<endl;
	Sleep(1500);

	cout<<counter;
	
	if(counter==6 || counter==9){
		set1(choice, outcome);
		set2(choice, outcome);
	}
/*	else if(counter==2 || counter==7){
		set1(choice, outcome);
		set3(choice, outcome);
	}
	else if(counter==3 || counter==8){
		set2(choice, outcome);
		set3(choice, outcome);
	}
	else if(counter==4 || counter==5){
		set3(choice, outcome);
		set1(choice, outcome);
	}
	else if(counter==1 || counter==10){
		set2(choice, outcome);
		set1(choice, outcome);
	}
	*/
}

void set1(int choice, int counter){
	cout<<endl<<"You meet Remy, an old friend back in law school who used to call you Pussyfoot" <<endl
		<<"for having such soft footsteps and you've always hated that." <<endl <<endl
		<<"1. Politely say hi and try to come up with small talks" <<endl
		<<"2. Call him Snakefoot" <<endl;
		do{
		cout<<"What do you do? "; cin>>choice;
		}while(choice<1 && choice>2);
	
	if(choice==1){
		if((counter+1)%2==0){
			cout<<"He's still mad about you calling him nigga once and he's now a pro wrestler." <<endl
			<<"He breaks your neck on the spot." <<endl;cin.get();
		}
		else{
			cout<<"He kneels down in from of you before you can say anything to apologize for the annoying words and proposed to you." <<endl
				<<"He used to mock you because he loved you and still does, you accept the ring out of pity."
				<<endl <<"You are now married, congratulations!" <<endl;cin.get();
		}
	}
	else{
		if((counter+1)%2==0){
			cout<<"He accepts it as a joke and asks who you are, you tell him to never mind." <<endl
				<<"He doesn't remember you anymore" <<endl;cin.get();
		}
		else{
			cout<<"You utter your insult before you notice he is crippled in a wheelchair now." <<endl
				<<"He lost his legs in an attempt to save a little girl from a being clobbered by a bear," <<endl
				<<"the girl still ended up dead from blood loss in his arms, you feel so terrible" <<endl;cin.get();
			}
		}
	
	cout<<endl <<"You are a 7-year-old kid alone at home playing the floor is the lava. " <<endl
		<<"The phone suddenly starts ringing when you're surfing on the coffee table." <<endl
		<<"Your parents mentioned that they won't be home in 3 hours."<<endl;cin.get();
	do{
	cout<<"Do you keep playing(1) or go answer the phone(2)? "; cin>>choice;
	} while(choice<1 && choice>2);
	
	if(choice==1){
		if((counter+1)%2==0){
			cout<<"You follow the river of pure lava into a dark cave, you jump onto a rock platform once" <<endl
				<<"your coffee table board completely melts." <<endl
				<<"You encounter an altar, on it you see the ancient golden beeping bird." <<endl
				<<"You pick it up and it's your mom asking if you want some burger" <<endl;cin.get();
		}
		else{
			cout<<"The surfboard gives up on the overwhelming weight of your body" <<endl
				<<"You sink into the lava below."<<endl;cin.get();
		}
	}
	
	else{
		if((counter+1)%2==0){
			cout<<"It's your parents saying that they will come home late and you should go to bed" <<endl
				<<"They also say they'll always love you and your uncle will come to pick you up tomorrow morning"<<endl;cin.get();
		}
		else{
			cout<<"the phone shuts off before you reach it, you're too slow!" <<endl;cin.get();
		}
	}

}

void set2(int choice, int counter){
	
	cout<<endl<<"You're the CEO of a canned food company. A country is in need of a hefty amount of food supply" <<endl
		<<"after a horrifying volcano eruption, charity might be a great opportunity to gain fame from public's attention." <<endl
		<<"You still have clients' orders to fullfill to maintain your professional relationships." <<endl
		<<"1. Be a lad and help the needy" <<endl
		<<"2. Stay loyal to your clients and ignore the needy"<<endl;
		do{
		cout<<"You only have the budget for one, what do you do? "; cin>>choice;
		}while(choice<1 && choice>2);
		
		
		if(choice==1){
			if((counter+1)%2==0){
			cout<<"The country is really thankful for your kindness but your clients are disappointed." <<endl
				<<"over half of your clients cut their ties with you." <<endl
				<<"You make a good cover model for an issue of TIMEZ magazine though" <<endl;cin.get();
		}
		else {
			cout<<"It is later found out that the country is run by fluffy puppies." <<endl
				<<"You now have a lifetime supply of puppies." <<endl
				<<"You apoligize to your disappointed clients by sending them puppies in tiny dresses, the happily accepnt." <<endl
				<<"Before you know it, the world has been dominated by puppies. YAY?" <<endl;cin.get();
			}
		}
		else{
			if((counter+1)%2==0){
				cout<<"Your relationships with the cients are well-maintained, you expect the country to manage somehow." <<endl
					<<"You never hear from them again."<<endl;cin.get();
			}
			else{
				cout<<"Someone leaked the info that you leave a country in need to die." <<endl
					<<"Your clients fear the day you turn on them, they cut their ties." <<endl;cin.get();
			}
		}

		cout<<endl <<"You are on a date at an abandoned Nazi prison turned museum." <<endl
				<<"Your companion looks at you expectantly" <<endl
				<<"1. Use your proficiency in German speaking and history knowledge to impress them with a Nazi roleplay" <<endl
				<<"2. Use your dark sense of humor to make a joke about Holocaust" <<endl;
			do{
			cout<<"What do you do? "; cin>>choice;
			}while(choice<1 && choice>2);
			
			if(choice==1){
					cout<<"Your companion is so impressed by the act. This might be the perfect time" <<endl
						<<"to tell that you are the illegitimate grandchild of Wilhelm Caetel, a Nazi general"<<endl
						<<"still looking for revenge for his execution" <<endl;
					do{
					cout<<"1. Say it"<<endl
						<<"2. Joke about Hitler's mustache"<<endl
						<<"What do you do?"; cin>>choice;
					}while(choice<1 && choice>2);
					if(choice==1){
						cout<<"You've been arrested for a bad joke gone wrong." <<endl;cin.get();
					}
					else{
						cout<<"You stick it in later that night." <<endl;cin.get();
					}
				}
			else{
				if((counter+1)%2==0){
				cout<<"You companion finds the joke disrespectful towards the victims of the tragedy." <<endl
					<<"You are left alone in the museum" <<endl
					<<"the pressure of losing your companion overwhelms you and you commit suicide with an old Nazi torturing device." <<endl;
					cin.get();
				}
				else{
					cout<<"Your companion laughs loudly towards the joke and admits as the illegitimate grandchild of" <<endl
						<<"Dr. Carl Claudberg, a Nazi scientist who experimented with artificial insemination." <<endl
						<<"You later stick it in with an awkward sensation." <<endl;cin.get();
				}
			}
}

void set3(){
	cout<<"You find yourself ";
	
		
}
