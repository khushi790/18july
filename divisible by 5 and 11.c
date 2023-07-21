//prg to check a number is 5 and 11
#include<stdio.h>
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(num%11==0 && num%5==0)
	{
		printf("number is divisible by both 11 and 5");
	}
	else
	{
		printf("number is not divisible");
	}
	return 0;
	
}
