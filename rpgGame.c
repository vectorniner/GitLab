//Contributors
//Garrett Poppe 3/19/18
//Diana Guevara-Colocho 4/18/2018
//Mohamed shalabi
//Dylan Dickerson 3/21/18
//Brian Baskovich 3/21/18
//Mahir Eldaw 3/21/18
//Salvador Rodriguez 4/04/2018
//Joseph Moreno
//Maik De Leon Lopez 3/21/18
//Kevin Ramirez
//Airrion Young 4/8/18
//Cesar Gutierrez 4/18/18
//Thar Soe
// Elthon Cisneros 4/6/18
//Victor De Jesus 4/2/18
//Emanuel Fonseca
//Cameron Jackson
//Erick Cabanban

//Kevin Maatubang


//Bradford Mcdaniel


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#define NUM_DICE 3
#define RAN 2
#define CORRECTCODE 1775
int exercise(void);
void convertToUpper(char *sPtr);
int rollDice(int *dice);
void printDice(int *dice, int sum);
void swap (int *x, int  *y );



int guessNumber();
int cash(int temp);
void menu();
void story();
void trivia(int *ptr);
void writte(void);


void switcch(void);
int room12RandomNumber(int lowestNumber, int highestNumber);

void readScreen(void);



int main(void)
{
	int x,y,z,i,h,g,k,choice=0;
	char name[256];
    system("clear");
	printf("Please enter your name: "); //Input any number of array inputs
	scanf("%s",name);
    system("clear");
	printf("Hello %s welcome to the rpgGame!\n",name);
    
	while(choice != 99)
	{
		puts("\nYou find yourself in a dark room and you are not sure how you got here.");
        	puts("\nAs you look around you see the room has 25 doors, each labeled with a number. You are not sure how such a small room can have 25 doors, sooo magic...");
        	puts("\nThe room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
        	puts("\nWhat door do you choose?");
        	scanf("%d",&choice);
		
		switch(choice)
		{
			case 1://Alexander Gebretinsai's Assigned Room
			{
				while(choice != 99)
				{

							puts("You open the door and find a dog");
							puts("You now have 3 choices to choose from below: Please enter a number 1-3");
							puts("1. Pet the dog");
							puts("2. Feed the dog with the peanut butter sandwich you have in your hand");
							puts("3. Run away.");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You pet the dog and he seems happy.");
								puts("You get bored of petting the dog so you stop. The dog then begins to whimper begging for you to pet him more");
								puts("You now have 2 choices to choose from below: Please enter a number 1-2");
								puts("1. Pet the dog again");
								puts("2. Walk away to find something else");
								scanf("%d",&choice);
								if(choice == 1)
								{
									puts("You pet the dog again but while you are petting the dog, a monster appears and tries to attack you");
									puts("You now have 2 choices to choose from below: Please enter a number 1-2");
									puts("1. Run away");
									puts("2. Grab the sword that appears on the ground next to you and fight the monster");
									scanf("%d",&choice);
									if(choice == 1)
									{
										puts("You try and run away but the monster eats you. Sorry, game over.");
										break;
									}
									
									
									else if (choice == 2)
									{
										puts("You try to fight the monster but you are a noob and do not know how to sword fight so the monster eats you. Game over,sorry");
										break;

									}
							
								}
								else if(choice == 2)
								{
									puts("As soon as you start walking away, the dog barks warning you that a monster is about to attack you");
									break;
								}
	
								break;
							}
							else if(choice == 2)
							{
								puts("You try and feed the dog but the dog seems like he is not hungry so you eat it yourself. All of a sudden a monster comes and attacks you.");
								puts("You now have 2 choices to choose from below: Please enter a number 1-2");
								puts("1. Run away");
								puts("2. Grab the sword that appears on the ground next to you and fight the monster");
								scanf("%d",&choice);
								if(choice == 1)
								{
									puts("You try and run away but the monster eats you. Sorry, game over.");
									break;
								}																		
								else if (choice == 2)
								{
									puts("You try to fight the monster but you are a noob and do not know how to sword fight so the monster eats you. Game over,sorry");
									break;
								}
							}
							else if(choice == 3)
							{
								puts("You run away but the dog barks warning you there's a monster beind you.");
								puts("You now have 2 choices to choose from below: Please enter a number 1-2");
								puts("1. Run away");
								puts("2. Grab the sword that appears on the ground next to you and fight the monster");
								scanf("%d",&choice);
								if(choice == 1)
								{
									puts("You try and run away but the monster eats you. Sorry, game over.");
									break;
								}
								else if (choice == 2)
								{
									puts("You try to fight the monster but you are a noob and do not know how to sword fight so the monster eats you. Game over,sorry");
									break;
								}
								break;
							}
							else
							{
								puts("Error!");
							}
				}
				break;
			}
			
		case 2:// Mohamed Shalabi- Room2
			{

                                while(choice != 99)
				{

								  char guess;
								  char nick_name[256];
								  int i, dice[NUM_DICE], sum, oldSum, correct, goodGuesses;
								  srand(time(NULL));
								  goodGuesses = 0;
								  sum = rollDice(dice);
								  FILE *wPtr = fopen("room2.txt", "w");
								  printf("Please enter your nickname\n");
								  scanf("%s",nick_name);
    							    	  printf(" Welcome %s to the guessing game, you have only (5) tries. Good Luck!!",nick_name);
                                                                  printf(" After you are done, you will know your result in file called room2");

      							    	  for (i=0;i<5; i++)
      								  {

								       printDice(dice, sum);
								       oldSum = sum;
								       sum = rollDice(dice);

								       printf(
									     "Do you think the next total will be higher, "
									     "the same, or lower than the previous total? "
									     "(h, s, l)\n"
									       );
								        scanf(" %c", &guess);

        								switch (guess)
        								{
										case 'h': correct = sum > oldSum; break;
										case 's': correct = sum == oldSum; break;
										case 'l': correct = sum < oldSum; break;
										default: correct = 0; printf("Not h, s or l.\n");
        								}
       									if (correct)
        								{
            									 printf("Your guess was correct!\n");
           									 goodGuesses++;
        								}
        								 else
             						                {
        						 			  printf("Your guess was incorrect!\n");
        								}
 	     							  }

    								  fprintf(wPtr,"%s got a total of guesses correct=%d\n",nick_name,goodGuesses);
								  printf("\n");
								  printf("you can know your score in a file called room2.txt\n");
								  printf("\n\n");
								  fclose(wPtr);
    							          break;

							}
                					break;
            		}

          	case 3: // ELTHON CISNEROS'S ROOM  
			{
					while(choice != 99)
					{
							FILE *room3outfile; //pointer to outfile / file to be created on user computer.

							int triviaTrueFalse = 0; //int variable used in 'trivia' function. called and modified using pointers.
							int e;
							char elname[256]; // ARRAY to hold name user entered when game starts.
							const int SIDES = 6; //for die roll
							int eRoll;
							char advance;
							for (e = 0; e < 256; e++)
							{
								elname[e] = toupper(name[e]);
							}
							printf ("\n");
							printf("*** WELCOME %s!!! This is Room 3...***\n ", elname);
							printf ("--You walk into a strangely bright and colorful room. You may get the impression that you walked into a toy store with the color scheme you see on the wall. You see 2 untitled buttons on a table...and you just heard the door close and lock behind you!\n");
							printf ("--Keep in mind: There are hidden doors within this bright and colorful room. The only thing keeping these doors closed is the power. Would be a mighty shame if there was a power outage!\n");
							printf ("--Above the buttons a sign reads: You may choose press one button to determine your fate. To not keep you in total suspense, an LCD display on the wall will vaguely let you know what just happened after you pressed this button. (Type 1 OR 2 to choose button):\n");
							printf ("--P.S. IF you are knowledgeable with computer trivia, you will do well here.. ELSE, you die. I MAY decide to give you hints... We will see...\n");
							scanf ("%d", &choice);

							switch (choice)
							{

								case 1:
									printf ("\n");
									printf ("**** BUTTON 1 PRESSED ****\n");
									printf ("***Let's play a game to decide if you get to escape this room alive...***\n");
									printf ("I'll tell you what. You may roll a 6 sided die one time. If you roll a 1, the exit door opens and you may leave at your leisure. If you roll a 6, you are immediately killed by electric shock. If you roll between a 2 and a 4, you get another try at rolling the die (except if you roll a '5'). Think of this as a Russian Roulette game, just that I gave you an extra lifeline (or two)... Aren't I the nicest???\n");
									printf ("***Type 'r' to Roll***\n");
									eRoll = 1 + (rand() % SIDES);
									//printf ("%d", eRoll);	
									
									while ((eRoll >= 2) && (eRoll <=4))
									{
						
										scanf ("%c", &advance);
										if (advance == 'r') // only continues roll if user enters 'r' character
										{
											eRoll = 1 + (rand() % SIDES);	//roll again
											printf ("Roll again! Your die rolled a :'%d'. Type 'r' to roll again: \n", eRoll);
										}
									}
									if (eRoll == 1)
									{
										puts ("YOU ROLLED A '1'. The exit door has opened and you may leave at your leisure...");
									}
									if (eRoll == 6)
									{
										puts ("***Ya done messed up!*** YOU ROLLED A '6'. **** ZAP! *** An electric shock has killed you!");
									}
									if (eRoll == 5)
									{
										puts ("YOU ROLLED A '5'. I will give you another chance to escape. Hope you like computer-related trivia...\n");
										
										trivia(&triviaTrueFalse); // FUNCTION AT BOTTOM OF PROGRAM!!!

										if ((room3outfile = fopen("room3.txt", "w")) != NULL) // opens file on users computer
										{
										  	eRoll = 1 + (rand() % 2); //rerolled a dice for random selection of possible tools (or none) granted 
											if (eRoll == 1)
											{
												fputs ("Congrats! You have been granted an axe. Maybe you can make a hole in the door? Or the wall?", room3outfile);
											}
											if (eRoll == 2)
											{
												fputs ("Sucks for you... Now the room will fill up with water even quicker... No tool has been granted to you, so looks like you are dead! GAME OVER!", room3outfile);
												exit(EXIT_SUCCESS);	
											}
														
										} //fclose
										else
										{
											puts ("ERROR! YOUR TERRIBLE COMPUTER COULDN'T OPEN A SIMPLE TEXT FILE!");					
										}
										fclose(room3outfile);

											
										// call a function here w/ prototype. Have the function pass a true or false value back here.
										// for the tool granted to user, have it be displayed in an outfile.
									}
									while ((eRoll < 1) || (eRoll > 6))
									{
										puts ("INVALID input!");
									}							
									break;
									// you may choose another card
								case 2:
									printf ("\n");
									printf ("**** BUTTON 2 PRESSED ****\n");
									printf ("***This button just cut power to lights in the room (as well as those hidden doors I mentioned before). Hope you like the dark and bees...***\n");
									while (choice != 99)
									{
										puts ("Display reads: Power has been cut to this room. You will be given a chance to either escape from this room alive or not. Let's play some trivia. Being one myself, I like computers, so I would like you to guess what year Gottfried Leibniz invented binary");
										scanf ("%d", &choice);
										while (choice != 1679)
										{
											puts ("Oops! WRONG!!!!! Guess again!");
											scanf ("%d", &choice);
											puts ("Until you correctly guess Leibniz invented binary, you will be trapped in this room in particular!!! Well, that may be a bit harsh. I will give you one clue: 'late 1600's'");
										
										}
										puts ("~~~YOU GUESSED CORRECTLY!~~~ You are one smart cookie! You get to escape...");
										break;	
									
									}
									break;
								default:
									
									puts ("Man, you do not listen to instructions very well... Didn't I tell you to select buttons 1 OR 2??? Come back when you are not half-asleep...");
									scanf ("%d", &choice);
									
									break;
	
							}
							break;
							puts("Choose another room.");
							scanf("%d",&choice);
					}
					break;
			}// ***END*** ELTHON CISNEROS' ROOM

			case 4:
			{
					while(choice != 99)
					{
                        char name[30]={0};
                        char message[30]={0};
                        FILE *wptr;
                        int age =0;
                    
                        while(!feof(stdin)){
                            puts("welcome to room 4!");
                            puts("before we get to the games lets write out a letter in case you dont make it!");
                            
                            wptr= fopen("Letter.txt", "at");
                            
                            puts("enter your age");
                            scanf(" %d", &age);
                            
                            
                            puts("enter name: ");
                            scanf(" %s", name);
                            
                            
                            puts("enter last message ");
                            scanf("%s", message);
                            
                            
                            break;
                        }
                        
                        
                        fprintf(wptr,"%d %s %s\n", age,name,message);
                        
                        fclose(wptr);
                        
                        
                        menu(); // this is just to show the menu nothing else
                        int zero=0;
                        int *counter;
                        counter=&zero;
                        
                        char choice;
                        while (choice !='z')
                        {
                            
                            double gpa=0;
                            
                            
                            scanf(" %c", &choice);
                            
                            
                            if(choice =='1')
                            {
                                
                                if((*counter)==1 ||(*counter)==2){
                                    int temp=30;
                                    puts("you found a key and 50 dollars");
                                    puts("wonder where the key goes?");
                                    (*counter)++;
                                    printf("1 printing your pointer %d", (*counter));
                                    cash(temp);
                                }
                                else{
                                    puts("Didnt find anything? that sucks!");
                                    (*counter)++;
                                }
                                
                                menu();
                            }
                            
                            
                            if(choice =='2')
                            {
                                guessNumber();
                                puts("thanks for playing your get $20");
                                int temp=20;
                                cash(temp);
                                (*counter)++;
                                menu();
                            }
                            
                            if(choice =='3')
                            {
                                story();
                                (*counter)++;
                                menu();
                            }
                            
                            if(choice =='4')
                            {
                                int temp=0;
                                if(cash(temp)==2){
                                    puts("Congrats you have won");break;
                                }
                                else{
                                    puts("dont be a quiter go back and get some money");
                                }
                                (*counter)++; //(*ptr)++
                                menu();
                            }
                            
                        }
                        
					}
					break;
			}
			case 5: //Airrion Young
			{
					while(choice != 99)
					{
						int chest = 0;
						int fight = 0;
						int game = 0;
						int guess = 0;
						int i = 0;
						int room5 = 0;
						int truce = 0;

						int numGuess[6];
						char nameBARN[50];

						time_t t;
						FILE *wPtr = fopen("room5.txt", "w");
						
						puts("you open the door and find two different chests, one blue one red...");
						
						printf("Enter which chest to open\n");
						puts("Enter 1 for Red Chest");
						puts("Enter 2 for Blue Chest");

						scanf("%d", &chest);

						if(chest == 1)
						{
							puts("Suddenly a dragon appears and lunges at you. There is a window to your left, and a sword to your right.");
							puts("Do you...\n 1: take a chance and escape through the window \n 2: pick up the sword and defend yourself ");
							scanf("%d", &fight);
							if(fight == 1)
							{
								puts("Why would you choose to jump out of a window?");
								puts("Due to your two-story fall, you now suffer from amnesia and have no recollection of room 5...");
								fprintf(wPtr, "What happened here.....?");
							}
							if(fight == 2)
							{
								puts("The dragon watches as you picks up the sword, nervously he notices that you dont realize he is friendly");
								puts("The dragon opens his mouth to speak, shocked you drop the sword");
								puts("The dragon precedes to explain that he is friendly and is particularly fond of guessing games");
								puts("Do you want to play the game? 1-yes 2-no");
								scanf("%d", &game);
								if(game == 1)
								{
									i = 0;

									puts("The dragon wants you to guess a number as a hint he says 1 - 5");
									puts(" Begin Entering: \n Press 10 to give up");
									scanf("%d", &guess);

									while(guess != 10)
									{
										puts("Enter Again");
										scanf("%d", &guess);
										numGuess[i] = guess;
										game++;
										if(game == 6)
										{
											puts("Looks like you got caught in dragon's infnite loop");
											guess = 10;		
										}
									}
										
									puts("The dragon is tricky, he mentioned 1 - 5 but said enter 10 to give up");
									puts("10 was actually the target number and youve been taunted");
									puts("The dragon would like to play another game, this time he wants you to guess his name");
									puts("He offers you one hint, He was named after a popular dinasour from your childhood");
									
									puts("What is the dragons name?");
									scanf("%s",nameBARN);
									printf("\n");
									
									i = 0;
									while (nameBARN[i])
									{
										nameBARN[i] = toupper(nameBARN[i]);

										i++;
									}

									if((strcmp(nameBARN,"BARNEY") == 0))
									{
										puts("Barney is proud of your guess and decides you are too great of a competitor and decides he no longer can trick you with his games");
									
									}
									else
									{
										puts("Sadly, your guess was incorrect, instead of making you keep guessing the dinasour tells you his name... Barney");
									}
									puts("Barney admires you and lets you leave room 5");
																		
								}
								if(game == 2)
								{
									puts("You have offended the dragon, He has now thrown you out of the window");
									puts("Due to your two-story fall, you now suffer from amnesia and have no recollection of room 5....");
									fprintf(wPtr,"What happened here......?");
								}
							}							
						}
						if(chest == 2)
						{
							srand((unsigned) time(&t));
							puts("You have found the Princess");
							puts("The King has offered you a grand reward");
							puts("Do you accept the Kings reward? 1-yes 2-no");
							scanf("%d", &room5);
							if(room5 == 1)
							{
								puts("CONGRATULATIONS you have married the Princess");
								fprintf(wPtr,"The food was the only highlight of your wedding day...Good Luck with that\n");
								puts("Now that you have been crowned, what is first on your agenda?");
								puts("1: Wage War \n2: Divorce the Princess");
								scanf(" %d", &game);
								if(game == 1)
								{
									puts("You are unprepared for war, you have 3 soliders while the neighboring kingdom has 200");	
									puts("The general offers a chance to call a truce, he says you must guess the random number he is thinking of...");
									puts("Guess a number between 0 and 32");
									scanf("%d", &guess);
									truce = (rand() %33);
									
									if(guess == truce)
									{
										puts("You guess the correct number, there will be no lives lost today");
										
									}
									else
									{
										puts("It was a valiant effort, but you have been defeated, better luck next time");
									}
									
									puts("You may graciously leave room 5, Prince");
								}
								if(game == 2)
								{
									puts("The king does not take well to divorce, he banishes you from the kingdom and tarnishes your reputation");
									puts("You decide that you no longer want to be seen so you carve out a tree and take shelter there, befriending local squirrels\n You are now seen as the town weirdo");
								}
							}
							if(room5 == 2)
							{
								puts("You have been banished from room 5");
								fprintf(wPtr,"You have met your demise in room 5\n");
							}
						}
					break;					
					fclose(wPtr);	
					}
					break;
					
			}//end Airrion Young
			case 6:
			{
					while(choice != 99)
					{
							int select;
							FILE *optr;
							optr = fopen("Note(room 6).txt", "w+");
							puts("You enter the room and close the door to prevent the water from flowing in. Looking around you find a well at the center with no rope, sealed crates at the corner of the room, a locked door at the other side, a crack in the wall, and a pile of clothes next to the well. What would you like to investigate?\n1. The well\n2. The crates\n3. The door\n4. The crack\n5. The clothes");
							scanf("%d",&select);
							while(select != 5) {		
								switch(select) {
									case 1:
										puts("The well is made of stone and holds still water at the very bottom. You see a shiny object.\nWhere else would you like to investigate?");
										scanf("%d",&select);
										break;
									case 2:
										puts("The crates are shut tight and is impossible to open without a specific tool.\nWhere else would you like to investigate?");
										scanf("%d",&select);
										break;
									case 3: 
										puts("The door will not yield by brute force, you require a key to move forward.\nWhere else would you like to investigate?");
										scanf("%d",&select);
										break;
									case 4:
										puts("The crack has an opening just enough to view into a small closet. It seems like the closet was a part of the room.\nWhere else would you like to investigate?");
										scanf("%d",&select);
										break;
									default:
										puts("That is not a valid place to investigate, please pick a number from 1 to 5.");
										scanf("%d",&select);
										break;
								}
							}
											
							puts("You find a small chisel and hammer within the clothes along with a piece of paper. Examining the clothes a bit closer you notice that the clothes is mishhapened for a human...\n");
							puts("With your newly acquired hammer and chisel, you think of some ideas on how to use the hammer and chisel. What would you like to use the hammer and chisel on?\n1. The well\n2. The crates\n3. The door\n4. The crack");
							scanf("%d",&select);
							while(select != 4) {
								switch(select) {
									case 1:
										puts("You use the hammer and chisel on the well and broke the well, causing it to collapse in on itself. That did not go so WELL, You lose.");
										exit(EXIT_SUCCESS);
									case 2:
										puts("You use the crates but it does nothing more than give you splinters.\nWhat would you like to use the hammer and chisel on?");
										scanf("%d",&select);
										break;
									case 3:
										puts("You use the hammer and chisel on the door and it does not work.\nWhat would you like to use the hammer and chisel on?");
										scanf("%d",&select);
										break;
									case 5:
										puts("Somehow, you decided against the obvious and decide to use the hammer and chisel on the clothes. While you tear through the clothes you find a magical glowing key. You use the key on the door and suddenly, you find yourself in a room filled with treasure! You leave the dungeon with chests full of riches! You found the true ending!");
										exit(EXIT_SUCCESS);
									default:
										puts("That is not a valid choice, please pick a number from 1 to 5");
										scanf("%d",&select);
										break;
								}
							}

							puts("You use the hammer and chisel on the crack, creating a bigger hole that allows your arm to fit through. You reach inside and retrieved an old lockpick. What would you like to use the lockpick on?\n1. The well\n2. The crates\n3. The door");
							scanf("%d",&select);
							while(select != 2) {
								switch(select) {
									case 1:
										puts("Moving closer to the well you stumbled and drop the lockpick into the well. Without the lockpick you cannot leave. LOCKS like you PICKED a bad time to be clumsy. You lose.");
										exit(EXIT_SUCCESS);
									case 3:
										puts("You attempted to pick the lock on the door but to no avail. \nWhat would you like to use the lockpick on?");
										scanf("%d",&select);
										break;
									default:
										puts("That is not a valid choice, please pick a number from 1 to 3");
										scanf("%d",&select);
										break;
								}
							}
							
							puts("You move closer to the crates and see 3 crates with certain distinctions. Crate 1 is quiet and new with a string wrapped around the lid. Crate 2 is fairly old and dusty, littered with claw marks all around the crate. Crate 3 is shorter than the first two and appears to be stuck to the ground. What would you like to use the lockpick on?\n1. Crate 1\n2. Crate 2\n3. Crate 3");
							scanf("%d",&select);
							while(select != 2) {
								switch(select) {
									case 1:
										puts("You pick the lock for the first crate and discovered a bomb! By opening the crate you set off a bomb and exploded. Isn't that just CRATE. You lose.");
										exit(EXIT_SUCCESS);
									case 3:
										puts("You picked the lock for the third crate and found nothing. It turned out to be an unimpressive find. \nWhat would you like to use the lockpick on?");
										scanf("%d",&select);
										break;
									default:
										puts("That is not a valid choice, please pick a number from 1 to 3");
										scanf("%d",&select);
										break;
								} 
							}
							
							puts("You decided to pick the lock on the second crate and discovered that the creature which created the claw marks had long since passed. Lying next to the creature is more rope that could physically fit in the crate. As bizarre as that seems you decided to take the rope.\n");
							puts("With the newly acquired rope you go to the well and decided to retrieve the shiny object at the bottom. What would you like to do?\n1. Tie the rope around the well's wooden beam and climb down\n2. Lasso the object using the long piece of rope\n3. Look around for alternatives");
							scanf("%d",&select);
							int select2;
							while(select != 3) {
								switch(select) {
									case 1:
										puts("You tie the rope around the wooden beam and tug it to ensure a stable descent. It appears to be stable. Descend?\n1. Yes\n2. No");
										scanf("%d",&select2);
										switch(select2) {
											case 1:
												puts("You climb into the well and descend slowly and steadily. All goes well until you misplace your footing and slip, causing you to fall and snapping the rope. Looks like that went down in a SNAP. You lose.");
												exit(EXIT_SUCCESS);
											case 2:
												puts("You untie the rope and decided against climbing down. What would you like to do?\n1. Tie the rope and climb\n2. Lasso the object\n3. Look around for alternatives");
												scanf("%d",&select);
												break;
											default:
												puts("That is not a valid choice, please pick a number from 1 to 2");
										}
									case 2:
										puts("You tie one end of the rope in a particular shape in order to scoop up the shiny object. It does not work. \nWhat would you like to do?");
										scanf("%d",&select);
										break;
									default:
										puts("That is not a valid choice, please pick a number from 1 to 3");
										scanf("%d",&select);
										break;
								}
							}
																										
							puts("You decided to look around the room once more and discover a convenient bucket within the sealed up closet. With this you are sure you can retrieve the object. What will you use to retrieve the bucket?\n1. Hammer and chisel\n2. Lockpick\n3. Rope");
							scanf("%d",&select);
							while(select != 3) {
								switch(select) {
									case 1:
										puts("You attempt to use the hammer and chisel to widen the hole, but end up collapsing the wall on yourself. It seems like your future COLLAPSED around you. You lose.");
										exit(EXIT_SUCCESS);
									case 2:
										puts("I know you can do better than that, try something else.");
										scanf("%d",&select);
										break;
									default:
										puts("That is not a valid choice, please pick a number from 1 to 3");
										scanf("%d",&select);
										break;
								}
							}
							puts("You decided to use the rope and managed to sling the rope around the bucket somehow. You tug it towards you until you retrieved the bucket. Once retrieved, you tie the rope around the bucket's handle and lower it into the well. Steadily and nimbly, you scoop the shiny object into the bucket and pull it upwards. The object was a key! You used the key on the door and escaped!\n\nSuddenly, you noticed the piece of paper from earlier suddenly wet with black ink, maybe you should check it out?");
							fputs("Dlj 313,\nTstyrd slgp mpnzxp otcp ty xj acpotnlxpye, pgpcj olj te qppwd ld tq estd ofyrpzy pialyod hteszfe wtxted. Egpcj etxp I qppw ld tq I'x nwzdpc ez hsle I yppo, lyo pgpcj etxp I zapy esp ozzc ez yzestyr. Iy estd dtxawp czzx I opntop ez deza, te'd etxp ez elvp xj cpde. Iq lyjzyp cplod estd eplc esczfrs xj nwzespd fdtyr xj slxxpc lyo nstdpw, I qldszypo l vpj qczx xlrtn esle htww spwa jzf zy jzfc hlj.\nKey: 11", optr);
							fclose(optr);
							exit(EXIT_SUCCESS);
					}
					break;
			}
			case 7:
			{
			int passedMath = 0;                                                                                                                                                                                                int passedEng = 0;                                                                                                                                                                                                 puts("You open the door to find yourself back in your highschool hallway");                                                                                                                                         while(choice != 99)                                                                                                                                                                                                {                                                                                                                                                                                                                                                                                                                                                                                                                                       FILE *wptr;                                                                                                                                                                                                        char swag[30];                                                                                                                                                                                                     puts("What would you like to do?");                                                                                                                                                                                if(passedMath == 0)                                                                                                                                                                                              {                                                                                                                                                                                         			   puts("1. Go to Algebra");                                                                                                                                                                                          }                                                                                                                                                                                                                  else;                                                                                                                                                                                                                                                                                                                                                                                                                                 if (passedEng == 0)                                                                                                                                                                                                {                                                                                                                                                                                            	    		      puts("2. Go to English");                                                                                                                                                                                         }                                                                                                                                                                                                                  else;                                                                                                                                                                                                              if(passedEng == 1 && passedMath == 1)                                                                                                                                                                              {                                                                                                                                                                                                                  puts("17. Graduate");                                                                                                                                                                                              }                                                                                                                                                                                                                 	
			else;                                                                                                                                                                                                              puts("3. Continue walking the halls");                                                                                                                                                                             puts("4. Go to the bathroom");                                                                                                                                                                                     scanf("%d", &choice);                                                                                                                                                                                              switch(choice)                                                                                                                                                                                                      {                                                                                                                                                                                                                 	 case 1:                                                                                                                                                                                                            puts("You walk into Algebra and there is one problem on the board that 92 percent of people get wrong it reads:");                                                                                                 puts("6/2(1+2)");                                                                                                                                                                                                  puts("What is the correct answer:");                                                                                                                                                                               scanf("%d", &choice);                                                                                                                                                                                              switch (choice)                                                                                                                                                                                                    {                                                                                                                                                                                                                  	 default:                                                                                                                                                                                                           puts("The answer is wrong. You are forced to repeat Algebra for the rest of your miserable highschool life. GAME OVER");                                                                                           choice = 99;                                                                                                                                                                                                      
			       		break;                                                                                                                                                                                                             
				case 9:                                                                                                                                                                                                             puts("Congratulations! You passed Highschool Algebra!");  
				 passedMath = 1;                                                	                                                                                                                                            break;                                                                                                                                                                                                                            }                                                                                                                                                                                                    break;                                                                                                                                                                                                                      case 2:                                                                                                                                                                                                            puts("You walk into English class and are given a worksheet with three problems asking you which sentences of the two given are correct");                                                                         puts("Split infinitives:");                                                                                                                                                                                        puts("Which is correct?");                                                                                                                                                                                         puts("1. She tried to quickly finish the book before she had to leave");                                                                                                                                           puts(" or 2. She tried to finish the book quickly before she had to leave");                                                                                                                                       scanf("%d", &choice);                                                                                                                                                                                              switch(choice)                                                                                                                                                                                                     {                                                                                                                                                                                                                  	 case 1:                                                                                                                                                                                                             puts("Sorry, wrong answer guess you gotta stay for the English lesson... GAME OVER");                                                                                                                             
						   choice = 99;                                                                                                                                                                                                       break;                                                                                                                                                                                                             case 2:                                                                                                                                                                                                             puts("That answer is correct! Now onto number 2...");                                                                                                                                                              puts("Parallel Structure:");                                                                                                                                                                                       puts("Which is correct");                                                                                                                                                                                          puts("1. The key directives of his boss were clear: meet monthly quotas, aggressive marketing techniques, and reporting in every day.");                                                                           puts("2. The key directives of his boss were clear: meet montly sales goals, practice aggressive marketing techniques and report in every day.");                                                                  scanf("%d", &choice);                                                                                                                                                                                              switch(choice)                                                                                                                                                                                                     {                                                                                                                                                                                                                  	case 1:                                                                                                                                                                                                            	puts("Almost buddy! How about you stay for the lesson and brushen up on your skills? GAME OVER");                                                                                                                  choice = 99;                                                                                                                                                                                                       break;  
						       case 2:                                                                                                                                                                                                                 puts("Good shit! One last question");                                                                                                                                                                              puts("Subject Verb Agreement:");                                                                                                                                                                                   puts("Which is correct?");                                                                                                                                                                                         puts("1. An important part of my life has been the people who stood by me");                                                                                                                                       puts("2. An important part of my life have been the people who stood by me");                                                                                                                                      scanf("%d", &choice);                                                                                                                                                                                              switch(choice)                                                                                                                                                                                                      {                                                                                                                                                                                                                  	case 1:                                                                                                                                                                                                            puts("Zoo-wee-mama way to go hotshot! You passed Highschool English");                                                                                                                                             passedEng = 1;                                                                                                                                                                                                     break;     
					 			    case 2:                                                                                                                                                                                                              puts("Wow, you're nuts, but a little lecture couldn't hurt. GAME OVER");                                                                                                                                           choice = 99;                                                                                                                                                                                                       break;                                                                                                                                                                                                     }                                                                                                                                                                                                           }                                                                                                                                                                                                            }                                                                                                                                                                                                                  break;                                                                                                                                                                                                            case 17:                                                                                                                                                                                                          puts("It was hard work, but you did it! Now sign your name into the High School Simulator 2k19 Hall Of Fame");                                                                                                     wptr = fopen("halloffame.dat", "w");                                                                                                                                                                               while(!feof(stdin))                                                                                                                                                                                                {                            
																	 
						scanf("%s", swag);                                                                                                                                                                                                 fprintf(wptr, "%s", swag);                                                                                                                                                                                         break;                                                                                                                                                                                                                            }                                                                                                                                                                                                   fclose(wptr);                                                                                                                                                                                                      choice = 99;                                                                                                                                                                                                       break;                                                                                                                                                                                                             case 3:                                                                                                                                                                                                                   puts("You continue walking the walls, but the dean catches you and pulls you into detention. GAME OVER");                                                                                                          choice = 99;                                                                                                                                                                                                       break;                                                                                                                                                                                                      case 4:                                                                                                                                                                                                                puts("You make your way into the bathroom and start to do your business. As you finish and  zip up your pants you feel someone knock on your shoulder...");                                                        puts("Its the school's bully. He beats you to a pulp and takes your lunch money. GAME OVER");                                                                                                                     choice = 99;     
				 		break;                                                                                                                                                                                                                   }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              }                                                                                                                                                                                                                         
			}			
		case 8:
			{
					while(choice != 99)
					{
							puts("You open the door and find youself in a dungeon with five doors.");
							puts("One of the five doors is the safe passage to escape and the other four are traps.");
							puts("Which door do you want to open and choose wisely!:");
							puts("1. Open the door #1");
							puts("2. Open the door #2");
							puts("3. Open the door #3");
							puts("4. Open the door #4");
							puts("5. Open the door #5");
							scanf("%d",&choice);

							switch(choice)
							{
								case 1:
								puts("NO! IT's A TRAP! The door leads you the courtyard and the knights surrounded and beat you to death for escaping.");
								puts("GAME OVER!");
								break;

								case 2:
                                                		puts("OH NO! The door you open leads you into a pit of spikes! You loss your footing and fell into the pit!");
								puts("GAME OVER!");
                                                		break;

                                               			case 3:
                                                		puts("OH MY GOD! The door leads you into a room where a fire breathing dragon is sleeping front of you and the door shuts tight. You tried open but it's no use as the dragon awakened from his slumber and unleashed his fire breath.");
								puts("GAME OVER!");
                                                		break;

                                               			case 4:
                                                		puts("Well done, the door you enter leads you to the road to your next challenge and your jouney continues");
                                                		break;

                                               			case 5:
                                                		puts("AH!!!! The door you open released a prisoner and trapped you into his cell as a scapegoat so the prisoner can escape. You are unable to break the door and trapped in the room forever!");
								puts("GAME OVER!");
                                                		break;

                                               			default:
                                                		puts("Error!!! You entered an invalid number type any number between 1 and 5!");
								break;
                                                		}
                                        }
					break;
			}
			case 9:
			{
					puts("For this room, you require one txt file named infile.txt.");
					while(choice != 99)
					{FILE *inf;
							FILE *outf;
							inf = fopen("infile.txt", "r"); 
							outf = fopen("outfile.txt", "w"); 
							int optionz = 0; 
							char wordz[20];
							int i = 0;
							int n = 0;
							int k = 0;
								
							
							if (inf == NULL)
							{
								printf("Sorry, bud. File cannot not be opened \n"); 
							}
							
							else {
								
								
								printf("WELCOME TO ROOM 9! THE C ROOM of DOOM!!!! \n\n\n\n");
								
								
								printf ("Let Me Know What Chu Wanna do to the WordList: \n"
									"Enter 1 to make the first letter a capital letter \n"
									"Enter 2 to make each word lowercase \n"
									"Enter 3 to make each word uppercase \n"
									"Enter 4 to make each word duplicate 10x and display the total num of duplicates \n"
									);
								scanf( "%d", &optionz); 
								
								if ( optionz == 1)
								{
									while ((n = fgetc(inf)) != EOF)
									{
										fscanf(inf, " %s", wordz); 
										
										fprintf(outf, "%c%s\n", toupper(wordz[0]), wordz + 1);
						
										i++;
									}
									fclose(inf);
									fclose(outf);
									
									printf("Congrats! You're finished! \n");
										
									}
								else if ( optionz == 2)
								{
									while ((n = fgetc(inf)) != EOF)
									{
										
										fscanf(inf, "%s", wordz); 
										
										for (k = 0; k < strlen(wordz); k++) 
										{
											wordz[k] = tolower(wordz[k]); 
										}
										
										fprintf(outf, "%s \n", wordz);
										i++;
									}
									

									printf("Congrats! You're finished! \n");

									
									fclose(inf);
									fclose(outf);
								}
								
								else if (optionz == 3) 
								{
									while ((n = fgetc(inf)) != EOF)
									{
										fscanf(inf, "%s", wordz); 
										
										for (k = 0; k < strlen(wordz); k++) 
										{
											wordz[k] = toupper(wordz[k]); 
										}
										fprintf(outf, "%s \n", wordz);
										i++;
									}
									
									printf("Congrats! You're finished! \n");
									fclose(inf);
									fclose(outf);
									
								}
								
								else if (optionz == 4)
								{
									while ((n = fgetc(inf)) != EOF)
									{
										fscanf(inf, "%s", wordz); 
										for (k = 0; k < 10; k++) 
										{
											fprintf(outf, "%s \n", wordz); 
												
										}
									}
									printf("Congrats! You're finished! \n");

									fclose(inf);
									fclose(outf);
								}
								
								else 
								{
									printf("Sorry but this is not a valid option \n"); 
									
								}
								
								
							}	
					}
					break;
			}
			case 10:
			{
				puts("Today you will be watching my puppy while I am in Pope's class holding on for dear life.");
				puts("My dog's name is Cannon.\n");
				puts("INSTRUCTIONS: You have to figure out what Cannon needs to remain happy...");
				printf("Hello %s ",name);
				convertToUpper(name);
				puts("\nAs you open the door...");
				printf("%s ",name);
				puts("\nCANNON IS CRYING!!");
				puts("Guess a number between 1-5 to see why Cannon is crying\n");
				puts("1: Food");
				puts("2: Water");
				puts("3: Bathroom");
				puts("4: Play");
				puts("5: Sleepy\n");
				int flag = 0;
				int num=0;
				while (flag!= 2)
				{	
						if (flag == 1)
						{
							printf(" ");
						}
						else 
						{
								scanf("%d",&num);
								if (num ==1)
								{
									switcch();		
								}
							if(num ==2)
							{
								puts("Cannon was a bit thirsty but he is still wining.");
							}
							if (num ==3)
							{
							puts("Great thinking!");
							puts("\nPick him up and take him to the back yard.");
							num =1+(rand() % RAN);		
							}
							if(num ==1)
							{
								puts("He peed, Just water it down.");
							}	
							if (num ==2)
							{
								puts("He pooped, grab the pooper scooper and get to work.");
							}
					}
					if (num ==4)
					{	
						puts("What game would you like to play?");
						puts("1: Tug of war");
						puts("2: Frisbee");
						puts("3: Wrestle");
						puts("4: Exercise");
						int numb =0;
						scanf("%d",&numb);
						if (numb ==1)
						{
							puts("He is having a great time and will eventually get sleepy.");
						}
						if (numb ==2)
						{
							printf("He doesnt know how to play this game so he stares at %s.",name);
						}
						if (numb ==3)
						{
							printf("Cannon is agressive so he bites %s. ",name);


							writte();




						}
						if (numb ==4)
						{
							puts("Cannon runs up and down the black yard in 3 different intervals");
							puts("you need to record the numbers");
							exercise();
						}
					}
					if (num ==5)
					{
						puts("Cannon is very loving, so he cuddles up and falls alseep easily.");
						flag =2;
						printf("Thankyou %s I have returned from Pope's class.\n",name);
					}			
					if(num != 5)
					{
						puts("\ntry again!");
					}	
				
		

				}
			}
			case 11:
			{
						while(choice != 99)
						{
									int boxNum=0;
									int randNum=0;
									int numBoxes=0;
									int opt1=0;
									int opt2=0;
									int opt3=0;
									int *aPtr;
									char aString[256];
									char aLetter;
									FILE *writePage;
									aPtr=&randNum;
									printf("You open the door of Room #%d and find a damp room, mostly empty, three boxes lay on the floor\n",choice);
									puts("The floor feels wet, it seems water is entering the room");
									puts("You feel the urge to look through the boxes, something in there might help the situation");
									puts("How many would you like to look through?");
									scanf("%d",&numBoxes);	
									srand(time(NULL));
									if(numBoxes>3)
									{
										printf("You don't have the time to search through %d boxes\n",numBoxes);
										puts("I'll give you a second chance");
										puts("How many boxes would you like to look through?");
										scanf("%d",&numBoxes);
									}
									if(numBoxes==0)
									{
										puts("I guess giving up is not so bad");
										puts("The room floods and you drown.");
										choice=99;
									}
									else
									{
										for(i=0;i<numBoxes;i++)
										{
											printf("Which box would you like to look in?\n");
											scanf("%d",&boxNum);
											switch(boxNum)
											{
												case 1:
													printf("Under Box #%d there is a Die, Would you like to Roll it?\n",boxNum);			
													printf("Enter \"Yes\" or \"No\"\n");
													scanf("%s",aString);
													if(isalpha(aString[0]))		
													{							
														aString[0]=tolower(aString[0]);
														if(isalpha(aString[1]))		
														{
															aString[1]=tolower(aString[1]);
															if(isalpha(aString[2]))
															{
																aString[2]=tolower(aString[2]);
															}	
														}
													}
													if(aString[0]=='y' && aString [1]=='e' && aString[2]=='s')
													{
														*aPtr=(rand()%5)+1;
														printf("You rolled a %d, that's it nothing else\n",randNum);
													}
													else if(aString[0]=='n' && aString[1] == 'o')
													{
														printf("You place the box on top of the Die\n");
													}
													else
													{
														printf("Well I guess you leave it alone\n");	
													}
													opt1++;
													break;
												case 2:
													printf("Under Box #%d you find a pencil and a small page\n",boxNum);
													writePage=fopen("page.txt","w");
													printf("What would you like to write in it?\nKEEP IT SHORT!\nEnter CTRL-D to Stop\n");
													aLetter=getc(stdin);
													while((aLetter!=EOF))
													{
														if(isprint(aLetter))
														{
															fputc(aLetter,writePage);
														}
														aLetter=getc(stdin);
													}
													fclose(writePage);
													opt2++;
													break;
												case 3:
													printf("Under Box #%d is an old dusty monitor\n",boxNum);
													printf("You try to power it on, even though it is not connected to an outlet\n");
													printf("Surprisingly it turns on, because of magic? or maybe it is powered by AA batteries?\nEither way it works\n");
													readScreen();
													opt3++;
													break;
												default:
													break;
											}
										}
										if(numBoxes==3)
										{
											puts("You just wasted your time looking through 3 useless boxes");
											if(opt1==1 && opt2==1 && opt3==1)
											{
												puts("But you took the time to look through all 3 of them");
												puts("A secret door opens, it leads to the outside world, you are free of this place");
											}
										}
										else
										{
											puts("The room floods with water, you end up drowning");
										}
									}
									break;	
						}

						break;
			}
			case 12:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							printf("A room full of games\nWelcome this is room 12\nWhat would you like to do: \n99. Leave Room 12\n2.Stay\n");
							int input=0;
							srand(time(NULL));		/* srand function allows the rolls to be as random as possible */
							scanf("%d", &choice);
							int i=0;


	 						int tileChoice=0;		/* tile that the user chooses */
	 						int currentTile=1;		/* current tile the user is on */

	 						int mine1=0;			/* first mine on a random tile */
	 						int mine2=0;			/* second mine on a random tile */
	 						int newRandomMines=0;		/* used to indicate if new mines should be generated */
	 						int mineFieldAttempt=1;		/* counts the amount of times the user has attempted the mine field level */
	 						int incorrectFlag=0;		/* indicates if the user typed the word correctly in the Typing Challenge game */
							int game1ObjectiveCompleteFlag=0;
							int game2ObjectiveCompleteFlag=0;
							int game3ObjectiveCompleteFlag=0;
							int game4ObjectiveCompleteFlag=0;
							int correctGuesses=0;
							int game2TotalWordsTypedCounter=0;
							int beginnerCorrectWordCounter=0;
							int mediumCorrectWordCounter=0;
							int hardCorrectWordCounter=0;
							int rolledDiceCounter=0;
							int totalObjectivesCompletedCounter=0;
					

							if(choice==99)			/* indicates the user wants to leave the room */
							{
								puts("Thank You Come Again");
							}

							if(choice==2)
	 						{
								printf("You look around and find that this is a game room... But Wait\nPress a key to find out what happened");
								getchar();
								getchar();
								printf("The lights have gone out. You see a torch across the end of the room but know there are two mines somewhere. So you have to watch your step\nPress a key to try to get the torch");
								getchar();
		
								do		/* do while loop to generate mines and asks and moves the user through the tiles */
								{
									currentTile=1;		/* if the user has stepped on a mine, the currentTile variable is set to 1 */
									printf("Okay this is the layout of the room.\n \t%d\t%d\t%d\n \t%d\t%d\t%d\n \t%d\t%d\t%d\n \t%d\t%d\t%d\n\n", 0,1,2,3,4,5,6,7,8,9,10,11);
		 						
									printf("You are at tile number 1. You will have to navigate to tile number 10 while watching out for the two mines in the room. If you hit the mines, you will return back to tile 1 and have to try again. You cannot skip tiles such as going from 0 to 2 or 1 to 7 or move diagonally such as from 2 to 4.\n\n");

									while(mine1==mine2 || mine1==1 || mine2==1 || mine1==10 || mine2==10 || newRandomMines==1)	/* generates the tile number for mine1 and mine2 */
									{
										mine1=room12RandomNumber(1,11); /** */
										mine2=room12RandomNumber(1,11); /** */
		
										newRandomMines=0;
									}	

									printf("Enter a valid tile number to move to that tile: ");	

									do		/* checks if the tile that the user chose to move to is valid or not */
									{

										scanf("%d", &tileChoice);

										if(tileChoice-currentTile==3 || tileChoice-currentTile==-3 || tileChoice-currentTile==1 || tileChoice-currentTile==-1)
										{
											currentTile=tileChoice;

											if(currentTile!=mine1 && currentTile!=mine2)
											{
												printf((currentTile==10)?"You have made it safely to tile 10 and got the torch.\n\n":"You moved to tile %d \nEnter Next Tile: ", currentTile);
											}
										}

										else
										{
											if(tileChoice==currentTile)
											{
												printf("You are already at tile %d. Pick another tile.\nEnter another tile: ", currentTile);
											}

											else
											{
												if(currentTile!=mine1 || currentTile!=mine2)
												{
												printf("This is not a valid move. You are still at tile %d. Try again.\nEnter another Tile: ", currentTile);
												}
											}
										}
									}while(currentTile!=10 && currentTile!=mine1 && currentTile!=mine2);
		
									if(currentTile==mine1 || currentTile==mine2)		/* checks if the user picked a tile with a mine */
									{
										printf("Oh no... You hit a mine. You have to start all over.\n");
										newRandomMines=1;
										mineFieldAttempt++;
										printf("Mine 1 was at tile %d\nMine 2 was at tile %d\nPress a key to start over.\n", mine1, mine2);
										getchar();
										getchar();
									}

								}while(currentTile==mine1 || currentTile==mine2);

								if(mineFieldAttempt==1)		/* displays the amount of attempts the user took to complete the mine field */
								{
									printf("That took only %d attempt. Congratulations\n\nNow ", mineFieldAttempt);
								}

								else
								{
									printf("That took %d attempts. Now\n\n", mineFieldAttempt);
								}
	
	 							while(input!=5)
	 							{
	 								puts("Let's play some games.\nPlay each game and meet its objectives to truly WIN and be in the room 12 hall of fame**.\n");

									if(totalObjectivesCompletedCounter==4)
									{

									printf("Congratulations.\n\n You Have Completed All Objectives Successfully. \n\n YOU HAVE WON.\n\n The  name %s is now forever engraved in the room12 Hall of Fame.\n\n Congratulations %s\n", name, name);

									FILE *wptr;
									wptr=fopen("HALLOFFAME.TXT","w");

									if((wptr=fopen("HALLOFFAME.TEXT","w"))==NULL)
									{
										printf("%s does not exist\n", "HALLOFFAME.TXT");
									}

									else
									{
										fprintf(wptr,"%10s\n", "HALL OF FAME");
										fprintf(wptr,"%s\n", name);
									}
									fclose(wptr);

									choice=99;
									break;
									}

									puts("Choose a game");
									printf("Games:\n1. Guess the number\n2. Word Modification\n3. Typing Challenge\n4. Roll a dice\n5. Leave Room 12\n");
									input = -8;
									scanf("%d",&input);

									if(input==1)		/* generates a random number between 0 and 9 inclusive that the user has to guess */
									{
										puts("Welcome to Guess the Number Game.\n\n Objective: Guess 10 numbers right in a row without receiving an F grade.\n");
										int a=0;
										int b=room12RandomNumber(0,9);	/** */
										int totalGuesses=0;
										int fGradeFlag=0;

										if(correctGuesses>=1 && correctGuesses<=10 && game1ObjectiveCompleteFlag==0)
										{
											if(correctGuesses==1)
											{
												printf("Objective Not Complete.\nYou have guessed %d number correctly.\n\n", correctGuesses);
											}
										
											else if(correctGuesses>1)
											{
												printf("Objective Not Complete.\nYou have guessed %d numbers correctly in a row.\n\n", correctGuesses);
											}
										}

										if(game1ObjectiveCompleteFlag==1)
										{
										printf("You have completed the objective of this game already.\n\n");
										}
										
										while(a!=b)
										{
											printf("Write a number between 0 and 9 inclusive\n");
											scanf("%d",&a);

											while(a<=0 && a>=11)
											{
												printf("Number is out of bounds\n");
												printf("Write a number between 0 and 9 inclusive\n");
												scanf("%d",&a);
											}

											if(a<b)
											{
												printf("Too low \n");
												totalGuesses++;
											}

											if(a>b)
											{
												printf("Too high \n");
												totalGuesses++;
											}

											if(a==b)
											{
												printf("Correct guess\n");
												totalGuesses++;	
											}	
										}

										switch(totalGuesses)		/* checks how many tries it took the user to guess the correct number and gives a grade */
										{
											case 0:
											case 1:
												printf("You got it in 1 guess\n");
												printf("Your grade is A.\n\n");
												correctGuesses++;
												break;
											case 2:
												printf("You got the correct number in %d guesses.\n", totalGuesses);
												printf("Your grade is A.\n\n");
												correctGuesses++;
												break;
											case 3:
											case 4:
												printf("You got the correct number in %d guesses.\n", totalGuesses);
												printf("Your grade is B.\n\n");
												correctGuesses++;
												break;
											case 5:
											case 6:
												printf("You got the correct number in %d guesses.\n", totalGuesses);
												printf("Your grade is C.\n\n");
												correctGuesses++;
												break;
											case 7:
											case 8:
												printf("You got the correct number in %d guesses.\n", totalGuesses);
												printf("Your grade is D.\n\n");
												correctGuesses++;
												break;
											default:
												printf("You got the correct number in %d guesses.\n", totalGuesses);
												printf("Your grade is F.\n\n");
												fGradeFlag=1;
												break;
										}

										if(game1ObjectiveCompleteFlag==0)
										{
											if(fGradeFlag==1 && correctGuesses<=10 & game1ObjectiveCompleteFlag!=1)
											{
												puts("Objective not complete");
												printf("You got an F and have to start all over and guess the next 10 numbers correct to complete the objective.\n Press a key to try again");
												correctGuesses=0;
												getchar();
												getchar();
											}
										
											else if(correctGuesses==10 && fGradeFlag==0)
											{
												game1ObjectiveCompleteFlag=1;
												totalObjectivesCompletedCounter++;
												puts("Congratulations you have completed the objective for this game.");
											}
										}
									}

									else if(input==2)	/* prints whatever word the user types backwards */
									{
										puts("Welcome to the word Modification Game.\n\n Objective: Enter 20 words in total to display backwards.\n");
										int i=0;
										int arrayCounter=0;
										int line=0;
										char backwards[30]=" ";
										
										if(game2ObjectiveCompleteFlag==0)
										{
											if(game2TotalWordsTypedCounter==1)
											{
												printf("Objective Not Complete.\nYou have entered %d word so far.\n\n", game2TotalWordsTypedCounter);
											}
										
											if(game2TotalWordsTypedCounter>1)
											{
												printf("Objective Not Complete.\nYou have entered %d words so far.\n\n", game2TotalWordsTypedCounter);
											}
										}

										else
										{
											printf("You have completed the objective of this game already.\n\n");
										}

										printf("Write a word to see it printed backwards\n");
				
										scanf("%29s",backwards);
				
										for(i=29; i>=0; i--)	/* goes through the char array from the end to the beginning and prints each letter */
										{
											printf("%c", backwards[i]);
										}
										
										puts("");
										puts("");
										
										if(game2ObjectiveCompleteFlag==0)
										{
											game2TotalWordsTypedCounter++;										
	
											if(game2TotalWordsTypedCounter==20)
											{
												game2ObjectiveCompleteFlag=1;
												totalObjectivesCompletedCounter++;
												puts("Congratulations you have completed the objective for this game.");
											}
										}
									}

									else if(input==3)		/* displays a random word of different size depending on the difficulty level selected by the user */
									{
										puts("Welcome to Typing Challenge \n\n Objective: 1. In beginner level, type 20 words in a row correctly and on time.\n            2. In Medium Level, type 18 words in a row correctly and on time.\n            3. In Hard Level, type 10 words in a row correctly and on time.\n\n");
										int difficultyChoice=0;		/* stores the difficulty level chosen by the user */
										int randomLevel=0;

										time_t start;
										time_t end;
										double elapsed=0.00;
										double maximumTime=0.00;

										char letters[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";	/* char array with the complete alphabet */
										char beginnerWord[]="abcdefgh";			/* small size word for beginner difficulty */
										char mediumWord[]="abcdefghijklmnop";		/* medium size word for medium difficulty */
										char hardWord[]="abcdefghijklmnopqrstuvwxyz";	/* large size word for hard difficulty */
										char userInput[30];				/* stores the word the user types to check if it matches the original word */
										int totalWordsTypedCounter=0;			/* stores the amount of words typed correctly */
										
										if(game3ObjectiveCompleteFlag==0)
										{
										printf("Objective Not Complete.\n\n Current Status:\n 1. Beginner: %d words in a row correct.\n 2. Medium: %d words in a row correct.\n 3. Hard: %d words in a row correct.\n\n", beginnerCorrectWordCounter, mediumCorrectWordCounter, hardCorrectWordCounter);
										}

										else
										{
										printf("You have completed the objective of this game already.\n\n");
										}

										printf("In this game you have 10, 15, or 20 seconds, depending on what diffculty is chosen,  to type the word. If you type it in time you, will get another word and increase your score. If you do not type it in time, you will lose the game. \n \n Choose a difficulty level: \n 1. Beginner 2. Medium 3. Hard 4. Random Difficulty \n\n ");
				
										scanf("%d", &difficultyChoice);

										while(difficultyChoice<=0 || difficultyChoice >4)	/* checks if the user typed a number other than 1,2,3, or 4 */
										{
											puts("Choose 1,2,3, or 4");
											puts("");
											puts("Choose a difficulty level: \n 1. Beginner 2. Medium 3. Hard 4. Random Level Choice\n");
											scanf("%d", &difficultyChoice);
										}

				
										if(difficultyChoice==4)		/* generates a random number between 1 and 3 */
										{
											randomLevel=room12RandomNumber(1,3);	/** */
											difficultyChoice=randomLevel;
										}

										if(difficultyChoice==1)
										{
											maximumTime=10;
												
											if(randomLevel==0)
											{
				        							printf("You have chosen beginner difficulty\n");
											}
											else
											{
												printf("Your random difficulty is beginner.\n");
											}
										}

										if(difficultyChoice==2)
										{
											maximumTime=15;

				         						if(randomLevel==0)
											{
				        							printf("You have chosen medium difficulty\n");
											}
											else
											{
												printf("Your random difficulty is medium.\n");
											}
										}

										if(difficultyChoice==3)
										{
											maximumTime=20;

				         						if(randomLevel==0)
											{
				        							printf("You have chosen hard difficulty\n");
											}
											else
											{
												printf("Your random difficulty is hard.\n");
											}
										}
				
										incorrectFlag=0;	/* indicates no words typed incorrectly */

										while((elapsed<maximumTime && incorrectFlag==0) && (beginnerCorrectWordCounter!=20 && mediumCorrectWordCounter!=18 && hardCorrectWordCounter!=10))		/* checks if the user typed the word in time and it was correct */
										{
				
											if(difficultyChoice==1)		/* generates a random small size word for beginner difficulty and keeps track of how long it took for the user to type it */
											{
												for(i=0; beginnerWord[i]!='\0'; i++)		/* generates a small size word from random letters in the alphabet */
												{
													beginnerWord[i]=letters[rand()% (sizeof(letters)-1)];
												}

												if(totalWordsTypedCounter==0)
												{
													printf("Here is the word. Type it in 10 seconds: \n%s\n", beginnerWord); 
												}

												else
												{
												printf("Here is the next word. Type it in 10 seconds: \n%s\n", beginnerWord);
												}	
	
												time(&start);
												scanf("%s", userInput);
												time(&end);
												elapsed=difftime(end,start);				

												printf("It took %f seconds to type your answer \n", elapsed);
				
												if(elapsed<maximumTime && (strcmp(userInput, beginnerWord)==0))		/* checks if the word the user typed matches the random word given */
												{
													printf("You got it right in time\n");
													totalWordsTypedCounter++;
													beginnerCorrectWordCounter++;
												}

												else
												{
													if(elapsed<maximumTime && (strcmp(userInput, beginnerWord)!=0))
													{
														printf("You typed the word incorrectly\n");
														incorrectFlag++;
														beginnerCorrectWordCounter=0;
													}

													else if(elapsed>maximumTime && (strcmp(userInput, beginnerWord)==0))
													{
														printf("You typed the word correctly but ran out of time\n");
														incorrectFlag++;
														beginnerCorrectWordCounter=0;
													}

													else if(elapsed>maximumTime && (strcmp(userInput, beginnerWord)!=0))
													{
														printf("You typed the word incorrectly and ran out of time\n");
														incorrectFlag++;
														beginnerCorrectWordCounter=0;
													}


												}
											}

											else if(difficultyChoice==2)		/* generates a random medium size word for medium difficulty and keeps track of how long it took for the user to type it */
											{
												for(i=0; mediumWord[i]!='\0'; i++)		/* generates a medium size word from random letters in the alphabet */
												{
													mediumWord[i]=letters[rand()% (sizeof(letters)-1)];
												}

												if(totalWordsTypedCounter==0)
												{
													printf("Here is the word. Type it in 15 seconds: \n%s\n", mediumWord); 
												}

												else
												{
													printf("Here is the next word. Type it in 15 seconds: \n%s\n", mediumWord);
												}
					
												time(&start);
												scanf("%s", userInput);
												time(&end);
												elapsed=difftime(end,start);				

												printf("It took %f seconds to type your answer \n", elapsed);

												if(elapsed<maximumTime && (strcmp(userInput, mediumWord)==0))		/* checks if the word the user typed matches the random word given */
												{
													printf("You got it right in time.\n");
													totalWordsTypedCounter++;
													mediumCorrectWordCounter++;
												}

												else
												{
													if(elapsed<maximumTime && (strcmp(userInput, mediumWord)!=0))
													{
														printf("You typed the word incorrectly.\n");
														incorrectFlag++;
														mediumCorrectWordCounter=0;
													}

													else if(elapsed>maximumTime && (strcmp(userInput, mediumWord)==0))
													{
														printf("You typed the word correctly but ran out of time.\n");
														incorrectFlag++;
														mediumCorrectWordCounter=0;
													}

													else if(elapsed>maximumTime && (strcmp(userInput, mediumWord)!=0))
													{
														printf("You typed the word incorrectly and ran out of time.\n");
														incorrectFlag++;
														mediumCorrectWordCounter=0;
													}
												}
											}

											else if(difficultyChoice==3)			/* generates a random large size word for hard difficulty and keeps track of how long it took for the user to type it */
											{
												for(i=0; hardWord[i]!='\0'; i++)		/* generates a large size word from random letters in the alphabet */
												{
													hardWord[i]=letters[rand()% (sizeof(letters)-1)];
												}

												if(totalWordsTypedCounter==0)
												{
													printf("Here is the word. Type it in 20 seconds: \n%s\n", hardWord); 
												}

												else
												{
													printf("Here is the next word. Type it in 20 seconds: \n%s\n", hardWord);
												}

												time(&start);
												scanf("%s", userInput);
												time(&end);
												elapsed=difftime(end,start);				

												printf("It took %f seconds to type your answer \n", elapsed);

												if(elapsed<maximumTime && (strcmp(userInput, hardWord)==0))		/* checks if the word the user typed matches the random word given */
												{
													printf("You got it right in time.\n");
													totalWordsTypedCounter++;
													hardCorrectWordCounter++;
												}

												else
												{
													if(elapsed<maximumTime && (strcmp(userInput, hardWord)!=0))
													{
														printf("You typed the word incorrectly.\n");
														incorrectFlag++;
														hardCorrectWordCounter=0;
													}

													else if(elapsed>maximumTime && (strcmp(userInput, hardWord)==0))
													{
														printf("You typed the word correctly but ran out of time.\n");
														incorrectFlag++;
														hardCorrectWordCounter=0;
													}

													else if(elapsed>maximumTime && (strcmp(userInput, hardWord)!=0))
													{
														printf("You typed the word incorrectly and ran out of time.\n");
														incorrectFlag++;
														hardCorrectWordCounter=0;
													}
												}
											}
										}

										if(game3ObjectiveCompleteFlag==0)
										{
											if(beginnerCorrectWordCounter==20 && mediumCorrectWordCounter==18 && hardCorrectWordCounter==10)
											{
												game3ObjectiveCompleteFlag=1;
												totalObjectivesCompletedCounter++;
												puts("Congratulations you have completed the objective for this game.\n\n");
											}
										}


										printf("Total Words Typed correctly: %d \n\n", totalWordsTypedCounter);				
				
				
									}

									else if(input==4)
									{
										puts("Welcome to Roll the Dice Game. \n\n Objective: Roll the dice 8 times.\n\n");
										int firstPointer=0;
										int secondPointer=0;
										int thirdPointer=0;
										int fourthPointer=0;
										int fifthPointer=0;
										int sixthsPointer=0;
										int sevensPointer=0;
										int eightsPointer=0;
										int ninesPointer=0;
										int tensPointer=0;
										int roll=0;	/* rolls variable to store the number of rolls the user enters */
										int *ones=&firstPointer;	/* ones pointer variable that will be used as a counter to store the number of ones that will be rolled */
										int *twos=&secondPointer;	/* twos pointer variable that will be used as a counter to store the number of twos that will be rolled */
										int *threes=&thirdPointer;	/* threes pointer variable that will be used as a counter to store the number of threes that will be rolled */
										int *fours=&fourthPointer;	/* fours pointer variable that will be used as a counter to store the number of fours that will be rolled */
										int *fives=&fifthPointer;	/* fives pointer variable that will be used as a counter to store the number of fives that will be rolled */
										int *sixes=&sixthsPointer;	/* sixes pointer variable that will be used as a counter to store the number of sixes that will be rolled */
										int *sevens=&sevensPointer;	/* sevens pointer variable that will be used as a counter to store the number of sevens that will be rolled */
										int *eights=&eightsPointer;	/* eights pointer variable that will be used as a counter to store the number of eights that will be rolled */
										int *nines=&ninesPointer;	/* nines pointer variable that will be used as a counter to store the number of nines that will be rolled */
										int *tens=&tensPointer;	/* tens pointer variable that will be used as a counter to store the number of tens that will be rolled */
										int userValue=0;

										int i=0;
										int rolledValue=0;
										srand(time(NULL));		/* srand function allows the rolls to be as random as possible */

										if(game4ObjectiveCompleteFlag==0)
										{
											if(rolledDiceCounter==1)
											{
												printf("You have rolled the dice %d time.\n\n", rolledDiceCounter);
											}

											if(rolledDiceCounter>1)
											{
												printf("You have rolled the dice %d times.\n\n", rolledDiceCounter);
											}
										}
									
										else
										{
											printf("You have completed the objective of this game already.\n\n");
										} 

										printf("How many time would you like to roll the 10 sided die? ");
										scanf("%d", &userValue);
				
										roll=userValue;

										for(i=0; i<roll; i++)	/* loop to simulate roll of a dice */
										{
											rolledValue=1+(rand() %10);	/* simulate roll of a dice **from 1 and 10 inclusive */
				
											switch(rolledValue)		/* switch function to check the rolledValue variable value for different cases */
											{
												case 1:
													*ones=*ones+1;		/* if the rolledValue variable value is one, the ones variable value is incremented */
													break;

												case 2:
													*twos=*twos+1;		/* if the rolledValue variable value is two, the twos variable value is incremented */
													break;

												case 3:
													*threes=*threes+1;	/* if the rolledValue variable value is three, the threes variable value is incremented */
													break;

												case 4:
													*fours=*fours+1;	/* if the rolledValue variable value is four, the fours variable value is incremented */
													break;


												case 5:
													*fives=*fives+1;	/* if the rolledValue variable value is five, the fives variable value is incremented */
													break;

												case 6:
													*sixes=*sixes+1;	/* if the rolledValue variable value is six, the sixes variable value is incremented */
													break;

												case 7:
													*sevens=*sevens+1;	/* if the rolledValue variable value is seven, the sevens variable value is incremented */
													break;

												case 8:
													*eights=*eights+1;	/* if the rolledValue variable value is eight, the eights variable value is incrmented */
													break;

												case 9:
													*nines=*nines+1;	/* if the rolledValue variable value is nine, the nines variable value is incremented */
													break;

												case 10:
													*tens=*tens+1;		/* if the rolledValue variable value is ten, the tens variable value is incremented */
													break;


												default:		/* default case for any other values */
													break;
											}

										}

										puts("You had: ");
				
										printf("%d ones\n", *ones);
										printf("%d twos\n", *twos);
										printf("%d threes\n", *threes);
										printf("%d fours\n", *fours);
										printf("%d fives\n", *fives);
										printf("%d sixes\n", *sixes);
										printf("%d sevens\n", *sevens);
										printf("%d eights\n", *eights);
										printf("%d nines\n", *nines);
										printf("%d tens\n\n", *tens);

										
										if(game4ObjectiveCompleteFlag==0)
										{
											rolledDiceCounter++;										
								
											if(rolledDiceCounter==8)
											{
											game4ObjectiveCompleteFlag=1;
											totalObjectivesCompletedCounter++;
											puts("Congratulations you have completed the objective for this game.");
											}
										}
									}		

									else if(input==5)
									{
										puts("Thank You Come Again");
										choice=99;
									}
		 						}
							}
					}
					break;
			}
			case 13:
			{
					while(choice != 99)
					{
						char string[1000];
						FILE *f;
						int i;
						int choices,jar1=7,jar2=0,jar3=0;
						int battlecommands;
						int bossBattle,attackDamage,bossAttackdamage ,BossDamlower=100 ,BossDamnupper=400; //boss range for damage is higher than the kids defend command will have one save after that only damage reduction will be 25%
						int demogorgonHP=9999,partyHP=1000;
						srand(time(NULL));
						puts("welcome to room13 there please chose a direction to move  1 for west 2 for east 3 for south 4 for north");
						scanf("%d",&choices);
						switch(choices)
						{
    							case 1:

								{	
								puts("You encounter a demogorgon, the kids from stranger things appear to help you fight including eleven");
								puts("Battle begins \nmenu press the number to use the command example 1 to fight./n \nfight \ndefend \nitem \nrun");
									scanf("%d",&battlecommands);
									while(battlecommands!=5&&demogorgonHP>0&&partyHP>0)
									{
										if(battlecommands==1)
										{
											puts("Mike and the other kids ready various weapons none look too dangerous while eleven charges up her psychic powers who do you choice to attack? 1 for the kids 2 for eleven");
											scanf("%d",&bossBattle);
												if(bossBattle==1)
												{
													puts("mike and the other kids attack");
													attackDamage= 1+(rand() %25);
													puts("Demogorgon roars and counter attacks");
													bossAttackdamage=1+(rand()+BossDamlower) %(BossDamnupper+1);
														demogorgonHP-=attackDamage;
													partyHP-=bossAttackdamage;
														printf("boss hp =%d   , party hp =%d \n",demogorgonHP,partyHP);
														puts("maybe we should let eleven attack ");
												}
												if(bossBattle==2)
												{
														puts("Eleven attacks!");
															attackDamage= 1+(rand() +1000) %(4000);
															if(attackDamage>3000){
														puts("demogorgon is pinned against the wall and can't attack!");
													demogorgonHP-=attackDamage;
														printf("boss hp =%d   , party hp =%d \n",demogorgonHP,partyHP);
													}
												else
												{
													puts("demogorgon is stunned but swipes at eleven");
													bossAttackdamage=1+(rand()+BossDamlower) %(BossDamnupper+1);
													partyHP-=attackDamage;
													partyHP+=50;//attack is weaker vs eleven so they don't lose as much
														demogorgonHP-=attackDamage;
													printf("boss hp =%d   , party hp =%d \n",demogorgonHP,partyHP);
													}
					
					
													} //if end
											puts("\nmenu press the number to use the command example 1 to fight./n \nfight \ndefend \nitem \nrun");
											scanf("%d",&battlecommands);
						
										}	
						
										if(battlecommands==2)
										{
												puts("Lucas screams how can we defend against This thing!!");
												puts("try something else!");
												puts("\nmenu press the number to use the command example 1 to fight./n \nfight \ndefend \nitem \nrun");
												scanf("%d",&battlecommands);
												
										}
											
										if(battlecommands==3)
										{
												puts("Eleven uses eggo waffles increases attack damage! note using this command again will not stack attack damage");
												puts("\nmenu press the number to use the command example 1 to fight./n \nfight \ndefend \nitem \nrun");
												scanf("%d",&battlecommands);
										}
										if(battlecommands==4)
										{
													puts("cannot escape try something else!");
													puts("\nmenu press the number to use the command example 1 to fight./n \nfight \ndefend \nitem \nrun");
												scanf("%d",&battlecommands);
										}
																	}
										if(partyHP<=50)
										{
											puts("game is over the kids have lost the upside down world has become our world");
											
										}
										else
										{
											puts("Eleven destroys the demogorgon but she is pulled into the upside down world as a result to be continued.. you however end up back in your room safe and sound with a box of eggo waffles");
										}
												break;
						}// end of choice 1 if
						case 2:
						{
							
							puts("You find a room with a large book in the center it ask for you to sign your name please type your name in to gain the rights to room13");
							f=fopen("book.txt", "w");
    							puts("Cartman from SouthPark enters the room... Cartman: its you Sir Douchebag I shall write your name in the book of truth");
    							fprintf(f," By the powers vested in Eric Cartman first of his name, Grand wizard of Kupa Keep room 13 is yours Sir Douchebag");
    							fclose(f);
							break;
						}


						case 3:
						{
								
							puts("This room has one sign that reads Loud people are rude we will make you talk in a inside voice in this room");
							puts("you figure out you need to yell to leave this room you scream (type anything in all caps no spaces)");
							scanf("%s",string);
							while(string[i])
							{
		   						string[i] = tolower(string[i]);
								i++;
		    					}
							printf("Mystic wind blows as your voice lowers and repeats what you said but in a softer tone \n");
   							printf("%s\n",string);
	   						puts("Maybe is if I speak in a normal voice it will reverse it!");
							scanf("%s",string);
								i=0;
							while(string[i])
							{
		   						string[i] = toupper(string[i]);
								i++;
		   					}
							printf("Your Voice booms and you hear a crash nearby there is now a way out!\n ");
							printf("%s\n",string);
							break;
						}
						case 4:
						{
							puts(" you find a room with three jars and a old man he puts the key to the room in one and begins to swap them, Choose the jar the key is and you can leave ");
							puts("there are three swaps it seems the key started in jar one farthest to the left type which jar you think its in 1 for the left  for the middle jar 3 for the right jar");
							swap (&jar1, &jar2);
							swap (&jar2, &jar3);
							swap(&jar3, &jar1);
							scanf("%d",&pick);
								if(pick==1)
								{
									puts("puts you found the key lets get out of here!");
									return 0;
								}
								else
								{
									puts("the old man laughs has he reveals a empty jar you hear a low growl you are eaten by a large dargon game over");
									return 0;
								}		
						}
						default:
						{
								puts("wrong button or impossible direction try again");
								break;
						}



					}	//room 13 end Bradford Mcdaniel

					break;
				}
			}
			case 14:
			{
					while(choice != 99)
					{
						char newName[256];
						char quest[256];
						char color[256];
						char capital[256];
						char airVelocity[256];
						int i = 0;

						puts("You enter room 14 and the door closes behind you. You hear a click that tells you the door is sealed from the water outside, but also locked. The first thing you notice is that it's dark. Like, really dark. Darker than I like my coffee. And that's pretty dark. Anyway, you hear a disembodied voice that seems to come from everywhere. It tells you if you want to progress you must correctly answer all its questions.");
 						puts("He asks his first question: \"WHAT... is your name?\"");
						scanf("%s", newName);
						if(strcmp(name, newName) != 0)
						{
							puts("You die");
							break;
						}
        					puts("You hear an electric hum as the lights in the room turn on and begin to brighten. They're uncomfortably bright, like looking into the sun, but at least you can see. The room is qite large - larger than it should be considering how close the other doors were. Besides the lights, the room is completely and utterly undecorated. So much so it doesn't even have a door. Including the one you came through. Strange, isn't it?");
        					puts("\"WHAT... is your quest?\"");
        					scanf("%s", quest);
        					puts("\"WHAT... is your favorite color?\"");
        					scanf("%s", color);
						scanf("%s", color);
						// I have to put this second scan or else it just skips it. Idk why.
        					puts("\"WHAT... is the capital of Assyria?\"");
        					scanf("%[^\n]s", capital);
        					for(i = 0; i < 256; i++)
        					{
                					capital[i] = tolower(capital[i]);
        					}
        					if((strcmp(capital, "assur") != 0) && (strcmp(capital, "nineveh") != 0))
        					{
        					        puts("You die");
        					        break;
        					}
        					puts("\"WHAT... is the air speed velocity of an unladen swallow?\"");
						scanf("%[^\n]s", airVelocity);
        					for(i = 0; i < 256; i++)
        					{
        					        airVelocity[i] = tolower(airVelocity[i]);
        					}
        					if(strcmp(airVelocity, "whatdoyoumean?anafricanoreuropeanswallow?") != 0)
        					{
							puts("You die");
        					        break;
						}
						puts("On the side of the room opposite from where you entered, the wall slowly ascends like a garage door to reveal a bridge. You cross the bridge, and find yourself... back in the damn water room somehow.");
						break;
					}
					break;
			}
			case 15://Sean
			{
					
					while(choice !=99)
					{
						

							printf("Hello! Welcome, gamer! You are now in room 15...");
							printf("You hear a loud growl. Suddenly you hear loud footsteps. You panick but you try to rely on your instincts");
							printf("You are shocked to your eyes to see a massive bear coming out of a cave!");
							printf("You have a piece of rock laying next to you and a long club laying further away");
							printf("What do you do? Please choose from the following options!");
							printf("Press 99 if you want to quit since video games cause violence");


					scanf("%d", &choice);

						int roll_0 =(rand() %10) +1;
						int roll1 = (rand() %10) + 1;
						int die = 0;
						char letter[256];
						FILE *inptr;
						FILE *outptr;

						if(choice ==1)
						{

							printf("You automatically rely on running out of the room. The room is locked out and there is no other exit besides the cave that the bear came out of. Since you're panick attack has gotten worse, you make poor judgments and gets beaten to death by the bear. Now you have lost your legacy!");
							FILE *outfile = fopen( "youshouldquit.txt", "a");
						}
						else if(choice ==2)
						{
							printf("You decide to make friends with the bear. The bear seems to utter some sounds. It appears to speak a human language, but you are just being delusional. It turns out that the bear does not speak English, therefore, you instantly get eaten by the bear!");
								while(!feof(inptr))
									 {
										fscanf(inptr, "%s\n", letter);
						
										letter[0] = toupper(letter[0]);
										fprintf(outptr, "%s\n", letter);
		
									 }
										FILE *outfile = fopen( "youlose.txt", "a");
									rewind(outptr);
						}
						else if(choice==3)
						{
							printf("You decide to use the stone rod that is laying on the floor. You end up getting bruised, although you emerge victorious after beating the bear to death and you feel accomplished!. Now you can move on to other rooms. Good luck on your journey!");
									for (i = 0; i < die; i++)
									{
										if(roll_0 == roll1)
										{
											printf("You won the jackpot! Nobody knows what it is however...");
										}
									}
									FILE *outfile = fopen( "yourjackpot.txt", "a");
									fclose(outfile);

								}

						else
						{
							printf("Please enter a valid option or just play a different game you rebel...");
						}
       
					}
					break;
			}
			case 16://Diana Guevara-Colocho's Room
			{
					while(choice != 99)
					{
					 	FILE *fptr;//file pointer
					 	const char *text = "You did your best.";
					 	char riddle[256];//character array
					 	int i = 0;
					 	srand(time(NULL));

					 	int guessinggame = 8;
					 	int userInput, trapAnswer, randomMoney, randomHealth, userNumber;
					 	int wallet = 0;
       					 	int userHealth = 50;
					 	int siren = 50;

					 	printf("Beginning Health: %d\n", userHealth);
					 	printf("Beginning Money: %d\n", wallet);
       					 	puts("Arriving in room 16, an empty cavern governed with sleeping bats, the noise of your footsteps jump off against the walls.");
					 	puts("Towards the end, you can see light coming through, as if it were an exit.");
    					 	puts("On your left looks to be a never ending cave.");
       					 	puts("On your right you can hear what seems to be water rushing downwards.");
       					 	puts("Pick a number between 1-3 to see which direction you fall in.");

       					 	scanf("%d", &userInput);
					 	while(userInput != 99)
					 	{
					  		switch(userInput)//beginning switch (story)
					  		{
					   			case 1:
					    			{
					      				printf("Walking towards the end of the cavern, the light becomes brighter and brighter.");
					      				puts("Upon entering, you are met with a room of variety of chests.");
					      				puts("Can you trust this mysterious treasure room? Choose between 1-3.");
								
					      				scanf("%d", &trapAnswer);

					      				if(trapAnswer == 1)
					      				{
									printf("Opening the raggedy wooden chests, you are met with a flock of bats!");
									puts("You put your arms up in an attempt to protect yourself, resulting in wounds.");
									puts("The bats quickly leave the room. -10 HP from damage.");

									userHealth = userHealth - 10;
									exit(EXIT_SUCCESS);
					      				}

					      				if(trapAnswer == 2)
					      				{
									userHealth = 0;
									puts("Upon opening the chest, you are met with an intoxicating vennoumous cloud!");
									puts("Having inhaled the fumes, your surroundings start to fade and your body become heavy.");
									puts("The room becomes dark as you meet your doom for being greeedy. Better luck next time!");
									printf("Health: %d\n", userHealth);
									exit(EXIT_SUCCESS);
					      				}

					      				if(trapAnswer == 3)
					      				{
									puts("You found a chest with gold! You rightfully put the money in your wallet.");
									randomMoney = rand() % 100 + 1;
									wallet += randomMoney;
									printf("Health: %d\n", userHealth);
									printf("Wallet: %d\n", wallet);
									exit(EXIT_SUCCESS);
					      				}
					    			}
								break;

								case 2:
								{
					 				printf("Health: %d", userHealth);
					 				puts("Walking towards the never ending cavern, you try to get a feel of your surroundings.");
					 				puts("The more you walk, the more your surroundings become darker and darker...");
					 				while(userHealth != 0)
					 				{
					  					userHealth = userHealth - 5;
					  					if(userHealth == 0)
					   				{
					     				printf("As you keep walking, your body starts to get sluggish...");
					     				puts("Too late, it dawns on you that this cavern was filled with an odorless poison before falling over allowing death embrace your lifeless body...");
					     				return 0;
					   			}
								break;
								case 3:
								{
					 				puts("Heading towards the sound of what is assumed to be water, you find a crystal clear lake!.");
					 				puts("Across from where your standing is a medium sized waterfall; yet you sense you are not alone.");
					 				puts("Moving cautiously close to the edge of the lake, you see creatures never before seen.");
					 				puts("One of the creatures peers her head out slowly creeping towards you.");
					 				puts("Shes the most beautiful being you have ever seen; and yet she has a fish tail?");
					 				puts("Before you can question her, she speaks; ");
					 				puts("Siren: What brings you to the Sirens Cove, human?");
					 				puts("As you try to explain yourself, you cant help but feel attracted to her voice...");
					 				puts("Choose between 1-3.");
					 				scanf("%d", &trapAnswer);

					 				if(trapAnswer == 1)
					 				{
					  					puts("You quickly come to your senses as you see her face inches away from yours!");
					  					puts("Quick thinking leads you to taking out your dagger and slashing at her!");
					  					puts("She screams out, scaring her comrades away!");
					  					puts("However, she immediately retaliates!");
					  					while(siren != 0)//fighting enemy loop
					  					{
					   						printf("The fight goes on! You keep slashing her to kill her! Siren Health: %d\n", siren);
					    						siren = siren - 10;
                                            						if(siren == 0)//fighting enemy loop
					    						{
					     							puts("With one final blow, she cries out before turning into sea foam.");
					     							puts("You lose HP however gain money out of it.");
					     							userHealth = userHealth - 20;
					     							randomMoney = rand() % 100 + 1;
					     							wallet = wallet + randomMoney;
					     							printf("Health: %d\n", userHealth);
					     							printf("Money: %d\n", wallet);
					     							return 0;
					    						}
					  					}
										break;
									}
							
					 				if(trapAnswer == 2)
					 				{
					  					puts("Youre eyes start to get heavy, her voice starting to sound like a dream.");
					  					puts("As you close your eyes you see her beautiful face become horrendous and pearly white teeth turn into decaying fangs!");
					  					puts("You try to scream but all you can hear is her voice; your surroudings become dark and your breathing coming to a stop.");
					  					userHealth = userHealth - 50;
					  					printf("Better luck nextime! Health: %d\n", userHealth);
					  					return 0;
					 				}

					 				if(trapAnswer == 3)
					 				{
					  					puts("You shake your head to bring yourself back to reality.");
					  					puts("You explain to her youre looking for your way out.");
					  					puts("As the conversation goes, she eyes you up and down before stopping you...");
					  					puts("Siren: what will you offer me in return if I were to help?");
					  					puts("You start to ponder at the thought.");
					  					puts("You offer either of the following:");
					  					puts("1 - Youre family heirloom, a silver dagger that is nicely polished.");
					  					puts("2 - Some of your HP seeing as how she most likely wields magic.");
					  					puts("3 - Your charm. As obnoxious as that is.");
					  					puts("4 - Answer a riddle and you win!");
					  					scanf("%d", &trapAnswer);

					  					if(trapAnswer == 1)
					  					{
					   						puts("You take out your sheithed dagger, pulling it out to show how beautiful it is.");
					   						puts("She eyes it, curiosity beaming in her eyes over such a beautiful weapon.");
					  						puts("With a gentle tone behind her voice, she asks to hold it to which you agree.");
					   						puts("Grabbing hold of it she pulls it out of its sheith, looking at the sharp edges...");
					   						puts("......");
					   						puts("....before a smirk forms across her face, the end of the dagger meeting your chest!");
					   						puts("Your eyes widen before the taste of iron comes through your mouth, looking down seeing blood start to drip and come out...");
					   						puts("Your body collapses as the room begins to feel cold and your vision fades...");
					   						userHealth = userHealth - 50;
					   						printf("...dont just hand strangers weapons. Health: %d\n", userHealth);
						
					   						fptr = fopen("ending.txt", "r");//added file creation but doesnt create file
					   						if(fptr == NULL)
					   						{
					    							fptr =  fopen("ending.txt", "w");
					    							fprintf(fptr, "%s\n", text);
					    							fclose(fptr);
					   						}
										return 0;
					  					}
									
					  					if(trapAnswer == 2)
					  					{
					   						puts("You start to barter with her, offering some of your life force in return to be magically transported back home!");
					   						puts("She does not seem convinced, but at the thought of obtaining some life force entices her!");
					   						puts("She agrees but warns how such a spell could lead to a near death experience.");
					   						puts("At this point you dont care as long as your back home in your bed with your dozens of cats. You agree.");
					   						puts("She thinks your crazy but doesnt push you further before putting her hands on your chest...");
					   						puts("...you feel yourself start to weaken, however your mind becomes filled with thought of being home.");
					   						userHealth = userHealth - 40;
					   						puts("As your body gets heavy, you feel yourself fall back onto something soft...");
					   						puts("Managing to open your eyes, you see familiar surroundings and realize your back home!!");
					   						printf("But your too tired to get up and decided to recover with whatever time is left in the day. Current Health: %d", userHealth);
					   						puts("You recover some HP. Youre back home, time for some well deserved rest.");
					   						randomHealth = rand() % 50 + 1;
					   						userHealth = userHealth + randomHealth;
					   						printf("Ending Health: %d", userHealth);
					   						return 0;
					  					}
									
			          	  					if(trapAnswer == 3)
					  					{
					   						printf("Current HP: %d\n", userHealth);
					   						puts("You try your best to whoo her with your charming looks, but in all honesty she finds you repulsive.");
					   						puts("Wanting to save you from emberassing yourself more, she splashes the lakes crystal clear water onto you.");
					   						puts("It feels refreshing to have the water on you! You could feel yourself gain HP!");
					   						randomHealth = rand() % 50 + 1;//random hp regeneration
					   						userHealth = userHealth + randomHealth;
					   						printf("Current Health: %d\n", userHealth);
					   						puts("You both look at each other before deciding to laugh it off.");
					   						puts("Out of empathy and wanting to forget this emberassing move, she tells you where to go back from to leave the cavern.");
					   						return 0;
					  					}

					  					if(trapAnswer == 4)
					  					{
					   						puts("The siren keeps a close eye on you.");
					   						puts("Seeing as how you're quite flushed she decides to tease you.");
					   						puts("Answer me this riddle and Ill send you home in an instant!");
					   						puts("You gulp at the thought since youre brain is about the size of a pigeons...");
					   						puts("...but agree to her barter either way.");
					   						puts("If you threw a White stone into the Red Sea, what would it become?");
					   						scanf("%[^\n]s", riddle);//read string array (solve riddle)
					   						for(i = 0; i < 256; i++)
					   						{
												riddle[i] = tolower(riddle[i]);//using i counter to read string or character array
					   						}
					   						if(strcmp(riddle, "wet") != 0)
					   						{
												puts("She looks at you in disappointment. Rather than spare you, she ends your life there.");
												puts("Cue sad credits.");
												return 0;
					   						}
					   						else
					   						{
												puts("She laughs as you confidently say the answer.");
												puts("You cant avoid but cringe at the dad joke you just said but to your amazement she keeps her end of the deal.");
												puts("She claps her hands before stating 'I know I promised but lets play a guessing game now!'");
												puts("A groan escapes your lips at the thought of having to keep entertaining this siren just to get home...");
												puts("'If you guess a number correctly, I promise to send you home.'");
												while(userNumber != guessinggame)
												{
						 							puts("What is the number of the ruling planet of the sea Neptune?");
						 							scanf("%d", &userNumber);
						 							if(userNumber > guessinggame)
						 							{
						   								printf("%d is greater than the number...\n", userNumber);
						 							}
						 							if(userNumber < guessinggame)
						 							{
						  								printf("%d is lesser than the number...\n", userNumber);
						 							}
						 							if(userNumber == guessinggame)
						 							{
						  								printf("%d is the number! As promised I will send you home!", userNumber);
						  								puts("Having been entertained by a poor excuse of a human, she bids you farewell before transporting you back home!");
						  								puts("Your journey was a long one, so rest easy!");
						  								puts("a.k.a this games done, so long farewell its time to say goodbye...");
						  								return 0;
						 							}
												}
					  						 }
										}
									}
								}
							}
							break;
						}
					}
				break;
			}//bracket of case room 16 DO NOT REMOVE (note for myself no one else)

			case 17: // Kevin Maatubang (Last edt 4/18/18)
			{
					while(choice != 99)
					{
						puts("\nYou open the door to room 17.");
						puts("Upon entering, the door slams behind you and you hear it lock.");
						puts("A lightbulb hanging from the ceiling begins to light up. After waiting a few moments, the lights slightly turn up and you notice something in the center of the room.");
						puts("In the center of the room, you see a small table with a number pad embedded onto it.");
				        puts("Upon inspection of the number pad, you press it  and the whole room suddenly lights up entirely, putting you in a daze.");
						puts("You recover from the daze. Upon recovering, you see a small screen display hanging in front of you connected to the number pad.");
						puts("Even worse, you notice multiple explosives, enough to blow the room (and yourself) out of existence.");
						puts("On the screen display, it shows: Enter the correct 4 number password. After 3 wrong attempts, say bye to your life.");
						puts("You look around the room and see a lot of scratch and scribbles, but you notice something barely legible.");
						puts("You decipher it and it says roomx365."); // The 4 number password is 17 * 365, which is 6205
						puts("You question the meaning of it as you hesitate to approach the number pad.");
						puts("You must now enter the 4 number password.");
						int i;	//Counter for first loop;
						FILE *inptr;
						for(i = 1; i<4; i++)
						{
							scanf("%d", &choice);
							if(choice != 6205)
							{
								printf("\nYou guessed wrong. Attempt %d failed.\n", i);
								if(i == 3)
								{	
									inptr = fopen("Room17message.txt", "w");
									fprintf(inptr, "You couldn't even beat the first part of the room. GiT GuD");
									fclose(inptr);
									puts("\nAll attempts failed, goodbye.");
									//puts("The explosion magically blows you back to where you started. Hey at least you aren't dead ... yet\n");
									choice = 99; // Needed to end program after 3 attempts
									break;
								}	
								
							}	
							else if(choice == 6205)
							{
								puts("\nThe screen displays: Congratulations, you can math, as you hear a hidden hatch from the floor open. With no where else to go, you cautiously go down the hatch.");
								// Section of room 17 to implement room random number generation.
								puts("After you walk down the hatch, you find yourself in a similar room looking room just before walking down the hatch, just less demolished");
								puts("You see a paper hanging on a wall that says Hope YOU are lucky, as you notice normal 6-sided die sitting in the middle of the room");
								puts("After grabbing the paper of the wall, you read that this a game all about luck. You must correctly guess the exact roll before rolling the die once. You have 8 attempts");
								puts("Influencing the roll or guessing wrong three times will automatically lock the hatch, trapping you forever");
								srand(time(NULL));
								int side;	// Variable for the roll of a die (1-6))
								int guess;	// Variable for input
								puts("Enter your guess between 1-6");
								for(i = 1; i < 9; i++)
								{
									scanf("%d", &guess);
									side = 1 + (rand()%6);
									printf("You guessed a %d. You rolled a %d.\n", guess, side);
								
									if(guess != side)
									{
										printf("\nYou guessed wrong. Attempt %d failed.\n", i);
										if(i == 8)
										{
											inptr = fopen("Room17message.txt", "w");
											fprintf(inptr, "Not bad, just unlucky. How unfortunate.");
											fclose(inptr);
											puts("You are unlucky and are trapped in the room forever. GAME OVER");
											choice = 99; // Needed to end game when all guesses are wrong
										}										
									}
									else if(guess == side)	
									{
										char answer[100] = {0};
										puts("You are showered with confetti that appeared out of nowhere. Lady luck has smiled upon you");
										puts("As the confetti stops falling, you see a rope fall from an open hole on the ceiling. With the stacks of confetti blocking the hatch, you climb up the rope");
										puts("As you finish ascending, you notice some old dude in a suit");
										puts("He says he can teleport you out of here if you answer these three questions correctly without making any mistake");
										puts("Wanting to get out of this hell, you accept his offer");
										puts("His first question, what is the last name of the current Commander in Chief? (The current year is 2018)?");
										scanf("%s", answer);
										if(strcmp(answer, "trump") == 0 || strcmp(answer, "Trump") == 0)
										{	
											puts("Not bad, the dude says, but you good luck answering this. What are the initials of the instructor who told the class to make this game?");
											scanf("%s", answer);
											if(strcmp(answer, "gp") == 0 || strcmp(answer, "GP") == 0)
											{
												puts("Ok, you got lucky, but you'll never be able to answer this.");
												puts("The answer to the previous question is also an acronym for a certain champion in the MOBA game League of Legends. Who is that champion?");
												scanf("%s", answer);
												if(strcmp(answer, "Gangplank") == 0 || strcmp(answer, "gangplank") == 0)
												{
													inptr = fopen("Room17message.txt", "w");
													fprintf(inptr, "You can math, you have been blessed by the rng gods, and you know the answers to some random questions you'll hear once in your life. Gj Friend.");
													fclose(inptr);
													puts("Wow. You sure know your stuff. I'll let you out.");
													puts("Turns out this old dude was a wizard and he opens up a portal. You decide to walk through it. You find yourself out of harms way.");
													puts("Congratulations on beating room 17!");
													choice = 99; 	// Needed to end program upon success
													break;		// Needed to end program upon success
												}
												else		
												{
													inptr = fopen("Room17message.txt", "w");
													fprintf(inptr, "As the maker of this room, I didn't expect you to know the answer to this question. So close, yet so far.");
													fclose(inptr);
													puts("Wrong Answer");
													choice = 99; // Ends program on wrong guess
												}
											}	
											else
											{
											inptr = fopen("Room17message.txt", "w");
											fprintf(inptr, "Shame on you for not knowing the name of the instructor of this course (CSC 251).");
											fclose(inptr);
											puts("Wrong Answer");
											choice = 99; // Ends program on wrong guess
											}
										}
										else
										{
											inptr = fopen("Room17message.txt", "w");
											fprintf(inptr, "All you need to know was a little terminology. Otherwise, there is no reason you not know this iconic person.");
											fclose(inptr);
											puts("Wrong Answer");
											choice = 99; // Ends program on wrong guess
										}
												
										break;
									}	
									else
									{
										printf("You guessed wrong. Attempt %d failed.", i);
										break;
									}			
								}	
								break;
							}
							else
							{
								printf("You guessed wrong. Attempt %d failed.", i);
							//	break;
							}			
						}	
						break; // Break statement needed here to avoid infinite loop of room 17 whether correct or wrong		
					}		
					break;
			}
			case 18://MINE: JOSEPH MORENO - ROOM 18			
			{
				while(choice != 99)
				{
						puts("you open the door and find ........");
						sleep(1);
						system("clear");
						int alive = 0;
						puts("Terra Fictitia! The battle ground of the trial of the Bat-Mite!");
						puts("Traveling through the cavern of Smaug, you come across a goblet of gold.");
						puts("Will you touch the goblet?");
						puts("0 = no; 1 = yes");
						scanf("%d", &choice);
						system("clear");
						if (choice == 1)
						{
							printf("The goblet was laced in poison. You tried your best, %s! Surely, another story awaits you.\n", name);
							alive = 1;
							break;
						} 
						else if (choice == 0)
						{
							puts("Good choice! Ah, a dragon! RUN, escape!\n");
							puts("We're journeying through the Ice Spires of Kyurem. Watch out for Snow Elves!");
							puts("Ah shoot! You found one! And he wants to beat you in a game of craps. Roll snake eyes and he just might attack!");
							srand(time(NULL));
							puts("How many times would you like to roll a dice");
							scanf("%d", &choice);
							system("clear");
							//Start of random number generation
							int die = choice;
							int roll = 0;
							int rollO = 0;
							int i;
							int snakeEyes = 0;
							for (i = 0; i < die; i++)
							{
								roll = (1 + rand() % 6);
								rollO = (1 + rand() % 6);
								printf("You rolled %d and %d.\n", roll, rollO);
								if (roll + rollO == 2)
									snakeEyes = 1;
							}
							if (snakeEyes == 1)
							{
								puts("Snake eyes! Drat! Well, looks like you just became lunch!");
								alive = 1;
							}
							else 
							{
								printf("Woo. You didn't roll it. You get to live %s\n", name);
								puts("We're passed the snow elves, shred down the mountain side and we'll shave a few seconds off!");
								puts("But it looks like you've discovered the Fire Pits of Apokylyps and its slums in the distance.");
								printf("It's very unlikely you'll get out of this alive, %s. You should send a letter back home.", name);
								puts("What do you want the letter to be called? I'll probably just email it. Carrier-parademons can be unreliable. (psst) make it a file name.");
								char letterName[256];
								scanf("%s", letterName);
								system("clear");
								//Start of file manipulation
								puts("Very well! It'll be on it's way in a nanosecond.");
								char letterDetails[] = "Hello family and friends. Your fighter died. Oops. I'm sure they've lived a long life, probably.\nThey were likely beloved by many, I'm sure, probably, and will be missed, maybe.";
								char letterDetailsTwo[] = "In the event that we managed to collect a body, we will send it back in whatever piece(s) we found it.";
								FILE *wptr;
								wptr = fopen(letterName, "w");
								fprintf(wptr, "%s\n", letterDetails);
								fprintf(wptr, "%s\n", letterDetailsTwo);
								puts("\nOn your way to the capital you've discovered a ferocius man-beast. He's charging at you, you'll have to give a series of attacks.");
								puts("Type and enter 'A' to attack and 'S' to standby when you think you've beaten him ");
								//Start of constant user input
								int loopHold = 0;
								char attack;
								int attackCount = 0;
								while(loopHold == 0)
								{
									scanf("%c", &attack);
									attack = tolower(attack);
									if (attack =='a')
									{
										attackCount++;
									}
									else if (attack == 's')
									{
										loopHold = 1;
									}
								}
								system("clear");
								if (attackCount < 5)
								{
									puts("You didn't attack enough. Unfortunately, he's still too strong.");
									alive = 1;
									break;
								}
								printf("\n That did it. The monster is slain. Now let's be on our way %s, I hear people coming from the slums.", name);
								puts("\n...\n");
								puts("From the distance, a villager shouts 'Kalibak is dead'.");
								sleep(2);
								system("clear");
								//Start of array swapping
								printf("%s, we're coming upon the entrance to the Rock of Eternity. You'll need to tell the doorman the password.", name);
								puts("\n* A very cryptic voice asks for a six letter password * ");
								char yourpass[256];
								char thepass[256] = "SHAZAM";
								scanf("%s", yourpass);
								int rightEntry = 0;
								if  (rightEntry == 0)
								{
									int i = 0;
									while (i < 255)
									{
										yourpass[i] = toupper(yourpass[i]);
										i++;
									}
									char swap;
									for (i = 0; i < 5; i++)
									{
										swap = thepass[i];
										thepass[i] = yourpass[i];
										yourpass[i] = swap;
									}

									if (strcmp(yourpass, thepass) == 0)
									{
										rightEntry = 1;
									} 
									else 
									{
										puts("Incorrect Password, stranger");
										system("clear");
										puts("Try again?");
										scanf("%s", yourpass);
									}
								}
								puts("You've figured out the password. The Rock of Eternity is opened...");
								//Ending reward
								if (alive == 0)
								{
									puts("...We did it... You did it! You passed the Bat-Mites trials. You're ready. It's time to take you to the next ste-\n");
									puts("\nOh. I'm afraid to inform that we've been cancelled. But here's a reward for your troubles! A signed T-Shirt! Be sure to take it on your next adventure.. ");
									
								}
								else if (alive == 1) 
								{
									printf("That's unfortunate, %s. Maybe your next adventure will go better.", name);
									break;
								}	
							}						
						}
						break;
						scanf("%d",&choice);
				}
				break;
			}
			case 19:
			{
					while(choice != 99)
					{
                        puts("\nWelcome to Room 19..");
                        puts("\nYou take your first steps and see a case at the end of the hall.");
                        puts("Out of the corners of the dark room leprechauns begin appearing and");
                        puts("walk towards the case holding clubs, swords, and weapons of all sorts.");
                        puts("\nEnter..\n");
                        puts("1.If you want to exit room 19");
                        puts("2.If you talk your way out of this");
                        puts("3.If you unsheathe your Great Sword and commence an attack\n");
                        
                        char usr_buff[256] = {0};
                        int choice;
                        fgets(usr_buff, 256, stdin);
                        fgets(usr_buff, 256, stdin);
                        sscanf(usr_buff, "%d", &choice);
                        
                        switch (choice)
                        {
                            case 1:
                                puts("\nYou turn around to walk out but the door has been locked.\n");
                                puts("A sign reads:\n\t\"Who's the hottest rapper in Brooklyn?");
                                puts("You have 3 tries, guess right or room self-destructs. Come again.\"");
                                puts("You only think of one rapper so you enter 2 digits.");
                                int tekashi = 69;
                                int guess;
                                int chance = 3;
                                do
                                {
                                    scanf("%d", &guess);
                                    if (guess > tekashi && choice > 0)
                                    {
                                        printf("\n%d is too high\n", guess);
                                        chance--;
                                        printf("You have %d chances remaining\n", chance);
                                    }
                                    else if (guess < tekashi && choice > 0)
                                    {
                                        printf("\n%d is too low\n", guess);
                                        chance--;
                                        printf("You have %d chances remaining\n", chance);
                                    }
                                    else if (chance == 0)
                                    {
                                        puts("\n-------ROOM SELF DESTRUCTS--------\n\tGAME OVER!!!\n\n");
                                        
                                    }
                                    else if (guess == tekashi)
                                    {
                                        printf("\n %d Deadass!! Tekashi 6-9\n", guess);
                                        printf("Door unlocks-_-_-\"Click!\"\n\n");
                                        break;
                                    }
                                } while (chance != 0);
                                break;
                            case 2:
                                puts("You say to the leprechauns how on earth could both races have disagreements at a time like this!?");
                                puts("Instead of fighting one another \"ENTER GENERIC STORY PLOT LINE HERE:_____________\"");
                                puts("It turns out the head of this gang was a gambler of sorts so you took out a pair of dice.");
                                puts("Rolling snake eyes in their culture was the only way to win. What is at stake?");
                                puts("Well you would be forced to marry the head of the gangs child and create an heir");
                                puts("So with sweat dripping down the palms of your hands you throw the pair of 3 sided dice...\n");
                                
                                srand(time(NULL));
                                int roll_one = 1 + rand() % 3;
                                int roll_two = 1 + rand() % 3;
                                printf("THE FIRST DIE STOPS ROLLING... IT'S A %d !!!\n", roll_one);
                                printf("THE SECOND DIE STOPS....ITS A %d !!!!\n\n", roll_two);
                                if (roll_one == 1 && roll_two == 1)
                                {
                                    puts("You say your goodbyes and quickly leave room 19....\"fuck this shit\"\n");
                                }
                                else
                                {
                                    puts("A wedding is planned and you are forced shotgun wedding to marry your leprauchan");
                                    puts("Half humans half leprauchans little yous ar produced and well...");
                                    puts("This is your life now you think as you fall asleep.\n");
                                }
                                break;
                            case 3:
                                puts("Before you begin your assault you remember what your Sensei Mr.Poppe always said..");
                                puts("\"One must ALWAYS using FILE PROCESSING when doing projects in CSC251\"");
                                puts("With that in mind you decide to write a farewell note to your fellow classmates");
                                puts("Theres only one way this will end and you want the world to know what happened");
                                puts("By the way you should find it in ALL_CAPS.txt");
                                
                                FILE *all_caps = fopen( "ALL_CAPS.txt", "a");
                                puts("So you begin to write your farewell letter.... !!!\n");
                                char quote[256] = {0};
                                fgets(usr_buff, 256, stdin);
                                fputs(usr_buff, all_caps);
                                fclose(all_caps);
                                
                                
                                puts("The first victim comes at you and \"SLAAAASH\", his head rolls away into the darkness");
                                puts("Who's next!? you yell. They shoot and you jump off the bullets like like a frog does lillypads");
                                puts("You spin full 360 with your blade dismembering limbs left and right, so much blood....");
                                
                                int i;
                                int b = 1;
                                for (i = 35; i >= b; i--)
                                {
                                    if (i%b == 0)
                                    {
                                        printf("%d left...\n", i);
                                    }
                                    else if(i%b != 0)
                                    {
                                        puts("SLASH!!!");
                                    }
                                    
                                    if (i == b)
                                    {
                                        puts ("ONE FINAL SWING!!!!");
                                    }
                                    
                                    b++;
                                    
                                }
                                
                                puts("\nYou look around at the blood covered marble floor and walk towards the briefcase");
                                puts("You open it and a gold auroa eminates from it, its....its...beautiful");
                                puts("The room starts to shake, you begin to lose consciousness...what is going on!?\n");
                                break;
                            default:
                                puts("Error! Input 1-3 only");
                                break;
                        }
                        break;
					}
					break;
			}
			case 20:
                        {
                            srand(time(NULL));
                            int password = 20  ;
                            int health = 100;
                            int defense = 1;
                            int money = 0;
                            int bonusMoney = 0;
                            int enemyHitMax = 2;
                            int myHitMax = 3;
                            
                            system("clear");
                            printf("The door labeled Room 20 is locked you must enter the 2 digit password: \n");
                            scanf("%d", &choice);
                            
                            if(choice == password)
                            {
                                system("clear");
                                printf("You enter the door labled Room 20\n");
                                printf("Current Status - Health: %d \t Defense: %d \t Money: %d\n\n\n\n", health,defense,money);
                            }
                            else
                            {
                                system("clear");
                                printf("You are locked out\n\n");
                                if(password > choice)
                                {
                                    printf("You guessed a lower number than the password\n\n\n");
                                }
                                else if(password < choice)
                                {
                                    printf("You guessed a greater number than the password\n\n\n");
                                }
                                break;
                            }
                            system("clear");
                            printf("You have guessed right \nThe door opens and you walk into never ending hallways full of enemys\n");
                            printf("You have encountered a sewer rat\n");
                            printf("\nYou enter the battle with your hands\n");
                            
                            puts("You have three choices:");
                            puts("1. Fight.");
                            puts("2. Run.");
                            puts("3. Insult its mother.");
                            scanf("%d",&choice);
                            int ratH = (rand()%(3-1))+1;
                            int attack;
                            switch(choice){
                                case 1:
                                    system("clear");
                                    printf("You have entered the battle:");
                                    while(ratH > 0)
                                    {
                                        printf("\n1.Punch \n2.Kick");
                                        scanf("%d",&choice);
                                        printf("Rat health: %d", ratH);
                                        if(choice == 1)
                                        {
                                            attack =(rand()%(2-1))+1;
                                            printf("\n%d\n",attack);
                                            ratH = ratH-attack;
                                            health -= 1;
                                        }
                                        else if(choice == 2)
                                        {
                                            attack = (rand()%(3-1)+1);
                                            printf("\n%d\n",attack);
                                            ratH = ratH-attack;
                                            health -= 1;
                                        }
                                    }
                                    printf("The rat is dead\n");
                                    money += 10;
                                    printf("Current Status - Health: %d \t Defense: %d \t Money: %d\n\n\n\n", health,defense,money);
                                    break;
                                    
                                case 2:
                                    system("clear");
                                    printf("You have ran away\n\n");
                                    break;
                                    
                                case 3:
                                    system("clear");
                                    printf("The rat has ran away...\n\n\n");
                                    printf("...(Ground Rumbles)...\n\n\n");
                                    printf("It turnes out the rat ran away to tell its mutant mother\n");
                                    printf("The glowing green mother rat towers over you blocking the sun\n");
                                    printf("You have entered the battle:");
                                    ratH = 99999;
                                    while(ratH > 0)
                                    {
                                        puts("\n1.Punch \n2.Kick");
                                        scanf("%d",&choice);
                                        printf("Rat health: %d", ratH);
                                        if(health<=0)
                                        {
                                            printf("\n\nYou died\n");
                                            break;
                                        }
                                        if(choice == 1)
                                        {
                                            attack =(rand()%(2-1))+1;
                                            printf("\n%d\n",attack);
                                            ratH = ratH-attack;
                                            health -= 99999;
                                        }
                                        else if(choice == 2)
                                        {
                                            attack = (rand()%(3-1)+1);
                                            printf("\n%d\n",attack);
                                            ratH = ratH-attack;
                                            health -= 99999;
                                        }
                                    }
                                    system("clear");
                                    
                                    break;
                            }
                            FILE *fp;
                            char filename[100];
                            char ch;
                            int linecount, wordcount, charcount;
                            int loop = 0;
                            while(choice != 99)
                            {
                                if(money >= 100)
                                {
                                    system("clear");
                                    printf("You have earned enough money to exit\n\n");
                                    break;
                                }
                                if(health <= 0)
                                {
                                    system("clear");
                                    printf("You have died\n\n");
                                    break;
                                }
                                while(loop != 1)    //Allows only one file to be opened
                                {
                                    printf("If you would like to open a file for a chance to get bonus gold: \nPress 1 \nElse press 2 to continue\n");
                                    scanf("%d",&choice);
                                    
                                    switch(choice){
                                        case 1:
                                            charcount = 0;
                                            system("clear");
                                            printf("Enter a filename :");
                                            scanf("%s",filename);
                                            system("clear");
                                            
                                            fp = fopen(filename,"r");
                                            
                                            if ( fp )
                                            {
                                                while ((ch=getc(fp)) != EOF) {
                                                    if (ch != ' ' && ch != '\n') { ++charcount; }
                                                }
                                                if(charcount >= 100)
                                                {
                                                    bonusMoney = 10;
                                                    printf("You have earned %d gold\n", bonusMoney);
                                                    money += bonusMoney;
                                                }
                                                else if(charcount >= 50 && charcount < 100)
                                                {
                                                    bonusMoney = 5;
                                                    printf("You have earned %d gold\n", bonusMoney);
                                                    money += bonusMoney;
                                                }
                                                else if(charcount >= 10 && charcount < 50)
                                                {
                                                    bonusMoney = 10;
                                                    printf("You have earned %d gold\n", bonusMoney);
                                                    money += bonusMoney;
                                                }
                                                else if(charcount < 10)
                                                {
                                                    printf("You earn nothing loser\n");
                                                }
                                                
                                            }
                                            else
                                            {
                                                printf("Failed to open the file\n");
                                            }
                                            break;
                                        case 2:
                                            system("clear");
                                            printf("You say 'No thank You'\n");
                                            break;
                                    }
                                    loop++;
                                }
                                int enemyHit = (rand()%(enemyHitMax-0));
                                int myHit = (rand()%(myHitMax-0));
                                int enemyHealth = (rand()%(enemyHitMax-1)+1);
                                int attack = (rand()%(enemyHitMax-1)+1);
                                printf("Current Status - Health: %d \t Defense: %d \t Money: %d\n\n\n\n", health,defense,money);
                                printf("You have encountered an enemy\n");
                                
                                puts("You have three choices:");
                                puts("1. Fight.");
                                puts("2. Run. (-2 gold)");
                                puts("3. Store.");
                                puts("4. Exit");
                                scanf("%d",&choice);
                                
                                switch(choice){
                                    case 1:
                                        system("clear");
                                        printf("You have entered the battle:");
                                        
                                        while(enemyHealth > 0)
                                        {
                                            printf("\n1.Punch \n2.Kick");
                                            scanf("%d",&choice);
                                            if(choice == 1)
                                            {
                                                printf("\n%d\n",myHit);
                                                enemyHealth -= myHit;
                                                health -= enemyHit;
                                            }
                                            else if(choice == 2)
                                            {
                                                printf("\n%d\n",attack);
                                                enemyHealth -= attack+2;
                                                health -= enemyHit;
                                            }
                                        }
                                        
                                        money += 5;
                                        myHitMax += 1;
                                        enemyHitMax += 1;
                                        system("clear");
                                        printf("The enemy is dead\n");
                                        break;
                                        
                                    case 2:
                                        system("clear");
                                        printf("You have ran away\n\n");
                                        money -= 2;
                                        break;
                                        
                                    case 3:
                                        system("clear");
                                        
                                        printf("Shop is under construction\n\nArmor coming soon\n\n");
                                        
                                        printf("1.Buy Potion for 5\n2.Exit\n\n");
                                        scanf("%d",&choice);
                                        
                                        switch(choice)
                                    {
                                        case 1:
                                            if(money<=0)
                                            {
                                                system("clear");
                                                printf("You have no money to shop\n\n");
                                                break;
                                            }
                                            system("clear");
                                            money -= 5;
                                            health += 10;
                                            break;
                                        case 2:
                                            system("clear");
                                            break;
                                    }
                                        break;
                                    case 4:
                                        health = 0;
                                }
                                
                                
                            }
                            break;
                        }
			case 21:
			{
					

			while(choice != 99)
			{
				int equipment = 0;
				int combatEvent = 0;
				int randomNumber = 0;
				int dead = 0;

				int HP = 10;
				int enemyHP = 10;
				int totalHP = 10;
				int totalEnemyHP = 10;

				//rifle, shotgun, grenade, 45 DMG
				int weaponDMG[4] = { 4, 6, 8, 5 };
				int attackDMG = 0;
				int weaponChoice = 0;

				//bite, claw, tail swipe DMG
				int enemyWeaponDMG[3] = { 6, 5, 6 };
				int enemyAttackDMG = 0;
				int randomEnemyChoice = 0;

				int inputedCode = 0;

				srand(time(NULL));

		puts("You see yellow footprints leading into Room #21 and you choose to open it");

		puts("As you close the door, red lights are blinking, and you hear \"ALL UNITS GET TO YOUR DESIGNATED EXITS, TAKE YOUR RIFLES OFF SAFETY, and LOCK n' LOAD!!\" ");
	       	puts("You have been transported to the Stallion 475-AXB Shock Transport above Planet Necrotix in Galaxy Traxor");
		puts("You are part of a Special Recon Unit with the specific mission to  destroy the Necrotin Queen Hive");
		
		
		puts("Choose your fate:");
		puts("Enter 1 for Shock Troop equipment");
		puts("Enter 2 for Stealth equipment");

		scanf("%d", &equipment);

		if(equipment == 1)
		{
			puts("You have a Rifle, Shotgun, 2 Hand Grenades, and a .45");

		}
		else if(equipment == 2)
		{
			puts("You have a silenced SMG, a silenced 9mm, 1 Smoke Grenade, 1 Flash Grenade, and a Knife");
		}
	
		switch(equipment)
		{

			case 1: // Shock troop
				
				puts("Get ready, your landing is emminent...");
				sleep(3);		
				puts("As the Space Craft lands, you are the first to put boots on ground and rush to the closest Necrotin");
				puts("You engage in combat with the Necrotin");

				puts("Choose a number between 1 - 3 which will decide whether you attack first, the Necrotin attacks first, or some random combat related incident happens");

				scanf("%d", &combatEvent);

					//int correctCode = 1775;
					//int inputedCode = 0;

				switch(combatEvent)
				{
				
					case 1:
					// random incident
						puts("The new guy shoots at the alien, unfortunately your head was in his line of sight...");
						dead = 1;
						break;

					case 2:
					
						// You attack first
						puts("Choose your weapon: 1) Rifle 2) Shotgun");
						scanf("%d", &weaponChoice);
							
						switch(weaponChoice)
						{
							case 1:
								// rifle
								while(1)
								{
									//printf("weaponDMG[0] = %d\n", weaponDMG[0]);
									enemyHP = (rand() % weaponDMG[0]) + 1;
									//printf("enemyHP: %d\n", enemyHP);
									totalEnemyHP = totalEnemyHP - enemyHP;
									printf("You injured the Necrotin for %d HP\n", enemyHP);
									printf("The Necrotin has %d HP left!\n", totalEnemyHP);
									if(totalEnemyHP < 0)
									{
										puts("You slayed the beast, now keep pushing to the Hive!");
										break;
									}
									
									randomEnemyChoice = ( rand() % 2 );
									HP = (rand() % enemyWeaponDMG[randomEnemyChoice]) + 1;
									totalHP = totalHP - HP;
									printf("The Necrotin injured you for %d HP\n", HP);
									printf("You have %d HP left!\n", totalHP);
									
									if(totalHP < 0)
									{
										puts("GG your alien food...");
										dead = 1;
										break;
									}	

							
								}
								break;
						
							case 2:
						
								// shotgun
								while(1)
								{
									enemyHP = (rand() % weaponDMG[1]) + 1;
									totalEnemyHP = totalEnemyHP - enemyHP;
									printf("You injured the Necrotin for %d HP\n", enemyHP);
									printf("The Necrotin has %d HP left!\n", totalEnemyHP);
									if(totalEnemyHP < 0 )
									{
										puts("You slayed the beast, now keep pushing to the Hive!");
										break;
									}
									randomEnemyChoice = ( rand() % 2 );
									HP = (rand() % enemyWeaponDMG[randomEnemyChoice]) + 1;
									totalHP = totalHP - HP;
									printf("The Necrotin injured you for %d HP\n", HP);
									printf("You have %d HP left!\n", totalHP);

									if(totalHP < 0)
									{
										puts("GG your alien food...");
										dead = 1;
										break;
									}

								}
								break;
						}
						break;

					case 3:
			
						// Necrotin attacks first
						while(1)
						{
							randomEnemyChoice = ( rand() % 2 );
							HP = (rand() % enemyWeaponDMG[randomEnemyChoice]) + 1;
							totalHP = totalHP - HP;
							printf("The Necrotin injured you for %d HP\n", HP);
							printf("You have %d HP left!\n", totalHP);
							if(totalHP < 0)
							{
								puts("GG your alien food...");
								dead = 1;
								break;
							}

							enemyHP = (rand() % weaponDMG[0]) + 1i; // surprise attack! use rifle
						        totalEnemyHP = totalEnemyHP - enemyHP;
							printf("You injured the Necrotin for %d HP\n", enemyHP);
							printf("The Necrotin has %d HP left!\n", totalEnemyHP);
							if(totalEnemyHP < 0)
							{
								puts("You slayed the beast, now keep pushing towards the Hive!");
								break;
							}	
						}
						break;
				}
				break;

			case 2: // sneaky sneaky mission

				puts("Get ready, your landing is emminent...");
				sleep(3);

				puts("With your badass Predator like cloaking suit you are able to rush past hordes of Necrotin and plant C5 explosive charges inside one of there underground tunnels");
				puts("As you start to enter the detonation code, some atmospheric distubance disrupts your cloacking shield and your stealth suit goes offline...");
				puts("You are surrounded on all sides and have no chance of escape");
				puts("However, you still have time to find out what year the Marine Corps was founded and input those 4 last digits to initiate the C5's...");

				scanf("%d", &inputedCode);
				if(inputedCode == CORRECTCODE)
				{
					puts("You blew up a major enemy reinforcement tunnel, sacrificed yourself and prevented many friendly casualties... You're a hero.");
				}
				else
				{
					puts("You failed, and many friendlies died. But I don't blame you... I blame your senior drill instructor.");
				}
				dead = 1;

				break;

		} // end of switch	
		

		// GAME CONTINUES  AFTER INITIAL ACTION EVENT
		if(dead == 1)
		{
			puts("GAME OVER");
		}
		else
		{
			puts("As you continue to rush towards the hive, you get completely surrounded and you and your team shoot it out till the very..");
		}
		break;
		
	} // end of while
	break;	
	} // end of case
			case 22:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 23:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 24:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 25:
			{
					while(choice != 99)
					{
							puts("You open the door and close it behind you.");
							puts("After you overcome the panic from almost drowning, you look around and You find yourself in a cave, the air is damp and you smell mold.");
									printf ("You got lucky. You may press more buttons! Sounds like fun...");
							puts("You notice a skeleton at your feet with it's right hand clenched around something. The cave ahead leads to a tunnel and you see a door to your right.");
							puts("At this point you have 3 choices:");
							puts("1. Examine the skeleton.");
							puts("2. Proceed further ahead in the cave.");
							puts("3. Enter the door to your right.");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You reach down and pry open the skeleton's hand, a finger breaks loose and you place it in your pocket. Once you pry the opject free you look at it closely in the light and see it is a live grenade and the pin springs free. You drop the grenade and dash through the cave. You can hear the grenade explode, collapsing the tunnel behind you.");
								puts("To be continued...");
								break;
							}
							else if(choice == 2)
							{
								puts("You find yourself further ahead in the cave.");

							}
					}
			}
		}
	}
}
	}
	return 0;
}
int exercise(void)
{
	int i;
	int a=0;
	int b=0;
	int c=0;
	int total=0;

	printf("Please enter number of times for interval 1: ");
	scanf("%d",&a);
	printf("Please enter number of times for interval 2: "); 
	scanf("%d",&b);	
	printf("Please enter number of times for interval 3: ");
	scanf("%d",&c);
	i=a+b+c;
	printf("The total number of times Cannon ran is %d\n",i);
	puts("However Cannon is stil crying!");	
	return 0;
}
void convertToUpper(char *sPtr)
{
	while (*sPtr != '\0')
	{
		if(islower(*sPtr))
		{
			*sPtr=toupper(*sPtr);
		}
	++sPtr;
	}

}



void writte(void)
{


	int i =0;
	
	int bite =0;
	FILE *wPtr;
	if ( ( wPtr = fopen( "pproject.txt", "w" ) ) == NULL ) 
	{
		printf( "File could not be opened\n" );
	 }
	else 	
	{
		puts("\nCannon has a puppy biting problem.");
		puts("Record how many times he bites your hand.");
		printf( "Enter the number\n" );	
		scanf( "%d", &bite);
		fprintf(wPtr,"%d\n",bite);	
	
	}
	printf("Cannon bit me %d times.",bite);
	puts("However he is still crying!");
	fclose(wPtr);

}


void switcch(void)
{
	char i;
	int n=0;
	for (n=0;n<1;n++)
	{
		puts("Enter 'w' for wet food or 'd' for dry food.");
		scanf(" %c",&i);
			switch(i)
			{
			case 'w':
				puts("Cannon doesnt eat wet food much so he doesnt eat much.");
				break;
			case 'd':
				puts("Cannon likes dry food but is still upset.");
				break;
			}
	}
	puts("Feeding the beast only fueled his rage!");

}

void readScreen(void)
{
	FILE *inScreen;
	char k;
	if((inScreen=fopen("page.txt","r"))==NULL)
	{
		printf("The Screen is Blank, strange...\n");
	}
	else
	{
		printf("Words are Displayed on the Screen they read:\n");
		k=fgetc(inScreen);
		while(k!=EOF)
		{
			if(isprint(k))
			{
				printf("%c",k);
			}	
			k=fgetc(inScreen);
		}
		printf("\nI wonder who wrote that...\n");
		fclose(inScreen);
	}
}

void trivia(int *ptr) // Function for Room 3 (Elthon Cisneros). (uses pointers)
{
	const int releaseYear = 1985;
	int rollNum;
	int userAnswer; 
	
	puts ("Answer this trivia correctly (you only get 6 chances) for a chance to win a tool to help you escape this room: 'What year was Windows 1.0 released?' \n");
	scanf ("%d", &userAnswer);
	while (releaseYear != userAnswer)
	{
		rollNum++;
		puts ("WRONG!!! Guess again!!!");
		scanf ("%d", &userAnswer);
		if ((rollNum >= 2) && (releaseYear != userAnswer))
		{
			puts ("Hint: Sometime in 1980's");
		}
		if ((rollNum >= 6) && (releaseYear != userAnswer))
		{
			puts ("YOU HAVE HIT 6 INCORRECT GUESSES!!! Your ignorance makes me sick... You are clearly not Computer Science/Computer Tech/Information Tech material (or couldn't bother Googling it with the smartphone in your pocket)... ***YOU DIE!!!***\n");
			exit(EXIT_SUCCESS);
		}
	}
	if (userAnswer == releaseYear)
	{
		puts ("You are truly a computer geek... but you GUESSED CORRECTLY! Check your computer for a file called 'room3.txt' to reveal what tool you won!!!\n");
		*ptr = 1;
	}

}//END TRIVIA FUNCTION (ROOM 3)


void menu(){ // just to show the menu not suppose to return anything
    
    puts("Press 1 then Enter: to look around for weapons you can use");
    puts("Press 2 then Enter: to play guess a number");
    puts("Press 3 then Enter: to read a story");
    puts("Press 4 then Enter: to exit room 4");
    
    
}
int guessNumber(void){
    
    int r = rand() % 10 +1; // generates random number
    int magic = 1;
    int guess=1;
    
    puts("try to guess my number between 1-10");
    scanf("%d", &guess);
    
    while (magic != guess)    // keep doing it until user is right
    {
        printf("Guess my number! ");
        
        scanf("%d", &guess);
        if (guess == r)
        {
            
            printf("correct!\n");
            puts("you won 20 dollars");
            break;
        }
        
        if (guess < r)
        {
            printf("Your guess is too low. Guess again. "); // gives user a hint
        }
        
        if (guess > r)
        {
            printf("Your guess is too high. Guess again. ");
        }
    }
    return 0;
}
void story(void){
    int g = rand() % 5 + 1;
    
    if(g==1){
        puts("We bought an old house, my boyfriend and I. He's in charge of the new construction – converting the kitchen in to the master bedroom for instance, while I'm on wallpaper removal duty. The previous owner papered EVERY wall and CEILING! Removing it is brutal, but oddly satisfying. The best feeling is getting a long peel, similar to your skin when you're peeling from a sunburn. I don't know about you but I kinda make a game of peeling, on the hunt for the longest piece before it rips.Under a corner section of paper in every room is a person’s name and a date. Curiosity got the best of me one night when I Googled one of the names and discovered the person was actually a missing person, the missing date matching the date under the wallpaper! The next day, I made a list of all the names and dates. Sure enough each name was for a missing person with dates to match. We notified the police who naturally sent out the crime scene team.I overhead one tech say yup, it's human. Human? What's human? Ma'am, where is the material you removed from the walls already? This isn't wallpaper you were removing.");
    }
    if(g==2){
        puts("I hate it when my brother Charlie has to go away.My parents constantly try to explain to me how sick he is. That I am lucky for having a brain where all the chemicals flow properly to their destinations like undammed rivers. When I complain about how bored I am without a little brother to play with, they try to make me feel bad by pointing out that his boredom likely far surpasses mine, considering his confine to a dark room in an institution.I always beg for them to give him one last chance. Of course, they did at first. Charlie has been back home several times, each shorter in duration than the last. Every time without fail, it all starts again. The neighbourhood cats with gouged out eyes showing up in his toy chest, my dad's razors found dropped on the baby slide in the park across the street, mom's vitamins replaced by bits of dishwasher tablets. My parents are hesitant now, using last chances sparingly. They say his disorder makes him charming, makes it easy for him to fake normalcy, and to trick the doctors who care for him into thinking he is ready for rehabilitation. That I will just have to put up with my boredom if it means staying safe from him.I hate it when Charlie has to go away. It makes me have to pretend to be good until he is back.");
    }
    if(g==3){
        puts("He awoke to the huge, insect like creatures looming over his bed and screamed his lungs out. They hastily left the room and he stayed up all night, shaking and wondering if it had been a dream.The next morning, there was a tap on the door. Gathering his courage, he opened it to see one of them gently place a plate filled with fried breakfast on the floor, then retreat to a safe distance. Bewildered, he accepted the gift. The creatures chittered excitedly.This happened every day for weeks. At first he was worried they were fattening him up, but after a particularly greasy breakfast left him clutching his chest from heartburn, they were replaced with fresh fruit. As well as cooking, they poured hot steamy baths for him and even tucked him in when he went to bed. It was bizarre.One night, he awoke to gunshots and screaming. He raced downstairs to find a decapitated burglar being devoured by the insects. He was sickened, but disposed of the remains as best he could. He knew they had just been protecting him.One morning the creatures wouldn't let him leave his room. He lay down, confused but trusting as they ushered him back into bed. Whatever their motives, they weren't going to hurt him.Hours later a burning pain spread throughout his body. It felt like his stomach was filled with razor wire. The insects chittered as he spasmed and moaned. It was only when he felt a terrible squirming feeling beneath his skin that he realised the insects hadn't been protecting him. They had been protecting their young.");
    }
    if(g==4){
        puts("Everyone loves the first day of school, right? New year, new classes, new friends. It's a day full of potential and hope, before all the dreary depressions of reality show up to ruin all the fun.I like the first day of school for a different reason, though. You see, I have a sort of power. When I look at people, I can...sense a sort of aura around them. A colored outline based on how long that person has to live. Most everyone I meet around my age is surrounded by a solid green hue, which means they have plenty of time left.A fair amount of them have a yellow-orangish tinge to their auras, which tends to mean a car crash or some other tragedy. Anything that takes people before their time as they say.The real fun is when the auras venture into the red end of the spectrum, though. Every now and again I'll see someone who's basically a walking stoplight. Those are the ones who get murdered or kill themselves. It's such a rush to see them and know their time is numbered.With that in mind, I always get to class very early so I can scout out my classmates' fates. The first kid who walked in was basically radiating red. I chuckled to myself. Too damn bad, bro. But as people kept walking in, they all had the same intense glow. I finally caught a glimpse of my rose-tinted reflection in the window, but I was too stunned to move. Our professor stepped in and locked the door, his aura a sickening shade of green.");
    }
    if(g==5){
        puts("It has been said that the definition of insanity is doing the same thing over and over and expecting different results. I understand the sentiment behind the saying, but it's wrong.I entered the building on a bet. I was strapped for cash and didn't buy into the old legends of the hotel to begin with, so fifty bucks was more than enough to get me do it. It was simple. Just reach the top floor, the 45th floor, shine my flashlight from a window.The hotel was old and broken, including the elevator, so that meant hiking up the stairs. So up the stairs I went. As I reached each platform, I noted the old brass plaques displaying the floor numbers. 15, 16, 17, 18. I felt a little tired as I crept higher, but so far, no ghosts, no cannibals, no demons. Piece of cake.I can't tell you how happy I was as I entered that last stretch of numbers. I joyfully counted them aloud at each platform. 40, 41, 42, 43, 44, 44. I stopped and looked back down the stairs. I must have miscounted, so I continued up. 44. One more flight. 44. And then down ten flights. 44. Fifteen flights. 44.And so it's been for as long as I can remember. So really, insanity isn't doing something repeatedly and expecting different results. It's knowing that the results will never ever change; that each door leads to the same staircase, to the same number. It’s realizing you no longer fall asleep. It's not knowing whether you've been running for days or weeks or years. It's when the sobbing slowly turns into laughter.");
    }
}
int cash(int temp){
    
    int total= total+temp;
    if(total>500){
        return 2;    // if it returns one you reached your goal
    }
    else{
        return 0;
    }
    
}


int room12RandomNumber(int lowestNumber, int HighestNumber)
{
int randomNumber=0;
randomNumber = (lowestNumber + rand() % ((HighestNumber + 1) - lowestNumber));
return randomNumber;
}
	
int rollDice(int *dice)
{
    int i, sum;
    for (i = sum = 0; i < NUM_DICE; i++)
    {
        dice[i] = rand()%6 + 1;
        sum += dice[i];
    }
    return sum;
}

void printDice(int *dice, int sum)
{
    int i;
    printf("\n\n");
    for (i = 0; i < NUM_DICE; i++)
        printf("Die %d: %d\n", i + 1, dice[i]);
    printf("---------\nTotal: %d\n\n", sum);
}

void swap (int *x, int *y )
 {


    int temp = *x; 
    *x = *y;
    *y = temp;
}
