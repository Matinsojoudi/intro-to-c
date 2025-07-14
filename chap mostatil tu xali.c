/* barname ii benevisid ke 
yek mostatil tu xali ba tul va arz gerefte sode az karbar 
chap konad*/

#include<stdio.h>
int main()
{
	int a,b,c,o,p,i,h;
	printf("Tul ra vared konid: ");
	scanf("%d",&a);
	printf("Arz ra vared konid: ");
	scanf("%d",&b);
	
	for(c=1;c<=b;c++)
	printf("*");
	printf("\n");
	o=a-2;
	p=b-2;
	for(i=1;i<=o;i++)
	{
	printf("*");
		for(h=1;h<=p;h++)
		printf(" ");
	printf("*");
	printf("\n");
	}
	for(c=1;c<=b;c++)
	printf("*");
}
