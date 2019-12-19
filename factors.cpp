// find the facors of numbers;
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the values of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		printf("%d\t",i);
	}
	return 0;
}
