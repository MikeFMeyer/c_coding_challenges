// ===========================================================================
// Spy Numbers
// A program that checks whether a number is a spy number or not.
// A number is called spy if the sum and product of its digits are equal.

// For example:
// (1 + 2 + 3) = (1 * 2 * 3)
// ===========================================================================

#include <stdio.h>
#include "libft/libft.h"
#define MAX 15

int main()
{
	char buf[MAX];
	int num;
	int add = 0;
	int mul = 1;
	int len;
	int i = 1;

	while (1)
	{
		printf("Enter a number: ");
		fgets(buf, MAX, stdin);
		num = ft_atoi(buf);
		if (num)
		{
			len = ft_numlen(num);
			while (i <= len)
			{
				add += num % 10;
		       		mul *= num % 10;
				num /= 10;
				i++;
			}
			if (add == mul)
				printf("It is a spy number\n");
			else
				printf("Not a spy number\n");	
			return (0);
		}
		else
			printf("Enter a fucking number.\n");
	}
	return (0);
}
