/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 00:44:55 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/16 01:30:39 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	helper(int nb)
{
	int	a;
	int	second;

	if (nb > 9)
	{
		a = nb / 10;
		second = nb % 10;
		ft_putchar(a + 48);
		ft_putchar(second + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(nb + 48);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	k;

	i = 0;
	while (i <= 99)
	{
		k = i + 1;
		while (k <= 99)
		{
			helper(i);
			ft_putchar(' ');
			helper(k);
			if (i < 98 || k < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			++k;
		}
		++i;
	}
}
