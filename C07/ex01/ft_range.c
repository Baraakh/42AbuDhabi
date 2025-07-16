/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:17:42 by bkhilo            #+#    #+#             */
/*   Updated: 2025/07/06 15:36:14 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*ptr_result;
	int	count;

	if (min >= max)
		return (NULL);
	size = (max - min);
	ptr_result = (int *)malloc(4 * size);
	if (ptr_result == NULL)
		return (NULL);
	count = 0;
	while (min < max)
	{
		ptr_result[count] = min;
		min++;
		count++;
	}
	return (ptr_result);
}
