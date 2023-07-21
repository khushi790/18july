//prg to check maximum of three numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter value of a,b and c:");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b)&&(a>c))
	{
		printf("a is greater");
	}
	else
	{
		printf("a is not greater than b and c");
	}
	return 0;
}
