#include<stdio.h>

int main()
{
	int m , n , k , x , y;
	scanf("%d%d" , &m , &n);

char bmb[110][110];
for(int i=1 ; i<=m ; i++)
for(int j=1 ; j<=n ; j++)
bmb[i][j]=0;

	scanf("%d" , &k);
	for(int i=1 ; i<=k ; i++)
	{
	scanf("%d%d" , &x , &y);
	bmb[x][y]='*';
	}

for(int i=1 ; i<=m ; i++)
for(int j=1 ; j<=n ; j++)
{
if(bmb[i][j]=='*')
	{
	if(bmb[i+1][j+1]!='*') bmb[i+1][j+1]++;
	if(bmb[i+1][j]!='*') bmb[i+1][j]++;
	if(bmb[i+1][j-1]!='*') bmb[i+1][j-1]++;
	if(bmb[i][j+1]!='*') bmb[i][j+1]++;
	if(bmb[i][j-1]!='*') bmb[i][j-1]++;
	if(bmb[i-1][j+1]!='*') bmb[i-1][j+1]++;
	if(bmb[i-1][j]!='*') bmb[i-1][j]++;
	if(bmb[i-1][j-1]!='*') bmb[i-1][j-1]++;	
	}
}


for(int i=1 ; i<=m ; i++)
{
for(int j=1 ; j<=n ; j++)
{
if(bmb[i][j]=='*' ) printf("* ");
else printf("%d " , bmb[i][j]);
}
printf("\n");
}

}