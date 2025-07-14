#include <stdio.h>
int main()
{
 long n=8;
long s=1;
if(n>0)
{ while (n>0)
{
	s=s*n;
	n--;
}
}
printf("%d" , s);
}