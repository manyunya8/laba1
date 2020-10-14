#include <stdio.h>

int main()
{
	int n, k, q;
	k = 0;
	printf("Enter the number: ");
	scanf("%d", &n);
	printf("Enter q: ");
	scanf("%d", &q);
	if (q < 2)
	{
		printf("Invalid discharge");
		return 1;
	}
	if (n == 0) 
	{
		k++;
	}
	while (n != 0)
	{
		n = n / q;
		k ++;
	}
	printf("Count of digits in the number: %d", k);
	return 0;
}