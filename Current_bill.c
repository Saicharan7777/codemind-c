#include<stdio.h>
int main()
{
    int a;
    float b,c;
    scanf("%d",&a);
    if(a<200)
    b=a*1.20;
    else if(a>200&a<400)
    b=a*1.50;
    else if(a>400&a<600)
    b=a*1.80;
    else
    b=a*2.00;
    {
        if(b>400)
        c=1.15*b;
        else
        c=b+100;
    }
    printf("%.2f",c);
}