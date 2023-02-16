/*Write a program to make Simple calculator (to make addition, subtraction, 
multiplication, division and modulo) */ 

#include<stdio.h>
main()
{
	int a,b;
	printf ("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter Value b : ");
	scanf("%d",&b);
	printf("%d + %d = %d",a,b,a+b);
	printf("\n%d - %d = %d",a,b,a-b);
	printf("\n%d * %d = %d",a,b,a*b);	
	printf("\n%d / %d = %d",a,b,a/b);
	printf("\n Mod = %d",a%b);
}
