#include <stdio.h>
int main()
{
	int x1 , y1 , x2 , y2 , x3 , y3 , z , S;
	scanf("%d%d \n" , &x1 , &y1);
    scanf("%d%d \n" , &x2 , &y2);
    scanf("%d%d" , &x3 , &y3);
    z=(x1*y2+x2*y3+x3*y1)-(x2*y1+x3*y2+x1*y3);
    if(z<0) z=z*(-1);
    else;
    S=0.5*z;
    printf("%d" , S);

}