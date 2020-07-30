#include<stdio.h>
int main()
{
	int i=0, n, m;
	printf("enter a number: \n");
	scanf("%d\n", &n);
	while(n>0)
	{
		m=n%10;
		i=i+m;
		n=n/10;
	}
	printf("sum of digits in the number: %d\n", i);
	return 0;
}
