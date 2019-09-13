// ===========================================================================
// Armstrong
// A program that checks whether a number is a armstrong number or not.
// Armstrong number is a number that is equal to the sum of cubes of its digits.
//
// For example:
// (371) = (3^3 + 7^3 + 1^3)
// ===========================================================================

#include <stdio.h>
#include "libft/libft.h"
#define MAX 15

int main()
{
	char buf[MAX];
	int num;
	int len;
	int old;
	int total = 0;
	int i = 1;

	while (1)
	{
		printf("Enter a number: ");
		fgets(buf, MAX, stdin);
		num = ft_atoi(buf);
		if (num)
		{
			old = num;
			len = ft_numlen(num);
			while (i <= len)
			{
				total += ft_pwr((num % 10), len);
				num /= 10;
				i++;
			}
			if (total == old)
				printf("This is an armstrong number.\n");
			else
				printf("This is not an armstrong number.\n");	
			return (0);
		}
		else
			printf("Enter a fucking number.\n");
	}
	return (0);
}
