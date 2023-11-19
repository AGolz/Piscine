/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 01:35:18 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/18 23:45:12 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str <= '/' || *str >= ':')
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
//    result = ft_str_is_numeric("asdf");
//    printf("Result: %d\n", result);
//    result = ft_str_is_numeric("QWERTY");
//    printf("Result: %d\n", result);
//    result = ft_str_is_numeric("asdf1234");
//    printf("Result: %d\n", result);
//    result = ft_str_is_numeric("000999");
//    printf("Result: %d\n", result);
//    result = ft_str_is_numeric("");
//    printf("Result: %d\n", result);
//    return 0;
//}