/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 23:13:43 by bkhilo            #+#    #+#             */
/*   Updated: 2025/06/30 14:43:54 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	offset;
	unsigned int	index;
	unsigned int	total_length;

	offset = 0;
	index = 0;
	while (dest[offset] && offset < size)
		offset++;
	while (src[index])
		index++;
	if (offset == size)
		return (size + index);
	total_length = offset + index;
	index = 0;
	while (src[index] && (offset + 1) < size)
	{
		dest[offset] = src[index];
		offset++;
		index++;
	}
	dest[offset] = '\0';
	return (total_length);
}
