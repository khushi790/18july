//prg to print valid if input is equal to any one number in this(5,7,11,13) otherwise not valid
#include<stdio.h>
int main()
{
	int num;
	printf("enter value:");
	scanf("%d",&num);
	if(num==5 || num==7 || num==11 || num==13)
	{
		printf("you are valid");
	}
	else
	{
		printf("you are not valid");
	}
	return 0;
}
