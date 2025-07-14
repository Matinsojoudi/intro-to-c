#include <stdio.h>

int tarkib(int n,int k)
{
if(k==1) return n;
else
{
	if(k==n) return 1;
else return tarkib(n-1,k-1)+tarkib(n-1,k);
}
}
int main()
{
	int n , k;
scanf("%d%d" , &n , &k);
printf("%d", tarkib(n , k));
}