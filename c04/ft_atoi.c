
int	ft_atoi(char *str)
{
	int	i;
	int	m;
	int	number;

	i = 0;
	m = 1;
	number = 0;
	while (!(str[i] >= '0' && str[i] <= '9'))
	{
		if (str[i] == '-')
			m *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	if (m % 2)
		number *= -1;
	return (number);
}
