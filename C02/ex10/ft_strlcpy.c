/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 01:35:39 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/18 23:55:00 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (size > 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
		--size;
	}
	if (size > 0)
		dest[i] = '\0';
	while (src[j] != '\0')
		++j;
	return (j);
}

//#include <stdio.h>
//#include <string.h> 
//int main(void)
//{
//    char dest[10];
//    char dest1[10];
//    char src[] = "2";
//	char dest2[20];
//	char src1[] = "Hello, World!";
//	unsigned int result = ft_strlcpy(dest2, src1, sizeof(dest2));
//	unsigned int result_cpy = strlcpy(dest2, src1, sizeof(dest2));
//	char dest3[5];
//	char src2[] = "Hello, World!";
//	unsigned int result1 = ft_strlcpy(dest3, src2, sizeof(dest3));
//	unsigned int result_cpy1 = strlcpy(dest3, src2, sizeof(dest3));
//	char dest4[20];
//	char src3[] = "";
//	unsigned int result2 = ft_strlcpy(dest4, src3, sizeof(dest4));
//	unsigned int result_cpy2 = strlcpy(dest4, src3, sizeof(dest4));
//	char dest5[20];
//	char src4[] = "Hello, World!";
//	unsigned int result3 = ft_strlcpy(dest5, src4, 0);
//	unsigned int result_cpy3 = strlcpy(dest5, src4, 0);
//	char str[] = "Hello, World!";
//	unsigned int result4 = ft_strlcpy(str + 7, str, 7);
//	unsigned int result_cpy4 = strlcpy(str + 7, str, 7);
//	ft_strlcpy(dest, src, 0); 
//  ft_strlcpy(dest1, src, 4);
//	printf("dest: %s\n", dest);
//  printf("dest1: %s\n", dest1);
//	printf("\n");
//	printf("dest2: %s\n", dest2);  // Should print the entire source string
//	printf("result: %u\n", result);
//	printf("result: %u\n", result_cpy);
//	printf("\n");
//	printf("dest3: %s\n", dest3);  // Should print "Hello"
//	printf("result1: %u\n", result1);
//	printf("result: %u\n", result_cpy1); 
//	printf("\n");
//	printf("dest4: %s\n", dest4);  // Should print an empty string
//	printf("result2: %u\n", result2);  // Should print 0
//	printf("result: %u\n", result_cpy2); 
//	printf("\n");
//	printf("dest5: %s\n", dest5);  // Should print an empty string
//	printf("result3: %u\n", result3);
//	printf("result: %u\n", result_cpy3); 
//	printf("\n");
//	printf("str: %s\n", str);  // Should print "Hello, Hello, World!"
//	printf("result: %u\n", result4);
//	printf("result: %u\n", result_cpy4); 
//	printf("\n");
//    return 0;
//}