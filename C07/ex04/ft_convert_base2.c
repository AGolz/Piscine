/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 03:00:28 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/26 05:47:04 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	lenght_nbr(int nbr, char *base, int len)
{
	unsigned int	nb;
	int				base_len;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		nb = nbr * -1;
		len++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)base_len)
	{
		nb /= base_len;
		len++;
	}
	len++;
	return (len);
}

void	ft_putnbr_base2(int nbr, char *base, char *nbrf)
{
	int		len_base;
	int		len_nbrf;
	int		i;
	long	nb;

	len_base = ft_strlen(base);
	len_nbrf = lenght_nbr(nbr, base, 0);
	nb = nbr;
	i = 0;
	if (nb < 0)
	{
		nbrf[0] = '-';
		nb *= -1;
		i = 1;
	}
	len_nbrf--;
	while (nb >= len_base)
	{
		nbrf[len_nbrf] = base[nb % len_base];
		nb /= len_base;
		len_nbrf--;
	}
	if (nb < len_base)
		nbrf[i] = base[nb];
}
