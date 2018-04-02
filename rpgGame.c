//Contributors
//Garrett Poppe 3/19/18
//Dylan Dickerson 3/21/18
//Brian Baskovich 3/21/18
//Diana Guevara-Colocho 3/21/2018
//Mahir Eldaw 3/21/18
//Salvador Rodriguez 3/21/2018
//Joseph Moreno
//Maik De Leon Lopez 3/21/18
//Kevin Ramirez


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
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
							puts("you open the door and find ........");
							scanf("%d",&choice);
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
 				       puts("You open the door to find yourself back in your highschool algebra class...");
				       puts("There is one problem on the board that 92 percent of people get wrong it reads:");
				       puts("6/2(1+2)");
				       puts("What is the correct Answer?:");	  	 	   
				       scanf("%d",&choice);
				       switch(choice)
					{

				       	        default:
							puts("The answer is wrong. You are forced to repeat Algebra again for the rest of your miserable life. GAME OVER");
							choice = 99;
							break;
						
						case 9:
							puts("Congratulations, you passed Highschool Algebra! The door behind you opens...");
							break;	
					
											
						
					}
					break;
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
        					for(i = 0; i < 256; i++);
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
							puts("Terra Fictitia!");
							puts("Are you the one? The the champion destined to beat them?");
							puts("Traveling through the cavern of Smaug, you come across a goblet of gold.");
							puts("Will you touch the goblet?");
							puts("0 = no; 1 = yes");
							scanf("%d", &choice);
							if (choice == 1)
							{
								puts("The goblet was laced in poison. You tried your best, lancer! Surely, another story awaits you.\n");
								break;
							} 
							else if (choice == 0)
							{
								puts("Good choice! Ah, a dragon! RUN, escape!\n");
								puts("We're journeying through the Ice Spires of Kyurem. Watch your step.\n");
								puts("It looks like you can slide down the mountain. Would you like to, or would you like to trudge slowly?");
								puts("0 = slide; 1 = trudge");
								scanf("%d", &choice);
								if (choice == 1) 
								{
									puts("Oh no! The dragon caught up to us! It looks like slow and steady didn't win this race. Shame, maybe the next one will be the champion...\n");
									break;
								}
								else if (choice == 0)
								{
									puts("\nSnow's up, lancer! You shaved several hours with your sick shred time.");
									puts("But it looks like you've discovered the Fire Pits of Apokylyps and its slums in the distance.");
									puts("\nOn your way to the capital you've discovered a ferocius man-beast. He's charging at you, charge back or tuck and roll?");
									puts("0 = tuck; 1 = charge");
									scanf("%d", &choice);
									if (choice == 1)
									{
										puts("He charged faster than you. Kabob is not a look that suits you. Better luck next time! Your next adventure awaits.");
										break;
									} 
									else if (choice == 0)
									{
										puts("You dodged him! But he's coming back! slash and roll or head on charge?");
										puts("0 = slash; 1 = charge");
										scanf("%d", &choice);
										if (choice == 1)
										{
											puts("Head on attacks were probably not the best idea. That helmet you've got on doesn't look good in blood red.Find another world to travel");
											break;
										}
										else if (choice == 0)
										{
											puts("\nThat slash damaged his leg terribly! But beast boy over there is coming for one last head charge. Slash or charge, Lancer?");
											puts("0 = slash; 1 = charge");
											scanf("%d", &choice);
											if (choice == 1)
											{
												puts("A direct charge was not the best idea. If only we'd been able to know that from the beginning. You were a great warrior. Try again next time!");
												break;
											} 
											else if (choice == 0)
											{
												puts("\n That did it. The monster is slain. Now let's be on our way lancer, I hear people coming from the slums.");
												puts("\n...\n");
												puts("From the distance, a villager shouts 'Kalibak is dead'.");
												puts("\nYou must now trudge through the Holland Marsh. Something appears to be pulling you deeper into the water.");
												puts("\n...\nWhat's that?! That thing is coming out of the swamp!");
												puts("Will you fight it or try to befriend it?");
												puts("0 = fight; 1 = befriend");
												scanf("%d", &choice);
												if (choice == 0)
												{
													puts("As you raise your lance, you're pulled into the swamp. Another sacrifice to the thing of Holland Marsh. A shame. You were so close too...");
													break;
												} 
												else if(choice == 1) 
												{
													puts("Its.. Its friendly? He's allowing you to pass! Lets go, we're almost out of here.\n");
													puts("We did it... You did it! You passed the Bat-Mites trials. You're ready. It's time to take you to the next ste-\n\nOh. I'm afraid to inform that we've been cancelled. But here's a reward for your troubles! A signed T-Shirt! Be sure to take it on your next adventure.. ");
													break;
												}
											}
										}
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
                        
                        int choice;
                        scanf("%d", &choice);
                        
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
		}	
	}
    }

