#include<iostream>
#include<ctime>		//use time
#include<cstdlib>	//applying srand
#include<windows.h>	//using sleep

using namespace std;

// Declaration of functions used
void set1(int, int);
void set2(int, int);
void set3(int, int);

// Game scenario randomizer first called by the main function
// when decision game is chosen
void problemsPicker(){

// counter to randomize scenarios
unsigned seed= time(NULL);
	srand(seed);
	
	// Randomize scenario sets
	int counter=rand()%10+1;
	
	// Randomize outcome of player choice
	int outcome= rand();
	
	// variable for user input throughout the game
	int choice;
	
// Obligatory warning for decision games
cout<<"The choices you make in this part will affect the story." <<endl
	<<"Choose wisely."<<endl;
	
	// Sleep to let the player read before starting the scenarios
	Sleep(1500);
	
	// Calling scenarios based on time counter from 1 - 10
	// Function orders are randomized as well
	if(counter==6 || counter==9){
		set1(choice, outcome);
		cout<<endl <<"++++++++++++++++++++++++++++++++++++++++++++++"<<endl;system("pause");
		set2(choice, outcome);
	}
	else if(counter==2 || counter==7){
		set1(choice, outcome);
		cout<<endl <<"++++++++++++++++++++++++++++++++++++++++++++++"<<endl;system("pause");
		set3(choice, outcome);
	}
	else if(counter==3 || counter==8){
		set2(choice, outcome);
		cout<<endl <<"++++++++++++++++++++++++++++++++++++++++++++++"<<endl;system("pause");
		set3(choice, outcome);
	}
	else if(counter==4 || counter==5){
		set3(choice, outcome);
		cout<<endl <<"++++++++++++++++++++++++++++++++++++++++++++++"<<endl;system("pause");
		set1(choice, outcome);
	}
	else if(counter==1 || counter==10){
		set2(choice, outcome);
		cout<<endl <<"++++++++++++++++++++++++++++++++++++++++++++++"<<endl;system("pause");
		set1(choice, outcome);
	}

}

//Each function contains 2 scenarios so each function still has ordered scenarios

//Scenario set 1
void set1(int choice, int counter){
	cout<<endl<<"You meet Remy, an old friend back in law school who used to call you Pussyfoot" <<endl
		<<"for having such soft footsteps and you've always hated that." <<endl <<endl
		<<"1. Politely say hi and try to come up with small talks" <<endl
		<<"2. Call him Snakefoot" <<endl;
		
		//Keep asking input until chosen properly
		do{
		cout<<"What do you do? "; cin>>choice;
		}while(choice<1 || choice>2);
	
	// Each choice has 2 randomized outcomes
	if(choice==1){
		if((counter+1)%2==0){
			cout<<"He's still mad about you calling him nigga once and he's now a pro wrestler." <<endl
				<<"He breaks your neck on the spot." <<endl;
		}
		else{
			cout<<"He kneels down in from of you before you can say anything to apologize for the annoying words and proposed to you." <<endl
				<<"He used to mock you because he loved you and still does, you accept the ring out of pity."<<endl
				<<"You are now married, congratulations!" <<endl;
		}
	}
	else{
		if((counter+1)%2==0){
			cout<<"He accepts it as a joke and asks who you are, the guy next to him tell him to never mind." <<endl
				<<"He doesn't remember you anymore" <<endl;
		}
		else{
			cout<<"You utter your insult before you notice he is crippled in a wheelchair now." <<endl
				<<"He lost his legs in an attempt to save a little girl from being clobbered by a bear," <<endl
				<<"the girl still ended up dead from blood loss in his arms, I hope you're proud of yourself" <<endl;
			}
		}cout<<endl <<"++++++++++++++++++++++++++++++++++++++++++++++"<<endl;system("pause");
	
	cout<<endl <<"You are a 7-year-old kid alone at home playing the floor is the lava. " <<endl
		<<"The phone suddenly starts ringing when you're surfing on the coffee table." <<endl
		<<"Your parents mentioned that they won't be home in 3 hours."<<endl;
	do{
	cout<<"Do you keep playing(1) or go answer the phone(2)? "; cin>>choice;
	} while(choice<1 || choice>2);
	
	if(choice==1){
		if((counter+1)%2==0){
			cout<<"You follow the river of pure lava into a dark cave, you jump onto a rock platform once" <<endl
				<<"your coffee table board completely melts." <<endl
				<<"You encounter an altar, on it you see the ancient golden beeping bird." <<endl
				<<"You pick it up and it's your mom asking if you want some burger" <<endl;
		}
		else{
			cout<<"The surfboard gives up on the overwhelming weight of your body" <<endl
				<<"You sink into the lava below."<<endl;
		}
	}
	
	else{
		if((counter+1)%2==0){
			cout<<"It's your parents saying that they will come home late and you should go to bed" <<endl
				<<"They also say they'll always love you and your uncle will come to pick you up tomorrow morning"<<endl;
		}
		else{
			cout<<"the phone shuts off before you reach it, you're too slow!" <<endl;
		}
	}

}

//Scenario set 2
void set2(int choice, int counter){
	
	cout<<endl<<"You're the CEO of a canned food company. A country is in need of a hefty amount of food supply" <<endl
		<<"after a horrifying volcano eruption, charity might be a great opportunity to gain fame from public's attention." <<endl
		<<"You still have clients' orders to fullfill to maintain your professional relationships." <<endl
		<<"1. Be a lad and help the needy" <<endl
		<<"2. Stay loyal to your clients and ignore the needy"<<endl;
		do{
		cout<<"You only have the budget for one, what do you do? "; cin>>choice;
		}while(choice<1 || choice>2);
		
		
		if(choice==1){
			if((counter+1)%2==0){
			cout<<"The country is really thankful for your kindness but your clients are disappointed." <<endl
				<<"over half of your clients cut their ties with you." <<endl
				<<"You make a good cover model for an issue of TIMEZ magazine though" <<endl;
		}
		else {
			cout<<"It is later found out that the country is run by fluffy puppies." <<endl
				<<"You now have a lifetime supply of puppies." <<endl
				<<"You apologize to your disappointed clients by sending them puppies in tiny dresses, they happily accept." <<endl
				<<"Before you know it, the world has been dominated by puppies. YAY?" <<endl;
			}
		}
		else{
			if((counter+1)%2==0){
				cout<<"Your relationships with the cients are well-maintained, you expect the country to manage somehow." <<endl
					<<"You never hear from them again."<<endl;
			}
			else{
				cout<<"Someone leaked the info that you leave a country in need to die." <<endl
					<<"Your clients fear the day you turn on them, they cut their ties." <<endl;
			}
		}cout<<endl <<"++++++++++++++++++++++++++++++++++++++++++++++"<<endl;system("pause");

		cout<<endl <<"You are on a date at an abandoned Nazi prison turned museum." <<endl
				<<"Your companion looks at you expectantly" <<endl
				<<"1. Use your proficiency in German speaking and history knowledge to impress them with a Nazi roleplay" <<endl
				<<"2. Use your dark sense of humor to make a joke about Holocaust" <<endl;
			do{
			cout<<"What do you do? "; cin>>choice;
			}while(choice<1 || choice>2);
			
			if(choice==1){
					cout<<"Your companion is so impressed by the act. This might be the perfect time" <<endl
						<<"to tell that you are the illegitimate grandchild of Wilhelm Caetel, a Nazi general"<<endl
						<<"still looking for revenge for his execution" <<endl;
					
					// Another input after an outcome to spice thing up
					do{
					cout<<"1. Say it"<<endl
						<<"2. Joke about Hitler's mustache"<<endl
						<<"What do you do?"; cin>>choice;
					}while(choice<1 && choice>2);
					
					if(choice==1){
						cout<<"You've been arrested for a bad joke gone wrong." <<endl;
					}
					else{
						cout<<"You stick it in later that night." <<endl;
					}
				}
			else{
				if((counter+1)%2==0){
				cout<<"You companion finds the joke disrespectful towards the victims of the tragedy." <<endl
					<<"You are left alone in the museum" <<endl
					<<"the pressure of losing your companion overwhelms you and you commit suicide with an old Nazi torturing device." <<endl;
					
				}
				else{
					cout<<"Your companion laughs loudly towards the joke and admits as the illegitimate grandchild of" <<endl
						<<"Dr. Carl Claumberg, a Nazi scientist who cruelly experimented artificial insemination on prisoners." <<endl
						<<"You later stick it in." <<endl;
				}
			}
}

//Scenario set 3
void set3(int choice, int counter){
	cout<<endl <<"You're stuck under a bus stop to wait for the rain to pass on your way home." <<endl
		<<"You see a familiar face beside you but you can't really recall the name."<<endl
		<<"You try to talk but words won't come out, you're nervous, choking, vomit on your sweater, mom's spaghetti.."<<endl
		<<"He says hi and ask if you're ok."<<endl
		<<"1. Nod decisively"<<endl
		<<"2. talk" <<endl;
		do{
			cout<<"What do you do? "; cin>>choice;
		}while(choice<1 || choice>2);
		
		if(choice==1){
			cout<<"He's still unsure of your answer and decides to offer you a drink" <<endl
				<<"1. Accept"<<endl
				<<"2. Refuse"<<endl;
				do{
			cout<<"What do you do? "; cin>>choice;
		}while(choice<1 || choice>2);
		
		if(choice==1){
			if((counter+1)%2==0){
				cout<<"The drink was drugged, you were robbed..." <<endl;
			}
			else{
				cout<<"The drink comes out of the spot you least expected, but you still enjoy it" <<endl;
			}
		}
		else{
			cout<<"Good, you remember what your parents taught you about accepting thing from strangers."<<endl;
		}
		}
		else{
			if((counter+1)%2==0){
			cout<<"You have nothing to talk about, the rain passed and the section is abandoned" <<endl;
			}
			else{
				cout<<"You ask if you have met before."<<endl
					<<"He admits that he is a lost Nigerian prince in need if a means to get home."<<endl
					<<"You reminisce the days you spent living in Africa and you suddenly came into a realization."<<endl;
				system("pause");
				cout<<"You've never been to Africa and the bloke beside is nowhere to be seen."<<endl;
			}
		}cout<<endl <<"++++++++++++++++++++++++++++++++++++++++++++++"<<endl;system("pause");
	
	cout<<endl<<"You are stuck in an old castle with long branching hallways." <<endl
		<<"You encounter the first split. Turn (1)left / (2)right: ";
		do{
		cin>>choice;
		if(choice<1 || choice>2){
			cout<<"Try again. ";
		}
		}while(choice<1 || choice>2);
	
	if(choice==1){
		if((counter+1)%2==0){
			cout<<"You encounter a big treasure chest with a lock on it."<<endl
				<<"1. Open it with your sword"<<endl
				<<"2. Open it with your bare hands"<<endl
				<<"What do you do? ";
			do{
			cin>>choice;
			if(choice<1 || choice>2){
			cout<<"Try again. ";
			}
			}while(choice<1 || choice>2);
			
			if(choice==1){
				cout<<"You don't have a sword, I knew it was dangerous to go alone!" <<endl
					<<"Open it with your bare hands(2)? ";
					do{
					cin>>choice;
					if(choice!=2){
						cout<<"You can do nothing else. Use hands(2)? ";
					}
					}while(choice!=2);
					cout<<"The treasure chest is a carnivorous demon in camouflage, you've been eaten alive..."<<endl
						<<"Thanks for playing."<<endl;
			}
			else{
				cout<<"It's unlocked, the padlock was just for show, you obtained banana."<<endl
					<<" A wild Armored Ape has appeared."<<endl
					<<"1. Give banana"<<endl
					<<"2. Draw your sword"<<endl
					<<"What do you do? ";
					do{
					cin>>choice;
					}while(choice<1 || choice>2);
					
				if(choice==2){
					cout<<"You don't have a sword. Give banana(1)? ";
					do{
					cin>>choice;
					if(choice!=1){
						cout<<"You can do nothing else. Give banana(1)? "<<endl;
					}
					}while(choice!=1);
					cout<<"It takes the banana and plucks your eyeballs with it. It prefers your eyeballs"<<endl
						<<"You're stuck bumbling around the castle halls for the rest of your pathetic life."<<endl;
				}
				else{
					cout<<"It takes the banana and eats it."<<endl
						<<"It proceeds to eat your face since you are wearing a banana costume."<<endl
						<<"BTW, Bananas are chom-choms"<<endl;
				}
			}
		}
		else{
			cout<<"You encounter Gradiel Gaylord, your rival from art school who now leads the Royal Guards."<<endl
				<<"You are reminded of the time he stuck a saxophone to your head and you went home like a drunken ostrich."<<endl
				<<"He is badly wounded from a battle with the ancient Shadow Serpent ahead and his squad was massacred."<<endl
				<<"He tells you to turn back and find another way."<<endl
				<<"1. Be ballsie and face the Shadow Serpent"<<endl
				<<"2. Honor his request and walk away"<<endl;
				do{
				cout<<"What do you do? ";cin>>choice;
				}while(choice<1 || choice>2);
				
				if(choice==1){
					cout<<"You encounter the Shadow Serpent"<<endl
						<<"1. Cast lighting spell on its face"<<endl
						<<"2. Turn back and run"<<endl;
					do{
					cout<<"What do you do? ";cin>>choice;
					}while(choice<1 || choice>2);
					if(choice==1){
						cout<<"It's super effective."<<endl
							<<"The Shadow Serpent collapses as you are brandishing on your glory."<<endl
							<<"You've been flattened."<<endl;
					}
					else{
						cout<<"As you turn away, the serpent tosses Shade Arrows at you."<<endl
							<<"After enduring some scratches, you manage to go back to the spot where you left Gradiel earlier."<<endl
							<<"He isn't there anymore."<<endl
							<<"Suddenly a loud bang triggers and colors burst at your eyes."<<endl;
							system("pause");
						cout<<"HAPPY BIRTHDAY!"<<endl							
							<<"The Shadow Serpent gives you a tap on the back with its massive tail and breaks your spine."<<endl;
					}
				}
				else{
					cout<<"As you walk away from him, you can hear him struggling to stand up."<<endl
						<<"1. Turn around"<<endl
						<<"2. Keep walking"<<endl;
					do{
					cout<<"What do you do? ";cin>>choice;
					}while(choice<1 || choice>2);
					
					cout<<"He sticks a trombone to your head before you have time to reach."
						<<"You die from suffocation, trombone is really tight, you know?"<<endl;
				}
		}
	}
	
	else{
		cout<<"You encounter a giant gate with BIG BOSS written on it."<<endl
			<<"1. Open the gate"<<endl
			<<"2. Save your data"<<endl
			<<"What do you do? ";
			do{
			cin>>choice;
			if(choice==2){
				//Give illustion of choice to the player
				cout<<"This game doesn't support saving. Open the gate(1)? ";
			}
			else if(choice!=1){
				cout<<"Try again. ";
			}
			}while(choice!=1);
			
			cout<<"You encounter a giant robot shaped like an egg with spiky arms."<<endl
				<<"1. Jump on its head 10 times"<<endl
				<<"2. Draw your sword"<<endl
				<<"What do you do? ";
					do{
					cin>>choice;
					}while(choice<1 || choice>2);
					
					if(choice==1){
						cout<<"The robot has been wrecked."<<endl
							<<"You see a sign saying the princess is in another castle"<<endl
							<<"You see no other means of going out. You're stuck forever."<<endl
							<<"Thanks for playing"<<endl;
					}
					else{
						cout<<"You don't have a sword."<<endl
							<<"Start bopping its head 10 times(1)? ";
							do{
							cin>>choice;
							if(choice!=1){
								cout<<"You can do nothing else but (1). ";
							}
							}while(choice!=1);
							
						cout<<"You took too long and the robot smashed your face in."<<endl
							<<"Thanks for playing"<<endl;	
					}
	}
}
