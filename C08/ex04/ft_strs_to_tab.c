/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 17:47:23 by bkhilo            #+#    #+#             */
/*   Updated: 2025/07/08 21:28:57 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcopy(char *str)
{
	char	*result;
	int		size;
	int		i;

	if (str == NULL)
		return (NULL);
	size = ft_strlen(str);
	result = malloc(size + 1);
	if (result == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		result[i] = str[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

void	ft_free_partial(t_stock_str *result, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		if (result[i].copy)
			free(result[i].copy);
		i++;
	}
	free(result);
}

int	ft_fill_structs(int ac, char **av, t_stock_str *result)
{
	int		i;
	char	*strcpy;

	i = 0;
	while (i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		strcpy = ft_strcopy(av[i]);
		if (strcpy == NULL)
		{
			ft_free_partial(result, i);
			return (0);
		}
		result[i].copy = strcpy;
		i++;
	}
	result[i].size = 0;
	result[i].str = 0;
	result[i].copy = 0;
	return (1);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*result;

	if (ac < 0 || av == NULL)
		return (NULL);
	result = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (result == NULL)
		return (NULL);
	if (ft_fill_structs(ac, av, result) == 0)
		return (NULL);
	return (result);
}
