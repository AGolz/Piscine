/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 00:58:09 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/26 06:31:49 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dst;

	if (src == NULL)
		return (NULL);
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

//#include <stdio.h>
//#include <string.h>

//int main(void)
//{
//    // Test 1: Basic test with a constant string
//    char *src1 = "Hello, World!";
//    char *expected1 = strdup(src1);
//    char *result1 = ft_strdup(src1);
//    if (result1 != NULL && strcmp(result1, expected1) == 0)
//    {
//        printf("Test 1: Original: \"%s\", Expected: 
//\"%s\", \Duplicated: \"%s\"\n", src1, expected1, result1);
//        free(expected1);
//        free(result1);
//    }
//    else
//    {
//        printf("Test 1: Failed. Memory 
//allocation error or incorrect result.\n");
//    }

//    // Test 2: Test with an empty string
//    char *src2 = "";
//    char *expected2 = strdup(src2);
//    char *result2 = ft_strdup(src2);
//    if (result2 != NULL && strcmp(result2, expected2) == 0)
//    {
//        printf("Test 2: Original: \"%s\", Expected: 
//\"%s\", Duplicated: \"%s\"\n", src2, expected2, result2);
//        free(expected2);
//        free(result2);
//    }
//    else
//    {
//        printf("Test 2: Failed. Memory allocation 
//error or incorrect result.\n");
//    }

//    // Test 3: Test with a dynamically allocated string
//    char *src3 = malloc(15);
//    snprintf(src3, 15, "DynamicString");
//    char *expected3 = strdup(src3);
//    char *result3 = ft_strdup(src3);
//    if (result3 != NULL && strcmp(result3, expected3) == 0)
//    {
//        printf("Test 3: Original: \"%s\", Expected: \"%s\", 
//Duplicated: \"%s\"\n", src3, expected3, result3);
//        free(src3);
//        free(expected3);
//        free(result3);
//    }
//    else
//    {
//        printf("Test 3: Failed. Memory allocation error or 
//incorrect result.\n");
//        free(src3);
//    }

//    // Test 4: Test with NULL input
//    char *src4 = NULL;
//    char *result4 = ft_strdup(src4);
//    if (result4 == NULL)
//    {
//        printf("Test 4: Original: \"%s\", Expected: \"%s\", 
//Duplicated: \"%s\"\n", "NULL", "(null)", "(null)");
//        free(result4);
//    }
//    else
//    {
//        printf("Test 4: Failed. Memory allocation error or 
//incorrect result.\n");
//    }

//    return 0;
//}
