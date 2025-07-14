/* barname ii benevisid ke tul ra az karbar gerefte va yek felesh 
chap konad */

#include<stdio.h>
int main()
{
	int a,b,c,o,h,i,u,j,s;
	printf("Tul felesh ra vared konid: ");
	scanf("%d",&a);
	b=a/3;
	c=(2*b)-1;
    i=(c-1)/2;
    h=a-b;
	for(i,s=1;i>=0;i--,s=s+2)
{
	for(j=0;j<i;j++)
	printf(" ");
	for(j=0;j<s;j++)
	printf("*");
	printf("\n");
		}
		for(o=0;o<h;o++)
		{
			for(u=0;u<c/2;u++)
			printf(" ");
			printf("*");
			printf("\n");
}}

