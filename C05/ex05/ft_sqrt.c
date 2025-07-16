/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 20:24:30 by bkhilo            #+#    #+#             */
/*   Updated: 2025/07/02 22:02:51 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	helper(int nb, int guess)
{
	if ((long)guess * guess == nb)
		return (guess);
	if ((long)guess * guess > nb)
		return (0);
	return (helper(nb, guess + 1));
}

int	ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	return (helper(nb, 1));
}
