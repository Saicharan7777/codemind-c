#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int a = 0;
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{	
	printf("Not Prime
");
		    
		}
	else {
	printf("Prime
");
	
		}
		return 0;
	}	

}