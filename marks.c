//prg to calculate marks and average marks in each subject is greater than 40
#include<stdio.h>
int main()
{
	int h,e,m,sci,his;
	printf("enter the marks:");
	scanf("%d %d %d %d %d",&h,&e,&m,&sci,&his);
	if((h>=40)&&(e>=40)&&(m>=40)&&(sci>=40)&&(his>=40))
	{
		printf("pass");
	}
	else
	{
		printf("fail");
	}
	return 0;
}
