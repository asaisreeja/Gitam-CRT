// input 10;
// output 55
// input :5;
// output 15;
//find the sum of first n natural numbers:
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the n value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	return 0;
}
