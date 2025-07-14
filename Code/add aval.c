#include <stdio.h>
int main()
{
	int x , i=1 , n=0;
	scanf("%d" , &x);
	if(x<=0) printf("0");
	else{
	while(i<=x) 
	{
		if(x%i==0) n++;
		i++;
	}
	if(n==2) printf("1");
	else printf("0");
} 
}