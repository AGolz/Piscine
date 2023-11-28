/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 03:00:24 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/26 06:25:31 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#define WHITESPACE_START 9
#define WHITESPACE_END 13
#define SPACE 32

void	ft_putnbr_base2(int nbr, char *base, char *nbrf);
int		lenght_nbr(int nbr, char *base, int len);

static int	check_error(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (str[0] == '\0' || str[1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] >= WHITESPACE_START && str[i] <= WHITESPACE_END) \
				|| str[i] == SPACE || str[i] == 43 || str[i] == 45)
			return (0);
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

static int	nb_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

static int	white_spaces(char *str, int *ptr_i)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 1;
	while ((str[i] >= WHITESPACE_START && str[i] <= WHITESPACE_END) \
				|| str[i] == SPACE)
		i++;
	while ((str[i] != '\0') && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
		cnt *= -1;
		i++;
	}
	*ptr_i = i;
	return (cnt);
}

static int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	nb;
	int	nb_2;
	int	cnt;
	int	base_len;

	nb = 0;
	i = 0;
	base_len = check_error(base);
	if (base_len >= 2)
	{
		cnt = white_spaces(str, &i);
		nb_2 = nb_base(str[i], base);
		while (nb_2 != -1)
		{
			nb = (nb * base_len) + nb_2;
			i++;
			nb_2 = nb_base(str[i], base);
		}
		return (nb *= cnt);
	}
	return (0);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		med_nb;
	int		len_nbr;
	char	*final_nbr;

	if (check_error(base_to) == 0 || check_error(base_from) == 0)
		return (NULL);
	med_nb = ft_atoi_base(nbr, base_from);
	len_nbr = lenght_nbr(med_nb, base_to, 0);
	final_nbr = (char *)malloc(sizeof(char) * (len_nbr + 1));
	if (!final_nbr)
		return (NULL);
	ft_putnbr_base2(med_nb, base_to, final_nbr);
	final_nbr[len_nbr] = '\0';
	return (final_nbr);
}

//#include <stdio.h>

//int main(void)
//{
//    // Test 1: Binary to Decimal
//    char *result1 = ft_convert_base("1101", "01", "0123456789");
//    printf("Test 1: Binary to Decimal: %s (Expected: 13)\n", result1);
//    free(result1);

//    // Test 2: Hexadecimal to Decimal
//    char *result2 = ft_convert_base("1A", "0123456789ABCDEF", "0123456789");
//    printf("Test 2: Hexadecimal to Decimal: %s (Expected: 26)\n", result2);
//    free(result2);

//    // Test 3: Decimal to Binary
//    char *result3 = ft_convert_base("42", "0123456789", "01");
//    printf("Test 3: Decimal to Binary: %s (Expected: 101010)\n", result3);
//    free(result3);

//    // Test 4: Decimal to Hexadecimal
//    char *result4 = ft_convert_base("255", "0123456789", "0123456789ABCDEF");
//    printf("Test 4: Decimal to Hexadecimal: %s (Expected: FF)\n", result4);
//    free(result4);

//    // Test 5: Invalid base conversion (should return NULL)
//    char *result5 = ft_convert_base("1101", "01", "01 234"); 
//    printf("Test 5: Invalid base conversion: %s (Expected: NULL)\n", result5);

//    return 0;
//}