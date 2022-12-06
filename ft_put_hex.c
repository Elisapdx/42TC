int	ft_put_hex(unsigned int nb, const char form)
{
	if (nb == 0)
		write(1, "0", 1);
	else
		ft_print_hex(nb, form);
	return (ft_hex_len(nb));
}

int	ft_hex_len(unsigned	int nb)
{
	int	len;

	len = 0;
	while (nb != 0)
	{
		len++;
		nb = nb / 16;
	}
	return (len);
}

void	ft_print_hex(unsigned int nb, const char form)
{
	if (nb >= 16)
	{
		ft_print_hex(nb / 16);
		ft_print_hex(nb % 16);
	}
	
}
