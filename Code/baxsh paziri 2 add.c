/* Barname ii benevisid ke 
do add sahihaz karbar begirad
va bar ham baxsh pazir budan
 anhara chek konad*/

#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if (a==0 || b==0)
	{
	printf("No");
	return 0;
	}
	if (a%b==0 || b%a==0)
	printf("yes");
	else
	printf("No");
}
