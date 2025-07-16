/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 16:35:29 by bkhilo            #+#    #+#             */
/*   Updated: 2025/07/06 18:01:57 by bkhilo           ###   ########.fr       */
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

int	ft_strslen(int size, char **strs)
{
	int	i;
	int	total_len;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_strlen(strs[i]);
		i++;
	}
	return (total_len);
}

void	ft_strfill(int size, char **strs, char *str, char *sep)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	index = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			str[index] = strs[i][j];
			index++;
			j++;
		}
		if (i != size - 1)
		{
			j = 0;
			while (sep[j])
				str[index++] = sep[j++];
		}
		i++;
	}
	str[index] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr_result;
	int		total_size;

	if (size == 0)
	{
		ptr_result = (char *)malloc(1);
		if (ptr_result == NULL)
			return (NULL);
		ptr_result[0] = '\0';
		return (ptr_result);
	}
	total_size = ft_strslen(size, strs) + (ft_strlen(sep) * (size - 1)) + 1;
	ptr_result = malloc(total_size);
	if (ptr_result == NULL)
		return (NULL);
	ft_strfill(size, strs, ptr_result, sep);
	return (ptr_result);
}
