/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:54:31 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/22 00:40:03 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_check_error(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_nbr_base(char str, char *base)
{
	int	n;

	n = 0;
	while (base[n] != '\0')
	{
		if (str == base[n])
			return (n);
		n++;
	}
	return (-1);
}

int	ft_search_signs(char *str, int *index_ptr)
{
	int	cnt;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	cnt = 1;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			cnt *= -1;
		i++;
	}
	*index_ptr = i;
	return (cnt);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	nbr;
	int	nbr_2;
	int	begin_size;

	nbr = 0;
	i = 0;
	begin_size = ft_check_error(base);
	if (begin_size >= 2)
	{
		sign = ft_search_signs(str, &i);
		nbr_2 = ft_nbr_base(str[i], base);
		while (nbr_2 != -1)
		{
			nbr = (nbr * begin_size) + nbr_2;
			i++;
			nbr_2 = ft_nbr_base(str[i], base);
		}
		return (nbr *= sign);
	}
	return (0);
}

//#include <stdio.h>
//int main(void) {
//    // Test cases
//    printf("%d\n", ft_atoi_base("1101", "01"));   
//// Expected: 13 (binary to decimal)
//    printf("%d\n", ft_atoi_base("3D", "0123456789ABCDEF"));
//// Expected: 61 (hexadecimal to decimal)
//    printf("%d\n", ft_atoi_base("1001", "01"));   
//// Expected: 9 (binary to decimal)
//    printf("%d\n", ft_atoi_base("-C", "0123456789ABCDEF")); 
//// Expected: -12 (hexadecimal to decimal)
//    printf("%d\n", ft_atoi_base("101", "01")); 
//// Expected: 5 (binary to decimal)
//    return 0;
//}
