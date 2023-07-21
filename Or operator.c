//prg to check a number is divisible by 7 or 3..
#include<stdio.h>
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(num%3==0 || num%7==0)
	{
		printf("number is divisible");
	}
	else
	{
		printf("number is not divisible");
	}
	return 0;
}
