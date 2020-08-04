#include<stdio.h>
int main()
{
	int n1,n2,input;
	printf("number1 : ");
	scanf("%d",&n1);
	printf("number2 : ");
	scanf("%d", &n2);
	printf("-Input 1 => number1+number2\n");
	printf("-Input 2 => number1-number2\n");
	printf("Input\n");
	scanf("%d", &input);
	if(input==1) printf("%d+%d = %d",n1,n2,n1+n2);
	else if (input == 2) printf("%d+%d = %d", n1, n2, n1 - n2);
	else  printf("Error");
}   