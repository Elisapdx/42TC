int	ft_ptr_len(unsigned	int nb)
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

void	ft_ptr_hex(unsigned int nb, char *base, const char form)
{
	if (nb >= 16)
		ft_print_hex(nb / 16);
	ft_putchar(base[nb % 16]);
}

int	ft_print_ptr(unsigned long ptr)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	if (ptr == 0)
		len += write(1, "0", 1);
	else
	{
		ft_ptr_hex(ptr);
		len += ft_ptr_len(ptr);
	}
	return (len);
}
