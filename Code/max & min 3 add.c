#include <stdio.h>
int main()
{
	int x , y , z ;
	scanf ("%d %d %d" , &x , &y , &z);
	printf("\n");
	if(x<=y && x<=z)
	  printf("%d \n" , x );
	else
	{
	if(y<=x && y<=z)
	  printf("%d \n" , y);
	else
      printf("%d \n" , z);
}
	if(x>=y && x>=z)
	  printf("%d" , x);
	else
	{
	    
	if(y>=x && y>=z)
	  printf("%d" , y);
	else
	  printf("%d" , z);
}
}