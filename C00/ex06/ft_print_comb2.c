/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 23:35:25 by bkhilo            #+#    #+#             */
/*   Updated: 2025/06/27 10:59:00 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnum(int num)
{
	ft_putchar(num / 10 + '0');
	ft_putchar(num % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	first_digit;
	int	second_digit;

	first_digit = 0;
	while (first_digit <= 98)
	{
		second_digit = first_digit + 1;
		while (second_digit <= 99)
		{
			ft_putnum(first_digit);
			ft_putchar(' ');
			ft_putnum(second_digit);
			if (!(first_digit == 98 && second_digit == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second_digit++;
		}
		first_digit++;
	}
}
