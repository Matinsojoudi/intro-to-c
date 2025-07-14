#include<stdio.h>
int main()
{
	int a,b,c=0,d,i,j;
	printf("tedad magadiri ke mixahid gerefte shavand ra vared konid: ");
	scanf("%d",&a);
	int Matin[a];
	a=a-1;
	for (i=0;i<=a;i++)
	{
	c=i+1;
	printf("add %d om ra vared konid: ",c);
	scanf("%d",& Matin[i]);
	}
	for(j=0;j<=a/2;j++)
	{
		b=Matin[j];
		Matin[j]=Matin[a-j];
		Matin[a-j]=b;
	}
	 for (c=0;c<=a;c++)
	 printf("%d , ",Matin[c]);
}
