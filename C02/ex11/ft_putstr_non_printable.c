/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 22:03:08 by bkhilo            #+#    #+#             */
/*   Updated: 2025/06/28 22:43:52 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_hex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 32 && str[index] <= 126)
		{
			write(1, &str[index], 1);
		}
		else
		{
			print_hex((unsigned char)str[index]);
		}
		index++;
	}
}
