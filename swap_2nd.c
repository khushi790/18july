//prg to swap two numbers
#include<stdio.h>
int main()
{
	int a=40,b=4;
	printf("the value of a before swapping is:%d\n",a);
	printf("the value of b before swapping is:%d\n",b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("the value of a after swapping is:%d\n",a);
	printf("the value of b after swapping is:%d",b);
	return 0;

	
}
