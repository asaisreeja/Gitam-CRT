// factors
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the values of n");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		sum=sum+i;
	}
	if(sum==n)
	printf("%d is perfect",n);
	else
	printf("%s is not perfect");
	return 0;
}
