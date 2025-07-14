#include<stdio.h>
int main()
{
    int n , i=0 ;
scanf("%d" , &n);
for(int a=n/2 ; a>=1 ; a--)
{
	for(int b=a , c=n-(a+b); b>=c ;b-- , c++)
{
	 
if(a+b>c&&a+c>b&&b+c>a) i++;
}
}
printf("%d" , i);
}