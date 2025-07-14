/* barname ii benevisid ke yek add ra az mabnaye 10 az karbar gerefte 
va be surat baraks bar mabnaye 2 chap konad*/

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter your number: ");
	scanf("%d",&a);
	
	while (a>0)
	{
		b=a%2;
		a=a/2;
		printf("%d",b);
	}
}
