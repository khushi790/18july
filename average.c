#include<stdio.h>
int main()
{
	int h,e,m,c,s,avg;
	printf("enter marks:");
	scanf("%d %d %d %d %d",&h,&e,&m,&c,&s);
	if(h>=40 && e>=40 && m>=40 && c>=40 && s>=40)
	{
		avg=(h+e+m+c+s)/5;
		printf("average=%d",avg);
	}
	else
	{
		printf("fail");
	}
	return 0;
}
