void	ft_swap(int *a, int *b)
{
	int	saved_value;

	saved_value = *a;
	*a = *b;
	*b = saved_value;
}
