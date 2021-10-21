#include<stdio.h>
int main()
{
	int telugu,english,maths,total,percentage;
	scanf("%d%d%d",&telugu,&english,&maths);
	total=telugu+english+maths;
	percentage=(total*100)/300;
	if(percentage>=90)
		printf("A");
	else if(percentage>=80)
		printf("B");
	else if (percentage>=70)
		printf("C");
	else if (percentage>=60)
		printf("D");	
	else if(percentage>=50)
		printf("E");
	else
		printf("fail");
}
