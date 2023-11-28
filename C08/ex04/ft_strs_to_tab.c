/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 13:28:11 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/28 21:30:33 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dst;

	len = 0;
	while (src[len])
		len++;
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*buff;
	struct s_stock_str	*res;

	buff = malloc(sizeof(struct s_stock_str) * (ac + 1));
	res = buff;
	if (!res)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		buff[i].size = ft_strlen(av[i]);
		buff[i].str = av[i];
		buff[i].copy = ft_strdup(av[i]);
		i++;
	}
	buff[i].str = 0;
	buff[i].copy = 0;
	return (buff);
}

//#include <stdio.h>

//int main(int ac, char **av) 
//{
//    struct s_stock_str *result = ft_strs_to_tab(ac, av);

//    if (!result) {
//        printf("Allocation failed\n");
//        return 1;
//    }

//    for (int i = 0; result[i].str != 0; i++) {
//        printf("String: %s\n", result[i].str);
//        printf("Size: %d\n", result[i].size);
//        printf("Copy: %s\n\n", result[i].copy);
//    }

//    free(result);

//    return 0;
//}