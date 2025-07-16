/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 15:43:34 by bkhilo            #+#    #+#             */
/*   Updated: 2025/07/06 16:43:53 by bkhilo           ###   ########.fr       */
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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*ptr_result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	ptr_result = ft_range(min, max);
	if (ptr_result == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = ptr_result;
	return (size);
}
