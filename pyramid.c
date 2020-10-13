#include<stdio.h>

void main()
{
	
	int row,pos,limit;
	printf("enter the limit");
	scanf("%d",&limit);
	printf("pyramid of stars:\n");
	for(row=1;row<=limit;row++)
	{
		for(pos=1;pos<=row;pos++)
		{
			printf("*");
		}
		printf("\n");
	}
} 

