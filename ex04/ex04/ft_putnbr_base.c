/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:54:53 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/22 00:38:02 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_error(char *base)
{
	int	i;
	int	j;
	int	k;

	k = ft_strlen(base);
	i = 0;
	if (base[0] == '\0' || k == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		size;
	int		check;
	long	n;

	check = ft_check_error(base);
	size = ft_strlen(base);
	n = nbr;
	if (check == 1)
	{
		if (n < 0)
		{
			ft_putchar('-');
			n *= -1;
		}
		if (n >= size)
		{
			ft_putnbr_base(n / size, base);
			ft_putnbr_base(n % size, base);
		}
		else
			ft_putchar(base[n]);
	}
}

//#include <stdio.h>
//int main(void) {
//    // Test cases
//    ft_putnbr_base(123, "0123456789");          // Expected: 123 (decimal)
//    printf("\n");
//    ft_putnbr_base(-456, "01");             // Expected: -111001000 (binary)
//    printf("\n");
//    ft_putnbr_base(789, "0123456789ABCDEF");    // Expected: 315 (hexadecimal)
//    printf("\n");
//    ft_putnbr_base(0, "01");                    // Expected: 0 (binary)
//    printf("\n");
//    ft_putnbr_base(42, "0123456789ABCDEF");     // Expected: 2A (hexadecimal)
//    printf("\n");
//    return 0;
//} 