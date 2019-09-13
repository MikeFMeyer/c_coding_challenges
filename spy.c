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
