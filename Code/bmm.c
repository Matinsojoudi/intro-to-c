#include <stdio.h>
int main()
{
	int a , b , bmm;
	scanf("%d%d" , &a , &b);
	if(b==0) printf("%d" , a);
	else{
	
	while(b>0)
{
	bmm=a%b;
	a=b;
	b=bmm;
}
printf("%d" , a);
}}