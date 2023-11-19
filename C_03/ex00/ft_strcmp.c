/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 05:39:14 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/19 07:47:22 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((int)(*s1) - (int)(*s2));
}

//#include <stdio.h>
//#include <string.h>

//int main(void)
//{
//    // Test cases
//    const char *str1 = "apple";
//    const char *str2 = "banana";
//    const char *str3 = "apple";

//    // Test 1: Compare different strings
//    int result1 = ft_strcmp((char *)str1, (char *)str2);
//    int expected1 = strcmp(str1, str2);
//    printf("Test 1: Result = %d (Expected: %d)\n", result1, expected1);

//    // Test 2: Compare identical strings
//    int result2 = ft_strcmp((char *)str1, (char *)str3);
//    int expected2 = strcmp(str1, str3);
//    printf("Test 2: Result = %d (Expected: %d)\n", result2, expected2);

//    // Test 3: Compare strings of different lengths
//    const char *str4 = "apples";
//     int result3 = ft_strcmp((char *)str1, (char *)str4);
//    int expected3 = strcmp(str1, str4);
//    printf("Test 3: Result = %d (Expected: %d)\n", result3, expected3);

//    return 0;
//}