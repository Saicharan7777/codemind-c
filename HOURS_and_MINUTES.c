#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a/60;
    c=a-(b*60);
    printf("%d Hour(s) %d Minute(s)",b,c);
    return 0;
}