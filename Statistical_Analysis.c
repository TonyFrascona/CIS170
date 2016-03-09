//Anthony Frascona
//CIS170 Section 1
//Statistical_Analysis

/*

*/

#include<stdio.h>
//#include<conio.h>

#define MAX 10

int getData(int integers[]);

int main()
{
	int integers[MAX];
	int count;
	
	printf("We are going to Enter %d integers.\n\n", MAX);
	
	do
	{
		printf("Please hit [Enter] to continue.");
		//getch();
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








