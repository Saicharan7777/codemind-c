#include<stdio.h>
#include<math.h>
int main()
{
    int p,r,t;
    float ci;
    scanf("%d%d%d",&p,&r,&t);
    ci=p*(pow(1+r/100.0,t));
    ci=ci-p;
    printf("%.2f",ci);
}