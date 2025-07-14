#include<stdio.h>

int main()
{
	int m , n , o=0;
	scanf("%d" , &m);
	scanf("%d" , &n);
	int x=m+n;
	int A[m] , B[n] , O[x] ;
	for(int i=0 ; i<m ; i++) scanf("%d" , &A[i]);
	for(int i=0 ; i<n ; i++) scanf("%d" , &B[i]);
	
	for(int i=0 , j=0 ; o<x ;o++)

	{
	if(i>=m){O[o]=B[j]; j++;}
	else{
	if(j>=n){O[o]=A[i]; i++;}
	else
	if(A[i]<=B[j]) { O[o]=A[i]; i++; }
	else{ O[o]=B[j]; j++;}
	}}


	for(int j=0 ; j<x ; j++) printf("%d " , O[j]);
}