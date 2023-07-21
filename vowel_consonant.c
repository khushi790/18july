//check character is alphabet or not 
#include<stdio.h>
int main()
{
	char alpha;
	printf("enter any character:");
	scanf("%c",&alpha);
	if(alpha=='a' || alpha=='e' ||alpha=='i' ||alpha=='o' ||alpha=='u'|| alpha=='A' || alpha=='E' || alpha=='I' || alpha=='O' || alpha=='U')
	{
		printf("character is vowel");
	}
	else
	{
		printf("character is consonant");
	}
	return 0;
}
