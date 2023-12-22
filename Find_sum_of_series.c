#include<stdio.h>
int main()
{
    int a,i,j;
    float b,c=0;
    scanf("%d%d",&a,&j);
    for(i=0;i<a;i++)
    {
        b=1/(i+1.0);
        c=c+b;
     
    }
         printf("%.2f",c);
}