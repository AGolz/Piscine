/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 05:56:39 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/19 07:48:09 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
			return ((int)(*s1) - (int)(*s2));
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
		n--;
	}
	return (0);
}

//#include <stdio.h>
//#include <string.h>

//int main(void)
//{
//    // Test 1: Equal strings
//    const char *str1 = "hello";
//    const char *str2 = "hello";
//    unsigned int n1 = 5;
//    int result1 = ft_strncmp((char *)str1, (char *)str2, n1);
//    int expected1 = strncmp(str1, str2, n1);
//    printf("Test 1: Result = %d (Expected: %d)\n", result1, expected1);

//    // Test 2: Different strings
//    const char *str3 = "hello";
//    const char *str4 = "world";
//    unsigned int n2 = 5;

//    int result2 = ft_strncmp((char *)str3, (char *)str4, n2);
//    int expected2 = strncmp(str3, str4, n2);
//    printf("Test 2: Result = %d (Expected: %d)\n", result2, expected2);

//    // Test 3: Strings with common prefix
//    const char *str5 = "apple";
//    const char *str6 = "appetizer";
//    unsigned int n3 = 3;

//    int result3 = ft_strncmp((char *)str5, (char *)str6, n3);
//    int expected3 = strncmp(str5, str6, n3);
//    printf("Test 3: Result = %d (Expected: %d)\n", result3, expected3);

//    // Test 4: Empty strings
//    const char *str7 = "";
//    const char *str8 = "";
//    unsigned int n4 = 0;

//    int result4 = ft_strncmp((char *)str7, (char *)str8, n4);
//    int expected4 = strncmp(str7, str8, n4);
//    printf("Test 4: Result = %d (Expected: %d)\n", result4, expected4);

//    return 0;
//}