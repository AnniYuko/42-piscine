int	ft_str_is_uppercase(char *str)
{
	int	return_value;

	return_value = 1;
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return_value = 0;
		}
		str++;
	}
	return (return_value);
}
