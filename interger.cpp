#include<stdio.h>
int main()
{
	int a=123456;
	long int b=123456;
	int c=560000;
	printf("a=%d",a);
	printf("\nb=%d",b);
	printf("\nc=%u",c);
	printf("\n&a=%d",&a);// adress is singned
	printf("\n&a=%u",&a);// address is unsingned
	printf("\n&a=%p",&a);// adress is hexa decimal
	return 0;
}
