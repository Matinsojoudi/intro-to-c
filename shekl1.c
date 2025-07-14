#include<stdio.h>
int main()
{
	int a,b,c,o,p,i,h;
	printf("Tul ra vared konid: ");
	scanf("%d",&a);
	printf("Arz ra vared konid: ");
	scanf("%d",&b);
	printf("\n");
	o=a-2;
	p=b-2;
		printf("*");
		for(c=1;c<b-1;c++)
		printf(" ");
		for(c=1;c<b+1;c++)
		printf("*");
		for(c=1;c<b-1;c++)
		printf(" ");
		for(c=1;c<b+1;c++)
		printf("*");
		printf("\n");
		
	for(i=1;i<=o;i++)
	{
		printf("*");
		for(h=1;h<=p;h++)
		printf(" ");
		printf("*");
		for(h=1;h<=p;h++)
		printf(" ");
		printf("*");
		for(h=1;h<=p;h++)
		printf(" ");
		printf("*");
		for(h=1;h<=p;h++)
		printf(" ");
		printf("*");
		printf("\n");
	}

	for(c=1;c<=b;c++)
	printf("*");
		for(c=1;c<b-1;c++)
	printf(" ");
		for(c=1;c<=b;c++)
	printf("*");
			for(c=1;c<b-1;c++)
	printf(" ");
	printf("*");
}	


