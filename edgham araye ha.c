#include<stdio.h>
 
int swap(int A[] , int i , int j)
{
int x=A[j];
A[j]=A[i];
A[i]=x;
}

int findmax(int A[] , int i)
{
	int max=A[0];
	int index=0;
	for(int j=1 ; j<i ; j++) 
		if(A[j]>max)
		{
		max=A[j];
		index=j;
		}
return index;
}

void sort(int A[] , int n)
{
	for(int len=n ; len>=1 ; len--)
	{
	int m=findmax(A , len);
	swap(A , m , len-1);
	}
}

int main()
{
	int m , n , i=0 ;
	scanf("%d" , &m);
	scanf("%d" , &n);
	int x=m+n;
	int A[x];
	for( ; i<m ; i++) scanf("%d" , &A[i]);
	for( ; i<x ; i++) scanf("%d" , &A[i]);
	sort(A , m+n);
	for(int j=0 ; j<x ; j++) printf("%d " , A[j]);

}