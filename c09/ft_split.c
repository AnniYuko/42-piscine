/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:56:48 by akroll            #+#    #+#             */
/*   Updated: 2022/02/10 15:56:48 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **ft_split(char *str, char *charset)
{
	char **split_arr;
	int i;

	split_arr = malloc(sizeof(char*)*x);
	i = 0;
	while (i < y)
	{
		split_arr[i] = malloc(sizeof(char)*strlen(piece))
		i++;
	}
	//take charset apart?

	//look for next delimiter
	if (p[i] = charset)
	{
		end_p = p[i-1];
		next_start = p[i+1];
		//copy string from start_p to end_p into split_arr
		start_p = next_start;
	}
}

int	main(void)
{
	char *str;
	char *charset;

	str = "The,blue,sky,is,amazing";
	charset = ",";
	ft_split(str, charset);
}
