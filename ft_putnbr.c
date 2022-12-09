#include "ft_printf.h"

int	ft_putnbr(int nbr)
{
	char *str;
	int	len;
	
	if (len == -2147483648)
		write(1, "-2147483648", 11);
	str = ft_itoa(nbr);
	len = ft_putstr(str);
	return (len);
}

static int	ft_count(long n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i + 1);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	long	nb;

	i = 0;
	nb = n;
	res = (char *)malloc(sizeof(char) * (ft_count(nb) + 1));
	if (!res)
		return (NULL);
	i = ft_count(nb);
	res[i--] = '\0';
	if (nb < 0)
		nb *= -1;
	while (i >= 0)
	{
		res[i] = nb % 10 + '0';
		nb = nb / 10;
		i--;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
