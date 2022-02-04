int	ft_str_is_numeric(char *str)
{
	int	return_value;

	return_value = 1;
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return_value = 0;
		}
		str++;
	}
	return (return_value);
}