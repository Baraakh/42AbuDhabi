/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 21:43:01 by bkhilo            #+#    #+#             */
/*   Updated: 2025/06/30 16:59:46 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0'
		&& s1[index] == s2[index] && index < n)
		index++;
	if (index == n)
		return (0);
	return (s1[index] - s2[index]);
}
