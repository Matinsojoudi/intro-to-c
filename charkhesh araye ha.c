#include<stdio.h>
int main()
{
	int n , k ;
	scanf("%d" , &n);
	scanf("%d" , &k);
	int A[n];
	int a=k%n;
		if(a>=0); else a+=n;
			for(int i=a ; i<n ; i++) scanf("%d" , &A[i]);
			for(int i=0 ; i<a ; i++) scanf("%d" , &A[i]);
	for(int j=0 ; j<n ; j++) printf("%d " , A[j]);
}