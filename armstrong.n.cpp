// find the number is armstrong or not 
#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum=0,r,num,l=0;
	printf("enter the vale of n");
	scanf("%d",n);
	num=n;
	while(n!=0)
	{
		l++;
		n=n/10;
	}
	n=num;
	while(n!=0)
	{
		r=n%10;
		sum=sum+pow(r,1);
		n=n/10;
	}
	if(num==sum)
	printf("%d is armsrtong",num);
	else
	printf("%d is not armstrong number",num);
	return 0;
}
