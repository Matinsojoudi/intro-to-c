/* barname ii benevisid ke donbale zir ra 
chap kond;
1,2,4,8,16,32,...,4096*/

#include<stdio.h>
int main()
{
	int i=1;
	while (i<=4096)
	{
		printf("%d,",i);
		i=i*2;
	}
}
