void	ft_ultimate_div_mod(int *a, int *b)
{
	int	saved_value;

	saved_value = *a / *b;
	*b = *a % *b;
	*a = saved_value;
}