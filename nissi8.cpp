#include<stdio.h>
int main()
{
	int i,n,sum=0;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if (n%i==0)
		sum=sum+i;
	}
	if(n==sum)
	{
		printf("perfect");
	}
	else
	{
		printf("not perfect");
	}
}
