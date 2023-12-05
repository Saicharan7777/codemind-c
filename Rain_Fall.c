#include<stdio.h>
#include<math.h>
int main()
{
    int rf;
    scanf("%d",&rf);
    if(rf<3)
    printf("LIGHT");
    else if(rf>=3&&rf<7)
    printf("MODERATE");
    else
    printf("HEAVY");
}