#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	count;

	count = 'z';
	while (count >= 'a')
	{
		write (1, &count, 1);
		count--;
	}
}
