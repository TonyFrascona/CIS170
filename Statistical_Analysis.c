//Anthony Frascona
//CIS170 Section 1
//Statistical_Analysis

/*
Description of Program
*/

#include<stdio.h>

#define MAX 10

int getData(int integers[]);

int main()
{
	int integers[MAX];
	
	printf("We are going to Enter %d integers.\n\n", MAX);
	
	do
	{
		printf("Please hit [Enter] to continue.");
		
	}while(getchar() != '\n');
	
	system("CLS"); //Create clearScreen
	
	getData(integers);
	
	printf("\n%d", integers[0]);	
	return 0;
}

int getData(int integers[])
{
	int count;
	
	for(count = 0; count < MAX; ++count)
	{
		printf("Please Enter an integer: ");
		scanf("%d", &integers[count]);
	}
}








