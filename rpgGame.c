//Contributors
//Garrett Poppe 3/19/18
//Mohamed Shalabi - Room2
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_DICE 3

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
    {
        printf("Die %d: %d\n", i + 1, dice[i]);
    }
    printf("---------\nTotal: %d\n\n", sum);
}

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
			case 2: // Mohamed Shalabi
			{
                                while(choice != 99)
                                {

                          	        	puts("Thank you for choosing my door!!!");
                           	        	puts("Now,you open the door and I hope you enjoyed your time!!");
                           			puts("********************************************************");

                            			char guess;
                            			int i, dice[NUM_DICE], sum, oldSum, correct, goodGuesses;
                            			srand(time(NULL));
                            			goodGuesses = 0;
                            			sum = rollDice(dice);

                            			printf("Please Enter, How many times do you want to play? ");
                            			scanf("%d", &i);

                            			for ( i;i; i--)
                            			{
                                			printDice(dice, sum);
                                			oldSum = sum;
                                			sum = rollDice(dice);
                                			printf("Do you think the next total will be Higher,""the Same,or Lower than the previous total? ""(h, s, l)\n");
                                			scanf(" %c", &guess);

                                			switch (guess)
                                			{
                                        			case 'h':
                                                    			correct = (sum > oldSum);
                                                    			break;
                                        			case 's':
                                                    			correct = (sum == oldSum);
                                                    			break;
                                        			case 'l':
                                                    			correct = sum < oldSum;
                                                    			break;
                                        			default:
                                                     			correct = 0; printf("Not h, s or l.\n");
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

                            			}//end for loop
                            			printf("You got a total of %d guesses correct!\n", goodGuesses);
                            			printf("Thank you again for coming to my room #2\n");
                            			break;
                        	} //end while

                    			break;
            		}// end case2
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
