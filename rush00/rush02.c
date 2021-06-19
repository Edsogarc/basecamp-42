#include <unistd.h>

void	ft_putchar(char c);
void	primeira(int x);
void	ultima (int x);
void	intermediarias(int x);

void	rush(int x, int y)
{
	int	conty;

	conty = 1;
	if (x > 0 && y > 0)
	{
		while (conty <= y)
		{
			if (conty == 1)
				primeira(x);
			else if (conty == y)
				ultima(x);
			else
			{
				intermediarias(x);
			}
			ft_putchar('\n');
			conty++;
		}
	}
}

void	primeira(int x)
{	
	int		contx;

	contx = 1;
	while (contx <= x)
	{
		if (contx == x)
			ft_putchar('A');
		else if (contx == 1)
			ft_putchar('A');
		else
			ft_putchar('B');
		contx++;
	}
}

void	ultima(int x)
{	
	int		contx;

	contx = 1;
	while (contx <= x)
	{
		if (contx == x)
			ft_putchar('C');
		else if (contx == 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		contx++;
	}
}

void	intermediarias(int x)
{
	int		contx;

	contx = 1;
	while (contx <= x)
	{
		if (contx == x || contx == 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		contx++;
	}
}
