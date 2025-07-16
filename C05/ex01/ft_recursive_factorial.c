/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 18:00:44 by bkhilo            #+#    #+#             */
/*   Updated: 2025/07/02 18:14:17 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_internal_recursive_factorial(int nb)
{
	if (nb <= 1)
		return (1);
	return (ft_internal_recursive_factorial(nb - 1) * nb);
}

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	return (ft_internal_recursive_factorial(nb));
}
