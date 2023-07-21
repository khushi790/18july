//prg to check a character is alphabet or not
#include<stdio.h>
int main()
{
	char alpha;
	printf("enter any character:");
	scanf("%c",&alpha);
	if((alpha>='a' && alpha<='z') || (alpha>='A' && alpha<='Z'))
	{
		printf("it is alphabet");
	}
	else
	{
		printf("it is not a alphabet");
	}
	return 0;
}
