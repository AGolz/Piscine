/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 22:39:41 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/21 23:33:21 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_search_signs(char *str, int *index_ptr)
{
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	*index_ptr = i;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	res;
	int	i;

	res = 0;
	sign = ft_search_signs(str, &i);
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}

//#include <stdio.h>
//int main(void) {
//    // Test cases
//    printf("%d | Expected: 123\n", ft_atoi("123"));       
//    printf("%d  | Expected: -456\n", ft_atoi("-456"));      
//    printf("%d | Expected: 789\n", ft_atoi(" 789"));      
//    printf("%d | Expected: 0\n", ft_atoi("0"));      
//    printf("%d  | Expected: -42 \n", ft_atoi("+-42"));
//		printf("%d  | Expected: -1234 \n", ft_atoi("---+--+1234ab567")); 
//    printf("%d | Expected: 2147483647\n", ft_atoi("2147483647")); 
//    printf("%d | Expected: -2147483648\n", ft_atoi("-2147483648"));
//    return 0;
//}