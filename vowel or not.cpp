#include<stdio.h>
int main()
{
	int ch;
	scanf("%c",&ch);
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		printf("it is vowel");
 	    default:
		printf("not a vowel");
		break;
	}
	return 0;
}
