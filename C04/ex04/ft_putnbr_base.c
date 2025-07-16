/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 13:37:37 by bkhilo            #+#    #+#             */
/*   Updated: 2025/07/01 20:19:53 by bkhilo           ###   ########.fr       */
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
	return (0);
}

int	ft_contain_plus_minus(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		if (str[count] == '+' || str[count] == '-' || str[count] == ' '
			|| str[count] == '\t' || str[count] == '\n' || str[count] == '\v'
			|| str[count] == '\f' || str[count] == '\r')
			return (1);
		count++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_num;
	long long	nb;

	base_num = ft_strlen(base);
	if (base_num <= 1 || ft_valid_base(base) || ft_contain_plus_minus(base))
		return ;
	nb = nbr;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb >= base_num)
		ft_putnbr_base(nb / base_num, base);
	write(1, &base[nb % base_num], 1);
}
