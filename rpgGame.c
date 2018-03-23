//Contributors
//Garrett Poppe 3/19/18
//Diana Guevara-Colocho 3/21/2018
//Mahir Eldaw 3/21/18
//Salvador Rodriguez 3/21/2018
//Joseph Moreno
//Maik De Leon Lopez 3/21/18
//Kevin Ramirez



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>


void main(void)
{
	int x,y,z,i,h,g,k,choice=0;
	char name[256];
	int boxNum=0;

	printf("Please enter your name: "); //Input any number of array inputs
	scanf("%s",name);

	printf("Hello %s welcome to the rpgGame!\n",name);
	
	while(choice != 99)
	{
		puts("You find yourself in a dark room and you are not sure how you got here.");
        	puts("As you look around you see the room has 25 doors, each labeled with a number. You are not sure how such a small room can have 25 doors, sooo magic...");
        	puts("The room starts filling with water and you must choose a door to open or you will likely drown. you may quit anytime by selecting option 99");
        	puts("What door do you choose?");
        	scanf("%d",&choice);
		
		switch(choice)
		{
			case 1:
			{
				while(choice != 99)
				{

							puts("You open the door and find a dog");
							puts("At this point you have 3 choices: Please enter a number 1-3");
							puts("1. Pet the dog");
							puts("2. Feed the dog with the peanut butter sandwich you have in your hand");
							puts("3. Run away.");
							scanf("%d",&choice);
							if(choice == 1)
							{
								puts("You pet the dog and he seems happy.");
								puts("To be continued...");
								break;
							}
							else if(choice == 2)
							{
								puts("You try and feed the dog but the dog seems like he is not hungry");
								puts("To be continued....");
								break;
							}
							else if(choice == 3)
							{
								puts("You run away but the dog barks.");
                                                                puts("To be continued....");
								break;
							}
							else
							{
								puts("wrong choice");
							}
				}
				break;
			}
			case 2:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 3:
			{
					while(choice != 99)
					{
							//int input;
							printf ("\n");
							printf("This is Room 3.\n ");
							printf ("You walk into a strangely bright and colorful room. However, you see 4 untitled buttons on a table...\n");
							printf ("Keep in mind: There are hidden doors within this bright and colorful room. The only thing keeping these doors open is the power. Would be a mighty shame (for you) if there was a power outage!\n");
							printf ("Above the buttons a sign reads: You may choose press one button to determine your fate. To not keep you in total suspense, a small LCD display will vaguely let you know what just happened after you pressed this button:\n");
							scanf ("%d", &choice);

							switch (choice)
							{
								case 1:
									printf ("\n");
									printf("Ya done messed up! Looks like this wasn't the number one choice you thought it was... This room will start filling with water now... Hope you know how to swim!!! :D \n");
									break;
								case 2:
									printf ("\n");
									printf ("You survive. Now, get out of my room!\n");
									break;
									// you may choose another card
								case 3:
									printf ("\n");
									printf ("You got lucky. You have been granted permission to press more buttons! Sounds like fun...");
									scanf ("%d", &choice);
									break;
								case 4:
									printf ("\n");
									printf ("This button just cut power to lights in the room (as well as those hidden doors I mentioned before). Hope you like the dark and oversized felines...\n");
									break;
								default:
									break;
	
							}
					}
					break;
			}
			case 4:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 5:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 6:
			{
					while(choice != 99)
					{
							int select;
							puts("You enter the room and close the door to prevent the water from flowing in. Looking around you find a well at the center with no rope, sealed crates at the corner of the room, a locked door at the other side, a crack in the wall, and a pile of clothes next to the well. What would you like to investigate?\n1. The well\n2. The crates\n3. The door\n4. The crack\n5. The clothes");
							scanf("%d",&select);
							while(select != 5) {		
								switch(select) {
									case 1:
										puts("The well is made of stone and holds still water at the very bottom. You see a shiny object.\nWhere else would you like to investigate?");
										scanf("%d",&select);
										break;
									case 2:
										puts("The crates are shut tight and is impossible to open without a specific tool.\nWhere else would you like to investigate?");										scanf("%d",&select);
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
											
							puts("You find a small chisel and hammer within the clothes. Perhaps this person was a carpenter. You decided to take them.");
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
										puts("Despite not listing the clothes as an option, you decided to be a rebel and use the hammer and chisel on the pile of clothes anyway. You somehow tear the clothes using the hammer and chisel and found a key embedded into the clothes. You use the key on the locked door and discovered it worked! You escaped!");
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
							puts("You decided to use the rope and managed to sling the rope around the bucket somehow. You tug it towards you until you retrieved the bucket. Once retrieved, you tie the rope around the bucket's handle and lower it into the well. Steadily and nimbly, you scoop the shiny object into the bucket and pull it upwards. The object was a key! You used the key on the door and escaped! You win!");
							exit(EXIT_SUCCESS);
					}
					break;
			}
			case 7:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 8:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 9:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 10:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 11:
			{
					while(choice != 99)
					{
							puts("You open the door and find a damp room, mostly empty, three boxes lay on the floor");
							puts("You feel the urge to look through them");
							puts("How many would you like to look through?");
							scanf("%d",&choice);
							if(choice>3||choice==0)
							{
								puts("Why? just leave");
							}
							else
							{
								for(i=0;i<choice;i++)
								{
									printf("Which box would you like to look in?\n");
									scanf("%d",&boxNum);
									switch(boxNum)
									{
										case 1:
										case 2:
										case 3:
											printf("Box #%d was empty\n",boxNum);
											break;
										default:
											break;
									}
								}
								if(choice==3)
								{
									puts("You just wasted your time looking through 3 empty boxes");
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
							/* scanf("%d",&choice); */
							int input=0;
							srand(time(NULL));
							scanf("%d", &choice);

							if(choice==1)
							{
								puts("Thank You Come Again");
							}

							if(choice==2)
	 						{
	 							while(input!=5)
	 							{
	 								puts("Let's play some games");
									puts("Choose a game");
									printf("Games:\n1. Guess the number\n2. Word Modification\n3. Guess the word\n4. Roll a dice\n5. Leave Games Room\n");
								
									scanf("%d",&input);

									if(input==1)
									{
										puts("Welcome to Guess the Number Game");
										int a=0;
										int b=(rand() % 10);;
					

										while(a!=b)
										{
											printf("Write a number between 0 and 10 inclusive\n");
											scanf("%d",&a);

											while(a<=0 && a>=11)
											{
												printf("Number is out of bounds\n");
												printf("Write a number between 0 and 10 inclusive\n");
												scanf("%d",&a);
											}

											if(a<b)
											{
												printf("Too low \n");
											}

											if(a>b)
											{
												printf("Too high \n");
											}

											if(a==b)
											{
												printf("Correct guess\n");
											}

										}
				
									}

									else if(input==2)
									{
										puts("Welcome to the word Modification Game");
										printf("Write a word to see it printed backwards\n");
										int i=0;
										int arrayCounter=0;
										int line=0;
										char backwards[30]=" ";
				
										scanf("%29s",backwards);
				
										for(i=29; i>=0; i--)
										{
											printf("%c", backwards[i]);
										}
										puts("");
										puts("");
									}

									else if(input==3)
									{
										puts("Welcome to Guess the word Game");
										puts("Used to ride in parks");
				
				
									}

									else if(input==4)
									{
										puts("Welcome to Roll the Dice Game");
									}	

									else if(input==99)
									{
										puts("Thank You Come Again");
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
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 14:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 15:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 16:
			{
					while(choice != 99)
					{
						        int userInput;
      						        int trapAnswer;
       						        int userHealth = 50;
		printf("Beginning Health: %d\n", userHealth);
       		puts("Arriving in room 16, an empty cavern governed with sleeping bats, the noise of your footsteps jump off against the walls.");
						         puts("Towards the end, you can see light coming through, as if it were an exit.");
    						         puts("On your left looks to be a never ending cave.");
       							 puts("On your right you can hear what seems to be water rushing downwards.");
       							 puts("Pick a number between 1-3 to see which direction you fall in.");

       							 scanf("%d", &userInput);

							if(userInput == 1)
							{
								printf("Walking towards the end of the cavern, the light becomes brighter and brighter.");
								puts("Upon entering, you are met with a room of variety of chests.");
								puts("Can you trust this mysterious treasure room? Choose between 1-5.");
								
								scanf("%d", &trapAnswer);
								if((trapAnswer == 1) || (trapAnswer == 3))
								{
									printf("Opening the raggedy wooden chests, you are met with a flock of bats!");
									puts("You put your arms up in an attempt to protect yourself, resulting in wounds.");
									puts("The bats quickly leave the room. -10 HP from damage.");
									
									userHealth = userHealth - 10;
									printf("HP left: %d\n", userHealth);
								}
							}
							
							break;
					}
					break;
			}
			case 17:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 18://MINE: JOSEPH MORENO - ROOM 18			
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							puts("Hordes of the crag-goblins");
							puts("You need to fight the crag-goblins! Lancer Paladin, you can defeat them!");
							puts("There are many paths to fight the King Goblin!");							
							puts("Traveling through the cavern of Smaug, you come across a goblet of gold.");
							puts("Will you touch the goblet?");
							puts("0 = yes; 1 = no");
							scanf("%d", &choice);
							if (choice == 0)
							{
								puts("The goblet was laced in poison. You tried your best, Lancer!\n\n");
								break;
							} 
							else if (choice == 1)
							{
								puts("Good choice! Ah, a dragon! RUN, escape!\n");
								puts("We're journeying through the Ice Spires. Watch your step.\n");
								puts("\n...\n");
								/* These will all be used later;					
									puts("It looks like you can jump across a gap. Will you, or will you just the edge slowly?");
									puts("0 = yes; 1 = no");
									scanf("%d", &choice);
									puts("Travel through the Cavern of Smaug!");
									puts("Climb the Spires of Kyurem!");
									puts("Evade the Fire Pits of Apokylyps");
									puts("Trudge through the Holland Marsh");
									puts("\n\n");
								*/
								puts("You fell. I'm sorry, Lancer. Try again next time. Your story isnt over!\n");
								break;
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
                            puts("walk towards the case.");
                            puts("\nEnter..\n");
                            puts("1.If you want to exit room 19");
                            puts("2.If you talk your way out of this");
                            puts("3.If you unsheathe your Great Sword and commence an attack\n");
                    
                            int choice;
                            scanf("%d", &choice);
                        
                            switch (choice)
                            {
                                case 1:
                                    puts("You leave the room and miss the opportunity of a lifetime.");
                                    break;
                                case 2:
                                    puts("You ask the head leprechauns ");
                                    break;
                                case 3:
                                    puts(" ");
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
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 21:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
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
								puts("To be continued....");
								break;
							}
							else if(choice == 3)
							{
								puts("You enter the and close the door behind you.");
								printf("You hear an loud voice \" %s why do you disturb me? \" \n",name);
                                                                puts("To be continued....");
								break;
							}
							else
							{
								puts("wrong choice");
							}
					}
					break;
			}
			default:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
		}
		puts("Magically you are transported through space and time. You are back at the beginning.....");
	}
}

