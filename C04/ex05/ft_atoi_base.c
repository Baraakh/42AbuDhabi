/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 16:59:34 by bkhilo            #+#    #+#             */
/*   Updated: 2025/07/01 21:33:48 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int	ft_valid_base(char *str)
{
	int		i;
	int		j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (str[j] == str[i])
				return (1);
			j++;
		}
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == ' '
			|| str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
			return (1);
		i++;
	}
	return (0);
}

void	ft_shift_index(char *str, int *index, int *neg_signs)
{
	while (str[*index] == ' ' || str[*index] == '\t' || str[*index] == '\n'
		|| str[*index] == '\v' || str[*index] == '\f' || str[*index] == '\r')
		(*index)++;
	while (str[*index] == '-' || str[*index] == '+')
	{
		if (str[*index] == '-')
			(*neg_signs)++;
		(*index)++;
	}
}

int	ft_get_index(char c, char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] == c)
			return (count);
		count++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	index;
	int	result;
	int	neg_signs;
	int	base_num;
	int	val;

	index = 0;
	result = 0;
	neg_signs = 0;
	base_num = ft_strlen(base);
	if (base_num <= 1 || ft_valid_base(base))
		return (0);
	ft_shift_index(str, &index, &neg_signs);
	val = ft_get_index(str[index], base);
	while (val != -1)
	{
		result = (result * base_num) + val;
		index++;
		val = ft_get_index(str[index], base);
	}
	if (!(neg_signs % 2 == 0))
		result *= -1;
	return (result);
}
