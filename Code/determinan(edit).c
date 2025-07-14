#include <stdio.h>
void det2(int X[100][100] , int Y[100][100] , int i , int n)
{
	int m=0 , w=0 , x , y;
	for(x=1 ; x<n ; x++)
	for(y=0 ; y<n ; y++)
	{
	if(y==i) continue;
	
	X[m][w]=Y[x][y];
	w++;
	
	if(w==n-1) { m++; w=0;}
	}
}


int det(int A[100][100] , int p)
{
	int B[100][100] , S=0 , j=1 ;

	if(p==2)
    S=(A[0][0]*A[1][1])-(A[0][1]*A[1][0]);

	else
	for(int i=0 ; i<p ; i++)
	{
	det2(B , A , i , p);
	S+= j*det(B , (p-1))*A[0][i];
	j*=-1;
	}
return S;	
}

int main()
{
	int n;
	scanf("%d" , &n);
	int matrix[100][100] , x;
	
	for(int i=0 ; i<n ; i++)
	for(int j=0 ; j<n ; j++)
	scanf("%d" , &matrix[i][j]);

	x=det(matrix , n);
	printf("%d" , x);
}