#include<stdio.h>
#include<math.h>
void main()
{
	int i,num,temp,r,digit_count=0,arm=0,lp;
	printf(" enter the  a num:");
	scanf("%d",&num);
	printf(" armstrong number within in the range are :");
	for(i=0;i<=num;i++)
	{
	temp=i;
	for(lp=0;temp>0;lp++)
	{
		temp/=10;
	}
	
	temp=i;
	arm=0;
	while(temp>0)
	{        r=temp%10;
		arm +=pow(r,lp);
		temp/=10;
	}
	if(arm==i)
	{printf("%d\n",arm);
	}
}
}






