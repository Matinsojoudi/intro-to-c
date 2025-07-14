#include<stdio.h>
int main()
{
double a[10][10], b[10][10], c[10][10] = {0};
int i, j, k, m, n, p;
scanf("%d %d", &m, &n);
for(i = 0; i < m; i++)
for(j = 0; j < n; j++)
scanf("%lf", &a[i][j]);

scanf("%d %d" , &n , &p);
for(i = 0; i < n; i++)
for(j = 0; j < p; j++)
scanf("%lf", &b[i][j]);
for(i = 0; i < m; i++)
for(j = 0; j < p; j++)
for(k = 0; k < n; k++)
c[i][j] += a[i][k] * b[k][j];
for(i = 0; i < m; i++)
{
for(j = 0; j < p; j++)
printf("%.2f ", c[i][j]);
printf("\n");
}
}