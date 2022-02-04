int	ft_str_is_lowercase(char *str)
{
	int	return_value;

	return_value = 1;
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return_value = 0;
		}
		str++;
	}
	return (return_value);
}