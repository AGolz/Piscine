/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 01:35:27 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/30 19:18:30 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str <= ' ' || *str >= '~')
			return (0);
		str++;
	}
	return (1);
}

//#include <stdio.h>
//int main()
//{
//    int result;
//    result = ft_str_is_printable("asdf");
//    printf("Result: %d\n", result);
//    result = ft_str_is_printable("QWERTY");
//    printf("Result: %d\n", result);
//    result = ft_str_is_printable("asdf1234");
//    printf("Result: %d\n", result);
//    result = ft_str_is_printable("000999");
//    printf("Result: %d\n", result);
//    result = ft_str_is_printable("\r\n\t\v");
//	  printf("Result: %d\n", result);
//    result = ft_str_is_printable("");
//    printf("Result: %d\n", result);
//    return 0;
//}