/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 14:52:55 by bkhilo            #+#    #+#             */
/*   Updated: 2025/07/06 15:15:12 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*ptr_copy;
	int		i;

	src_len = ft_strlen(src) + 1;
	ptr_copy = (char *)malloc(src_len);
	if (ptr_copy == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		ptr_copy[i] = src[i];
		i++;
	}
	ptr_copy[i] = '\0';
	return (ptr_copy);
}
