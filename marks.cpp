#include<stdio.h>
int main()
{
	int T,E,H,M,S,TT,P;
	scanf("%d%d%d%d%d",&T,&E,&H,&M,&S);
	TT=T+E+H+M+S;
	P=(TT*100)/500;
	if(P>=90)
	{
		printf("A+");
	}
	else if(P>=80)
	{
		printf("A");
	}
	else if(P>=70)
	{
		printf("B");
	}
	else if(P>=60)
	{
		printf("C");
	}
	else if(P>=50)
	{
		printf("D");
	}
	else
	{
		printf("FAIL");
	}
}
