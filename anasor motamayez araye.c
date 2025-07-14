#include <stdio.h>
int main()
{
	int a , b=0 ;
	scanf("%d" , &a);
	int A[a] ;
	for(int p=0 ; p<a ; p++)
	{
	scanf("%d" , &A[p]);
	}

if(a==1) printf("1");
else{
	
	for(int i=0 ; i<a ; i++)
	{
	for(int j=i ; j<a ; j++)
	{
	 if(A[i]>A[j])
{
	int x=A[j];
	A[j]=A[i];
	A[i]=x;
}
	}
	}

for(int i=0 ; i<a ; i++)
{
	if(A[i]==A[i+1]) continue;
	else b++;

}

printf("%d" , b);
}}