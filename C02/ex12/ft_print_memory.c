/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhilo <bkhilo@student.42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 22:45:07 by bkhilo            #+#    #+#             */
/*   Updated: 2025/06/29 14:57:57 by bkhilo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hex_address(void *addr)
{
	char			addres[16];
	char			*hex;
	unsigned long	value;
	int				index;
	int				shift;

	hex = "0123456789abcdef";
	value = (unsigned long)addr;
	index = 0;
	while (index < 16)
	{
		shift = (15 - index) * 4;
		addres[index] = hex[(value >> shift) & 0xF];
		index++;
	}
	write(1, addres, 16);
	write(1, ": ", 2);
}

void	print_hex(char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(1, &hex[c / 16], 1);
	write(1, &hex[c % 16], 1);
}

void	ft_print_content_hex(void *addr, unsigned int size, unsigned int offset)
{
	int	count;

	count = 0;
	while (count < 16)
	{
		if ((offset + count) < size)
			print_hex(((char *)addr)[count]);
		else
			write(1, "  ", 2);
		if ((count + 1) % 2 == 0)
			write(1, " ", 1);
		count++;
	}
}

void	ft_print_content(void *addr, unsigned int size, unsigned int offset)
{
	int		count;
	char	*c_ptr;

	count = 0;
	c_ptr = (char *)addr;
	while (count < 16)
	{
		if ((offset + count) < size)
		{
			if (c_ptr[count] >= 32 && c_ptr[count] <= 126)
				write(1, &c_ptr[count], 1);
			else
				write(1, ".", 1);
		}
		count++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	int	index;

	if (size == 0)
		return (addr);
	index = 0;
	while (index < (int)size)
	{
		ft_print_hex_address(addr + index);
		ft_print_content_hex((char *)addr + index, size, index);
		ft_print_content((char *)addr + index, size, index);
		write(1, "\n", 1);
		index = index + 16;
	}
	return (addr);
}
