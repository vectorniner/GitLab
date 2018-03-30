//Contributors
//Garrett Poppe 3/19/18
//Diana Guevara-Colocho 3/21/2018
//

#include <stdio.h>
#include <stdlib.h>


void main(void)
{
	int x,y,z,i,h,g,k,choice=0;
	char name[256];
	

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
					puts("you open the door and find ........");
					scanf("%d",&choice);
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
							puts("you open the door and find ........");
							scanf("%d",&choice);
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
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 12:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
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
						        int userInput, trapAnswer;
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
										break;
									}
									if((trapAnswer == 2) || (trapAnswer == 4))
									{
										userHealth = 0;
										puts("Upon opening the chest, you are met with an intoxicating vennoumous cloud!");
										puts("Having inhaled the fumes, your surroundings start to fade and your body become heavy.");
										puts("The room becomes dark as you meet your doom for being greeedy. Better luck next time!");
										printf("Health: %d\n", userHealth);
										break;
									}
									if(trapAnswer == 5)
									{
										puts("You found a chest with gold! You rightfully put the money in your wallet.");
										wallet = wallet + 35;
									}
									printf("Health: %d\n", userHealth);
									printf("Money: %d\n", wallet);
									break;
							}
							if(userInput == 3)
							{
								puts("Heading towards the sound of what is assumed to be water, you find a crystal clear lake!.");
								puts("Across from where your standing is a medium sized waterfall; yet you sense you are not alone.");
								puts("Moving cautiously close to the edge of the lake, you see creatures never before seen.");
								puts("One of the creatures peers her head out slowly creeping towards you.");
								puts("Shes the most beautiful being you have ever seen; and yet she has a fish tail?");
								puts("Before you can question her, she speaks; ");
								printf("Siren: What brings you to the Sirens Cove, human?");
								puts("As you try to explain yourself, you cant help but feel attracted to her voice...");
								puts("Choose between 1-3.");
								scanf("%d", &trapAnswer);
								if(trapAnswer == 1)
								{
									puts("You quickly come to your senses as you see her face inches away from yours!");
									puts("Quick thinking leads you to taking out your dagger and slashing at her!");
									puts("She screams out, scaring her comrades away!");
									puts("However, she immediately retaliates!");
									while(siren != 0)
									{
										printf("The fight goes on! You keep slashing her to kill her! Siren Health: %d\n", siren);
										siren = siren - 10;
										if(siren == 0)
										{
											puts("With one final blow, she cries out before turning into sea foam.");
											puts("You lose HP however gain money out of it.");
											userHealth = userHealth - 20;
											printf("Health: %d\n", userHealth);
											printf("Money: %d\n", wallet);
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
									break;
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
										break;
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
										puts("You recover 15 HP. Youre back home, time for some well deserved rest.");
										userHealth = userHealth + 15;
										printf("Ending Health: %d", userHealth);
										break;
									}
									if(trapAnswer == 3)
									{
										printf("Current HP: %d\n", userHealth);
										puts("You try your best to whoo her with your charming looks, but in all honesty she finds you repulsive.");
										puts("Wanting to save you from emberassing yourself more, she splashes the lakes crystal clear water onto you.");
										puts("It feels refreshing to have the water on you! You could feel yourself gain HP!");
										userHealth = userHealth + 30;
										printf("Current Health: %d\n", userHealth);
										puts("You both look at each other before deciding to laugh it off.");
										puts("Out of empathy and wanting to forget this emberassing move, she tells you where to go back from to leave the cavern.");
										break;
									}

								}
							}	
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
			case 18:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
					}
					break;
			}
			case 19:
			{
					while(choice != 99)
					{
							puts("you open the door and find ........");
							scanf("%d",&choice);
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

