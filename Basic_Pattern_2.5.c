#include<stdio.h>
int main()
{
    int a,b,i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c ",64+i);
        }
        printf("
");
    }
}