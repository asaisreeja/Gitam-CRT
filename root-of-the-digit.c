//root digit of the number
// i/p: 1947
// o/o: 3
// i/p: 9448612456
// o/p: 4
#include<stdio.h>
int main()
{
	int n, r,sum=0;
	printf("enter the number");
	scanf("%lld",&n);
	a:
		while(n!=0)
		{
			r=n%10;
			sum=sum+r;
			n=n/10;
		}
		if(sum>9)
		{
			n=sum;
			sum=0;
			goto a;
		}
		printf("%lld",sum);
	    return 0;
}
