#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&a);
	
	for(b=1;b<=a;b++)
	{
		for(c=1;c<=b;c++)
		printf("*");
		
		printf("\n");
	}
	for (d=a-1;d>0;d--)
	{
		for(c=1;c<=d;c++)
		printf("*");
		
		printf("\n");
	}
}
