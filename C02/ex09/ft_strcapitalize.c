/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 01:35:36 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/18 23:54:05 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || \
				(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (i == 0 || (str[i - 1] < '0' || (str[i - 1] > '9' \
				&& str[i - 1] < 'A') || (str[i - 1] > 'Z' && str[i - 1] < 'a') \
							|| str[i - 1] > 'z'))
			{
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] -= 32;
			}
			else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] += 32;
			}
		}
		i++;
	}
	return (str);
}

//int main(void)
//{
//	char str[] = "salut, comment tu vas ?
//42mots quarante-deux; cinquante+et+un";
//	printf("%s\n", ft_strcapitalize(str));
//	return 0;
//}