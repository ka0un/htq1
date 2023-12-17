#include<stdio.h>

void printStarLine(int spaces, int stars); // this fucntion prints one star line
void printPattern(int input); // this function print diamond pattern


int main()
{
	int input;
	
	printf("Enter a Number : "); //getting user input
	scanf("%d", &input);
	
	if(input % 2 == 0){
		input--;
	}
	
	printPattern(input); //calling a function
	 
	return 0;
}


void printStarLine(int spaces, int stars)
{
	
	int i;
	
	//this loops prints first spaces
	for(i = 1; i <= spaces; i++)
	{
		printf(" ");
	}
	
	//this loops prints stars
	for(i = 1; i <= (stars * 2) - 1; i++)
	{
		
		if(i % 2 == 0){
			printf(" ");
		}else{
			printf("*");	
		}
		
		
	}
	
	printf("\n");
	
}// this fucntion prints one star line


void printPattern(int input)
{
	
	int spaces = input - 1;
	int stars = 1;
	int i;
	
	//this loop prints upper half and middle line of the pattern
	for (i = 0; i < (input + 1) / 2; i++ )
	{
		
		printStarLine(spaces, stars);
		
		spaces -= 2;
		stars += 2;
		
	}
	
	
	spaces = 2;
	stars = input - 2;
	
	//this loop prints bottom half of the pattern
	for (i = 0; i < (input) / 2; i++ )
	{
		
		printStarLine(spaces, stars);
		
		spaces += 2;
		stars -= 2;
		
	}
	
}// this function print diamond pattern