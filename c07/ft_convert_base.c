/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akroll <akroll@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 20:51:58 by akroll            #+#    #+#             */
/*   Updated: 2022/01/03 20:51:58 by akroll           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	i;
	int	result;

	//whitespace and +/-
	result = 1;
	i = 0;
	while (!(nbr[i] >= '0' && nbr[i] <= '9'))
	{
		if (nbr[i] == '-')
			result *= -1;
		i++;
	}
}

/*
•Create a function that returns the result of the conversion of the string nbr from a
base base_from to a base base_to.
•nbr, base_from, base_to may be not writable.
(•nbr will follow the same rules as ft_atoi_base (from an other module). Beware of
’+’, ’-’ and whitespaces.)
•The number represented by nbr must fit inside an int.
•If a base is wrong, NULL should be returned.
•The returned number must be prefix only by a single and uniq ’-’ if necessary, no
whitespaces, no ’+’.
*/
