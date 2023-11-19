/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 01:35:24 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/18 23:47:22 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str < 'A' || *str >= 'Z')
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
//    result = ft_str_is_uppercase("asdf");
//    printf("Result: %d\n", result);
//    result = ft_str_is_uppercase("QWERTY");
//    printf("Result: %d\n", result);
//    result = ft_str_is_uppercase("asdf1234");
//    printf("Result: %d\n", result);
//    result = ft_str_is_uppercase("000999");
//    printf("Result: %d\n", result);
//    result = ft_str_is_uppercase("");
//    printf("Result: %d\n", result);
//    return 0;
//}