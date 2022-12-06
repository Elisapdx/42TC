int	ft_putstr(char *str)
{
	int	len;
	
	if (!str)
	{
		write(1, "(NULL)", 6);
		return (6);
	}
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}

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

int	ft_putnbr_unsigned(unsigned int n)
{
	int	i;
	
	i = 0;
	if (n >= 10)
	{
		i += ft_putnbr_unsigned(n / 10);
		i += ft_putnbr_unsigned(n % 10);
	}
	else
		i += ft_putchar(n + '0');
	return (i);
}

size_t	ft_strlen(const char *s)
{
	int	e;

	e = 0 ;
	while (s[e] != '\0')
	{
		e++;
	}
	return (e);
}

