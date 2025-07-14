#include <stdio.h>
int main()
{
	int n , a , i , j , s ;
	scanf("%d" , &n);
	
   i=(n-1)/2;
	for( i , s=1 ; i>=0 ; i-- , s+=2 )
{
for(j=0 ; j<i ; j++) printf(" ");
for(j=0 ; j<s ; j++) printf("*");
for(j=0 ; j<i ; j++) printf(" ");
for(j=0 ; j<i ; j++) printf(" ");
for(j=0 ; j<s ; j++) printf("*");
printf("\n");
//mosalas balayii// 

}

 s=n-2;
 
	for( i=1 , s ; s>=0 ; s-=2 , i++ )
{
	
	for(j=0 ; j<i ; j++) printf(" ");
	for(j=0 ; j<s ; j++) printf("*");
	for(j=0 ; j<i ; j++) printf(" ");
	for(j=0 ; j<i ; j++) printf(" ");
	for(j=0 ; j<s ; j++) printf("*");
	printf("\n");







}
/*
i=(n-1)/2;
	for( i , s>=1 ; i=0 ; i-=2 , s++ )
{
	for(j=0 ; j<s ; j++) printf(" ");
    for(j=0 ; j<i ; j++) printf("*");
	for(j=0 ; j<s ; j++) printf(" ");
	for(j=0 ; j<s ; j++) printf(" ");
	for(j=0 ; j<i ; j++) printf("*");

printf("\n");
}*/
}
