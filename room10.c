#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define RAN 2

int main(void)
{
	puts("Today you will be watching my puppy while I am in Pope's class holding on for dear life.");
	puts("My dog's name is Cannon.\n");
	puts("INSTRUCTIONS: You have to figure out what Cannon needs to remain happy...");

	printf("What is your name?(10 char or less):\n");
	char name[10];
	scanf("%s",name);	
	printf("Hello %s ",name);
	puts("As you open the door...");
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
			printf("");
		}
		else 
		{
			
			scanf("%d",&num);
		/*	if (num != 5)
			{
			puts("try again");
			}*/
			if (num ==1)
			{
				puts("Cannon was a bit hungry but he is still wining.");
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
				}
			}
			if (num ==5)
			{
				puts("Cannon is very loving, so he cuddles up and falls alseep easily.");
				flag =2;
			
				printf("Thankyou %s I have returned from Pope's class.",name);
				puts("");
			}			
		}
		if(num != 5)
		{
			puts("\ntry again!");
		}
	}
	return 0;	
}
