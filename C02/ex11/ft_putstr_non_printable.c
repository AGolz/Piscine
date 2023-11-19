/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 01:35:42 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/18 23:57:00 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
		{
			ft_putchar(*str);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[(*str >> 4) & 0xF]);
			ft_putchar("0123456789abcdef"[*str & 0xF]);
		}
		str++;
	}
}

//int main()
//{
//  char example[] = "Coucou\ntu vas bien ?";
//  char example1[] = "Coucou\r\n\t\vtu vas bien ?";
//  ft_putstr_non_printable(example);
//  write(1, "\n", 1);
//  ft_putstr_non_printable(example1);
//  return 0;
//}