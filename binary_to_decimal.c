// ===========================================================================
// Binary to Decimal
// A program that takes an input as string (binary) and returns the decimal 
// value.

// For example:
// (1101) = (13)
// ===========================================================================

#include <stdio.h>
#include <math.h>
#include "libft/libft.h"

int main()
{
	char *line;
	size_t len;
	size_t i = 0;
	int total = 0;

	ft_putstr("Enter a binary value: ");
	get_next_line(0, &line);
	len = ft_strlen(line);
	while (len > 0)
	{
		if (line[len - 1] == '1')
			total += ft_pwr(2, i);	
		i++;
		len--;
	}
	printf("%d\n", total);
	free(line);
	return (0);
}
