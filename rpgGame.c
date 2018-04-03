//Contributors
//Garrett Poppe 3/19/18
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
							puts("you open the door and find ........");
							scanf("%d",&choice);
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

