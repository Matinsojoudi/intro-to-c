#include <stdio.h>
	unsigned long int AX(unsigned long int n)
   {
	static unsigned long int p=0;
	if(n==0) {return 0;}
	p=p*10;
	p=p+n%10;
	AX(n/10);
	return p;	
   }

		unsigned long int nOmin(unsigned long int x , unsigned long int n)
 	 {	
		if(n==1) {return x%10;}
		return nOmin(x/10 , n-1);
   	 }

int main()
{
	unsigned long int a , n;
	scanf("%lu%lu", &a , &n);
	a=AX(a);
	printf("%lu",nOmin(a,n));
}

