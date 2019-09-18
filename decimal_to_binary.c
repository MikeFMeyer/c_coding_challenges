// ===========================================================================
// Decimal to Binary
// A program that takes a decimal value and converts it into the binanry 
// version of that value.

// For example:
// (13) = (1101)
// ===========================================================================

#include <stdio.h>
#include <math.h>
#include "libft/libft.h"

int main()
{
	char *line;
	char *bin;
	char *temp;
	size_t len;
	size_t num;
	int i = 0;

	ft_putstr("Enter a decimal value: ");
	get_next_line(0, &line);
	num = ft_atoi(line);
	bin = ft_strnew(0);
	while (num > 0)
	{
		if (num % 2 == 0)
			bin = ft_strjoin(temp, "0");
		else
			bin = ft_strjoin(temp, "1");
		num -= num % 2;
		num /= 2;
		temp = ft_strdup(bin);
		i++;
	}
	bin = ft_strrev(bin);
	bin[i] = '\0';
	printf("%s\n", bin);
	free(line);
	free(bin);
	while (1);
	return (0);
}
