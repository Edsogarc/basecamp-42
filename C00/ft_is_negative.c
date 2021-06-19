#include <unistd.h>

void	ft_is_negative(int n)
{
	char	boolean;

	if (n < 0)
	{
		boolean = 'N';
	}
	else
	{
		boolean = 'P';
	}
	write(1, &boolean, 1);
}
