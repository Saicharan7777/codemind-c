#include<stdio.h>
int main()
{
    float gs,bs,pf,hra,da;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=12*bs;
    pf=pf/100.0;
    gs=bs+hra+da+pf;
    printf("%.2f
%.2f",pf,gs);
    
}