//Anthony Frascona
//CIS170 Section 1
//Statistical_Analysis

/*
This program starts by asking the user to input integers into an array.
Then it sorts the array from smallest to largest. Proceeding by finding the statistical
range, mean median and mode. Finally it uses a function to display the afformentioned
data.
*/

#include<stdio.h>

#define MAX 10

void getData(int []);
void sortData(int []);
void calcStats(int [], float *, float *, float *, float *);
void displayStats(float, float, float, float);
int main()
{
	int integers[MAX];
	int count;
	float mean, median, range, mode;

	getData(integers);
	sortData(integers);
	calcStats(integers, &mean, &median, &range, &mode);
	displayStats(mean, median, mode, range);
	
	return 0;
}

void getData(int integers[])
{
	int count;
	
	for(count = 0; count < MAX; ++count)
	{
		printf("Please Enter an integer: ");
		scanf("%d", &integers[count]);
	}
}

void sortData(int integers[])
{
	int count, temp, sorted;
	
	while(1)
	{
		sorted = 0;
		
		for(count=0; count<MAX-1; ++count)
		{
			if(integers[count] > integers[count+1])
			{
				temp = integers[count];
				integers[count] = integers[count+1];
				integers[count+1] = temp;
				sorted = 1;
			}
		}
		
		if(sorted == 0)
		{
			break;
		}
		
	}
}

void calcStats(int integers[], float *mean, float *median, float *range, float *mode)
{
	int total = 0, count;
	int temp_frequency = 1, mode_num = 0, frequency = 1;
	
	for(count = 0; count<MAX; ++count)
	{
		total += integers[count];
	}
	
	*mean = total/(MAX*1.0);
	
	if(MAX%2 == 0)
	{
		*median = (integers[((MAX-1)/2)] + integers[((MAX-1)/2+1)])/2.0;
	}
	
	*range = integers[MAX-1] - integers[0];
	
	for(count=0; count<MAX-1; ++count)
	{
		if(integers[count] == integers[count+1])
		{
			temp_frequency++;
		}
		else
		{
			temp_frequency = 1;
		}
		
		if(temp_frequency > frequency)
		{
			frequency = temp_frequency;
			*mode = integers[count];
		}
	}
}

void displayStats(float mean, float median, float mode, float range)
{
	printf("\nMean: %.2f", mean);//Add all then divide
	printf("\nMedian: %.2f", median);//Middle number, if two, average them
	printf("\nMode: %.2f", mode);//Most occured number
	printf("\nRange: %.2f", range);//Most minus smallest
}







