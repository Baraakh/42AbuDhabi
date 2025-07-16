/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 22:38:45 by bkhilo            #+#    #+#             */
/*   Updated: 2025/06/29 23:11:05 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	index_search;

	index = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[index] != '\0')
	{
		index_search = 0;
		while (str[index + index_search] == to_find[index_search]
			&& to_find[index_search] != '\0')
		{
			index_search++;
		}
		if (to_find[index_search] == '\0')
			return (&str[index]);
		index++;
	}
	return ((void *)0);
}
