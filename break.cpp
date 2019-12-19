//  BREAK: 
//         is used to exit from the loop
//exit 0:
//          is used to terminate from the given program
// continue:
//          is used to continue from the next iteration and skip the current iteration.
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==5)
		continue;
		printf("%d\t",i);
	}
	return 0;
}
