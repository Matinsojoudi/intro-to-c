#include <stdio.h>
int numK( int n)
{
	long int i=0;
for (  long int z=1 ; z<=n ; z++ )
{if(n%z==0) i++;}
return i;
}

int main()
{
	long int m , r=0 , a=1 , p ;
	scanf("%ld" , &m );
for( ; ; a++ ){

r+=a;
p=numK(r);

if(p>=m){ printf("%ld" , r); break;}
}
}