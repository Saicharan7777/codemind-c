#include<stdio.h>
int main()
{
    int a,b;
    float c;
    scanf("%d%d",&a,&b);
    c=b-a;
    c=c/a;
    c=c*100;
    printf("%.2f",c);
}