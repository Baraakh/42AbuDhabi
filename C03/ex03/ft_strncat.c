/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 22:25:15 by bkhilo            #+#    #+#             */
/*   Updated: 2025/06/29 23:08:35 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	offset;
	unsigned int	index;

	offset = 0;
	index = 0;
	while (dest[offset] != '\0')
	{
		offset++;
	}
	while (src[index] != '\0' && index < nb)
	{
		dest[offset] = src[index];
		offset++;
		index++;
	}
	dest[offset] = '\0';
	return (dest);
}
