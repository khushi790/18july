//prg to swap two numbers using third variables
#include<stdio.h>
int main()
{
	int a=20,b=44,c;
	printf("the value of a before swapping is:%d\n",a);
	printf("the value of b before swapping is:%d\n",b);
	c=a;
	a=b;
	b=c;
	printf("the value of a after swapping is:%d\n",a);
	printf("the value of b after swapping is:%d",b);
	return 0;

	
}
