#include <stdio.h>
int main()
{
	int x , y;
    int  maxx=-32768 , minx=32768 , maxy=-32768 , miny=32768 ;
	int s , a , t , n;
	scanf("%d" , &n);
	while(n>0)
	{
		n--;
		scanf("%d%d" , &x , &y);
		if(x>=maxx) maxx=x;
		if(x<=minx) minx=x;
		if(y>=maxy) maxy=y;
		if(y<=miny) miny=y;
	}
	
	t=maxx-minx;
	a=maxy-miny;
	s=(t*a);
	printf("%d" , s);
}
