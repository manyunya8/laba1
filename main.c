#include <stdio.h>

int main()
{
	int n, k;
	k = 0;
	printf("Enter the number: ");
	scanf("%d", &n);
	if (n == 0) 
	{
		k++;
	}
	while (n != 0)
	{
		n = n / 10;
		k ++;
	}
	printf("Count of decimal digits in the number: %d", k);
	return 0;
}