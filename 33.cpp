#include<stdio.h>
int main()
{
	int afsquare,afrectangle,aftriangle,simpleinterest,l,b,base,height,side,p,n,r,choice;
	scanf("%d",&choice);
	switch(choice)
    {
		case 1: scanf("%d",&side);
		afsquare=side*side;
		printf("%d",afsquare);
		break;
		case 2: scanf("%d%d",&l,&b);
		afrectangle=l*b;
		printf("%d",afrectangle);
		break;
    	case 3: scanf("%d%d",&base,&height);
    	aftriangle=base*height;
    	printf("%d",aftriangle);
    	break;
		default:
			printf("invaild input");
}
}
