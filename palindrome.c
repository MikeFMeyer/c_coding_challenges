// ===========================================================================
// Palindrome
// A program that checks whether a word is a palindrome or not.
// A word, phrase, or sequence that reads the same backwards as forwards.

// For example:
// madam; lepel
// ===========================================================================

#include <stdio.h>
#include "libft/libft.h"

int main()
{
	char *line;
	size_t len;
	size_t i = 0;
	size_t j = 0;

	ft_putstr("Enter a word: ");
	get_next_line(0, &line);
	len = ft_strlen(line);
	j = len - 1;
	while (i < len/2)
	{
		if (line[i] != line[j])
		{
			ft_putstr("Not palindrome\n");
			free(line);
			return (0);
		}
		i++;
		j--;
	}
	ft_putstr("Palindrome\n");
	free(line);
	return (0);
}
