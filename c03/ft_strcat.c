#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dest_len;

	dest_len = strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)
{
	printf("%s%s", strcat("", "h"), ", ");
	/*printf("%s\n", ft_strcat("Du schaffst ", "das!"));
	printf("%s%s", strcat("Hello","ööösldp"), ", ");
	printf("%s\n", ft_strcat("Hello","ööösldp"));
	printf("%s%s", strcat("olleH","Hello"), ", ");
	printf("%s\n", ft_strcat("olleH","Hello"));
	printf("%s%s", strcat(" "," "), ", ");
	printf("%s\n", ft_strcat(" "," "));
	printf("%s%s", strcat("","1"), ", ");
	printf("%s\n", ft_strcat("","1"));
	printf("%s%s", strcat("&/","/&"), ", ");
	printf("%s\n", ft_strcat("&/","/&"));
	*/
}