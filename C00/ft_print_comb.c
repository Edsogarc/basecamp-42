#include <unistd.h>

void	print_num(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	space_c(void)
{
	char	cmm;
	char	spc;

	cmm = ',';
	spc = ' ';
	write(1, &cmm, 1);
	write(1, &spc, 1);
}

void	sequence_n(char num1, char num2, char num3)
{
	num1 = '0';
	while (num1 <= '7')
	{
		num2 = num1 + 1;
		while (num2 <= '8')
		{
			num3 = num2 + 1;
			while (num3 <= '9')
			{
				if (num1 == '7')
				{
					print_num(num1, num2, num3);
				}
				else
				{
					print_num(num1, num2, num3);
					space_c();
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
}

void	ft_print_comb(void)
{
	char	num1;
	char	num2;
	char	num3;

	num1 = '0';
	num2 = '0';
	num3 = '0';
	sequence_n(num1, num2, num3);
}
