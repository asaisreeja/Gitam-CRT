// find the factorial of given number
//input 5
// output:120
#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("enter the valuess of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}
