#include<stdio.h>
int n_number(long int a ,long int b ,long int c)
{
	if(a>=b && a<=c) return a%10;
	
	return n_number(a/10 , b , c);
}

int main()
{
	long int x , n , i=1 , z=10 , y=1;
	scanf("%ld%ld" , &x , &n);
	for( ; i<n ; i++)
	{
	y*=10;
	z*=10;
	}
	z--;
printf("%ld" , n_number(x , y , z));
}