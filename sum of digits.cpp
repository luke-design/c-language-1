#include<stdio.h>
int main()
{
	int i=0, n=1234, m;
	printf("1234\n");
	while(n>0)
	{
		m=n%10;
		i=i+m;
		n=n/10;
	}
	printf("sum of digits in the number: %d\n", i);
	return 0;
}
