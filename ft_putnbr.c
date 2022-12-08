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
