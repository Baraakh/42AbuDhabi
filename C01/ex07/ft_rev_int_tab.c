/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 19:16:53 by bkhilo            #+#    #+#             */
/*   Updated: 2025/06/27 19:16:59 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	least;

	least = 0;
	while (least < size / 2)
	{
		temp = tab[least];
		tab[least] = tab[size - 1 - least];
		tab[size - 1 - least] = temp;
		least++;
	}
}
