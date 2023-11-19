/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 01:35:12 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/18 23:44:35 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str <= '@' || (*str >= '[' && *str <= '`') || *str >= '{')
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
//    result = ft_str_is_alpha("asdf");
//    printf("Result: %d\n", result);
//    result = ft_str_is_alpha("QWERTY");
//    printf("Result: %d\n", result);
//    result = ft_str_is_alpha("asdf1234");
//    printf("Result: %d\n", result);
//    result = ft_str_is_alpha("999");
//    printf("Result: %d\n", result);
//    result = ft_str_is_alpha("");
//    printf("Result: %d\n", result);
//    return 0;
//}