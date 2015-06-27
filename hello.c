#include <stdio.h>

int main(void)
{
	int i,temp,sum;
	
	temp = 1;
	
	for(i=1;i<=10;i++)
	{
		temp *= i;
		sum += temp;
	}
	printf("sum = %d\n",sum);
	return 0;
}