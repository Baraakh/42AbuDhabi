/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 15:28:40 by bkhilo            #+#    #+#             */
/*   Updated: 2025/06/28 16:38:48 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	new_word;

	index = 0;
	new_word = 1;
	while (str[index])
	{
		if ((str[index] >= 'a' && str[index] <= 'z')
			|| (str[index] >= 'A' && str[index] <= 'Z')
			|| (str[index] >= '0' && str[index] <= '9'))
		{
			if (new_word && (str[index] >= 'a' && str[index] <= 'z'))
				str[index] -= 32;
			else if (!new_word && (str[index] >= 'A' && str[index] <= 'Z'))
				str[index] += 32;
			new_word = 0;
		}
		else
			new_word = 1;
		index++;
	}
	return (str);
}
