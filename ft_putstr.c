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
