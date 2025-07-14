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
	int m , n;
	scanf("%d" , &m);
	scanf("%d" , &n);
	int A[m] , B[n];

	for(int p=0 ; p<m ; p++)
	{
	scanf("%d" , &A[p]);
	}

	for(int p=0 ; p<n ; p++)
	{
	scanf("%d" , &B[p]);
	}

	int K[500] , k=0;
	for(int i=0 ; i<m ; i++)
	for(int j=0 ; j<n ; j++)
	{
	if(A[i]==B[j]) { K[k]=A[i]; k++; }
	else continue;
	}	
	//adad moshtarak

 	sort(K , k);


for (int i=0; i<k ; i++)  
    {  
    for (int j=i+1; j<k; j++)  
    {    
        if ( K[i] == K[j])  
           {   
           for(int e=j+1 , r=k ; e<r ; e++)
			K[j]=K[e];
			k--;   
           }  
    }  
    } 

	sort(K , k);
	for(int i=0 ; i<k ; i++) printf("%d " , K[i]);

}