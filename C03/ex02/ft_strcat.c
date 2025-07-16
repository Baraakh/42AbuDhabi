/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 21:51:44 by bkhilo            #+#    #+#             */
/*   Updated: 2025/06/29 22:23:56 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	offset;
	int	index;

	offset = 0;
	index = 0;
	while (dest[offset] != '\0')
	{
		offset++;
	}
	while (src[index] != '\0')
	{
		dest[offset] = src[index];
		offset++;
		index++;
	}
	dest[offset] = '\0';
	return (dest);
}
