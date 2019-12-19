// find the number is armstrong or not 
// input: 153
//output: it is armstrong
#include<stdio.h>
int main()
{
	int n,sum=0,r,num;
	printf("enter the vale of n");
	scanf("%d",n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	if(num==sum)
	printf("%d is armsrtong",num);
	else
	printf("%d is not armstrong number",num);
	return 0;
}
