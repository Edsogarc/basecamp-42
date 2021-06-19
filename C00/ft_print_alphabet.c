#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	count;

	count = 'a';
	while (count <= 'z')
	{
		write (1, &count, 1);
		count++;
	}
}
