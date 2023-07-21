//prg to print a person is eligible or not for vote 
#include<stdio.h>
int main()
{
	int age;
	printf("enter age of any person:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("person is eligible for vote");
	}
	else
	{
		printf("person is not eligible for vote");
	}
	return 0;
}
