/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 21:23:36 by bkhilo            #+#    #+#             */
/*   Updated: 2025/06/27 21:23:39 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	out_index;
	int	in_index;
	int	temp;

	out_index = 0;
	while (out_index < size - 1)
	{
		in_index = 0;
		while (in_index < size - 1 - out_index)
		{
			if (tab[in_index] > tab[in_index + 1])
			{
				temp = tab[in_index];
				tab[in_index] = tab[in_index + 1];
				tab[in_index + 1] = temp;
			}
			in_index++;
		}
		out_index++;
	}
}
