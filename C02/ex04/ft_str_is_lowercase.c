/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 01:35:21 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/18 23:46:11 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str < 'a' || *str >= 'z')
		{
			i++;
		}
		str++;
	}
	if (i > 0)
		return (0);
	else
		return (1);
}

//#include <stdio.h>
//int main()
//{
//    int result;
//    result = ft_str_is_lowercase("asdf");
//    printf("Result: %d\n", result);
//    result = ft_str_is_lowercase("QWERTY");
//    printf("Result: %d\n", result);
//    result = ft_str_is_lowercase("asdf1234");
//    printf("Result: %d\n", result);
//    result = ft_str_is_lowercase("000999");
//    printf("Result: %d\n", result);
//    result = ft_str_is_lowercase("");
//    printf("Result: %d\n", result);   
//    return 0;
//}