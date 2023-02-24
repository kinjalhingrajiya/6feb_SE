#include<stdio.h>
main()
{
	char c;
	int a,b;
	float ans;
	printf("Press A for Addition");
	printf("\nPress S for Substraction");
	printf("\nPress M for Multi[lication");
	printf("\nPress D for Division");
	printf("\nEnter your Choice :");
	scanf("%c",&c);
	printf("\nEnter value of a: ");
	scanf("%d",&a);
	printf("\nEnter value of b: ");
	scanf("%d",&b);
	switch(c)
	{
		case 'A':
		ans=a+b;
		printf("\n Addtion is %d + %d = %f",a,b,ans);
		break;
		case 'S':
		ans=a-b;
		printf("\n Subtraction is %d - %d = %f",a,b,ans);
		break;
		case 'M':
		ans=a*b;
		printf("\n Multiplication is %d * %d = %f",a,b,ans);
		break;
		case 'D':
		ans=a/b;
		printf("\n Division is %d / %d = %f",a,b,ans);
		break;
		default:
			printf("Invalid Input");
	}
	
}
