
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char c;

    n = (long int) n;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
		ft_putnbr_fd(n, fd);
	}
	else if (n < 10)
	{
		c = n + '0';
		ft_putchar_fd(c, fd);
	}
	else
	{
		ft_putnbr_fd(n / 10, fd);
		c = (n % 10) + '0';
		ft_putchar_fd(c, fd);
	}
}