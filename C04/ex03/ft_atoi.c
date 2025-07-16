/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 00:52:48 by bkhilo            #+#    #+#             */
/*   Updated: 2025/07/01 13:32:03 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	index;
	int	result;
	int	neg_signs;

	index = 0;
	result = 0;
	neg_signs = 0;
	while (str[index] == ' ' || str[index] == '\t' || str[index] == '\n'
		|| str[index] == '\v' || str[index] == '\f' || str[index] == '\r')
		index++;
	while (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			neg_signs++;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = (result * 10) + (str[index] - '0');
		index++;
	}
	if (!(neg_signs % 2 == 0))
		result *= -1;
	return (result);
}
