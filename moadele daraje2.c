#include <stdio.h>
int main()
{
	float a , b , c , z , X1 , X2;
	
	scanf("%f%f%f", &a , &b , &c);
	if (a==0)
	{
		X1=(-c)/b;
		printf("%f" , X1);
	}
	else
	{
	
	z= (b*b)-(4.0*a*c); 
	if (z<0)
	 printf("No Root");
	else
	{
		if(z==0.0)
		{
			X1=(-b)/(2.0*a);
			printf("%f", X1);
		}
		else
		{
			X1=((-b)+pow(z,0.5))/(2.0*a);
			X2=((-b)-pow(z,0.5))/(2.0*a);
			if(X1>X2)
			{
				printf("%f  " , X2 );
				printf("%f" , X1);
			}
			else
			{
				printf("%f  ", X1 );
				printf("%f" , X2);
			}
		}
	}
}
}