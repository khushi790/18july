#include<stdio.h>
int main()
{
	char gender;
	printf("enter any character:");
	scanf("%c",&gender);
	if(gender=='f')
	{
		printf("female");
	}
	else
	{
		printf("male");
	}
	return 0;
}
