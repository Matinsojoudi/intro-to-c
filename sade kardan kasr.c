#include<stdio.h>
int unS (int x)
{
	int m;
	if(x>=0) m=x;
else m=(-x);
return m;
}
int main()
{
	int x , y , a , b , m , n , i;
	scanf("%d%d" , &x , &y);
a=unS(x);
b=unS(y);
	if(a>=b) {m=a;  n=b;}
else{ m=b;   n=a;}

for(i=m;i>0;i--)
{
	if(m%i==0)
{
	if(n%i==0) break;
}
}
x/=i;
y/=i;
printf("%d/%d" , x , y);



}