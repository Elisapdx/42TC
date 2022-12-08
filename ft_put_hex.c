#include "ft_printf.h"

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

int	ft_put_hex(unsigned int nb, char *base, const char form)
{
	if (nb == 0)
		write(1, "0", 1);
	else
		ft_print_hex(nb, base, form);
	return (ft_hex_len(nb));
}

void	ft_print_hex(unsigned int nb, char *base, const char form)
{
	if (nb >= 16)
		ft_print_hex(nb / 16, base, form);
	ft_putchar(base[nb % 16]);
}
