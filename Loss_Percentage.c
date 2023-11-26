#include<stdio.h>
int main ()
{
    int a,b;
    float c;
    scanf("%d%d",&a,&b);
    c=((a-b)*100.0)/a;
    printf("%.2f",c);
}