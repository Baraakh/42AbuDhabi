/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:22:15 by bkhilo            #+#    #+#             */
/*   Updated: 2025/07/02 17:59:34 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	count;

	if (nb < 0)
		return (0);
	result = 1;
	count = 1;
	while (count <= nb)
	{
		result *= count;
		count++;
	}
	return (result);
}
