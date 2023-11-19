/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 01:35:46 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/19 11:19:40 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	xy_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex_byte(char byte)
{
	char	*hex_symbols;

	hex_symbols = "0123456789abcdef";
	xy_putchar(hex_symbols[(byte >> 4) & 0xF]);
	xy_putchar(hex_symbols[byte & 0xF]);
}

void	print_address(unsigned char *address)
{
	char	*hex_symbols;
	int		shift;

	hex_symbols = "0123456789abcdef";
	shift = 60;
	while (shift >= 0)
	{
		xy_putchar(hex_symbols[((unsigned long long)address >> shift) & 0xF]);
		shift -= 4;
	}
	write(1, ": ", 2);
}

void	print_content(unsigned char *cursor, int size)
{
	int		j;
	char	character;

	j = 0;
	while (j < size)
	{
		print_hex_byte(cursor[j]);
		if ((j + 1) % 2 == 0)
			xy_putchar(' ');
		++j;
	}
	j = 0;
	while (j < size)
	{
		character = cursor[j];
		if (character >= 32 && character <= 126)
			xy_putchar(character);
		else
			xy_putchar('.');
		++j;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned char	*cursor;
	unsigned int	i;

	cursor = (unsigned char *)addr;
	i = 0;
	if (size == 0)
		return (addr);
	while (i < size)
	{
		print_address(cursor + i);
		if (size - i < 16)
			print_content(cursor + i, size - i);
		else
			print_content(cursor + i, 16);
		xy_putchar('\n');
		i += 16;
	}
	return (addr);
}

//#include <string.h>
//#include <stdlib.h>
//int main(int argc, char *argv[])
//{
//	// Example with a string
//	if (argc > 1)
//		ft_print_memory((char *)argv[1], (unsigned int)strlen(argv[1]));
//	// Example with an array of integers
//	int *tab = malloc(sizeof(int) * 10);
//	for (int i = 0; i < 10; ++i)
//	{
//		tab[i] = i * 100;
//	}
//	ft_print_memory(tab, 10 * sizeof(int));
//	free(tab);
//	return 0;
//}