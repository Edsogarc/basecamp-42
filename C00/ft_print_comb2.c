#include <unistd.h>

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;

	num1 = 0;
	num2 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			ft_putchar(num1 / 10 + '0');
			ft_putchar(num1 % 10 + '0');
			ft_putchar(' ');
			ft_putchar(num2 / 10 + '0');
			ft_putchar(num2 % 10 + '0');
			if ((num1 / 10 != 9) || (num1 % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			num2++;
		}
		num1++;
	}
}
