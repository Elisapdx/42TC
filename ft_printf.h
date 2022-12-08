#ifndef PRINTF_H
# define PRINTF_H

/*--------------Librairies----------------*/

#include <unistd.h>

/*--------------Prototypes----------------*/

int ft_putchar(int c);
int ft_forms(va_list args, const char form);
int	ft_printf(const char *str, ...);
int	ft_putstr(char *str);
int	ft_putnbr(int nbr);
int	ft_putnbr_unsigned(unsigned int n);
size_t	ft_strlen(const char *s);
static int	ft_count(long n);
char	*ft_itoa(int n);
int	ft_ptr_len(unsigned	int nb);
void	ft_ptr_hex(unsigned int nb, char *base, const char form);
int	ft_print_ptr(unsigned long ptr);
int	ft_hex_len(unsigned	int nb);
int	ft_put_hex(unsigned int nb, const char form);
void	ft_print_hex(unsigned int nb, char *base, const char form);

#endif
