#include<stdio.h>
int main()
{
 int n , m2 , m8 , m16 , x , y , p , z;
scanf("%d" , &n);
y=n;
p=n;
z=n;
if(n>=0)
{
for(;;)
{
 m2=y%2;
 y=y/2;
printf("%d",m2);
if(y<2&&y>0) {printf("%d \n" , y); break;}
if(y==0) {printf("\n"); break;}
} 

for(;;)
{
	m8=p%8;
    p/=8;
     printf("%o" , m8);
if(p<8&&p>0) {printf("%o \n" , p); break; }
if(p==0) {printf("\n"); break;}
} 

for(;;)
{
	m16=z%16;
    z/=16;
     printf("%X" , m16);
if(z<16&&z>0) {printf("%X" , z); break;}
if(z==0) {printf("\n"); break;}
}
}






}