/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 06:29:42 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/21 13:37:33 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	dest_len = j;
	src_len = ft_strlen(src);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src [i] != '\0' && i < size - dest_len - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}

//#include <stdio.h>
//#include <string.h>
//int main(void)
//{
//	// Test Case 1
//	char dest1[20] = "Hello, ";
//	char src1[] = "world!";
//	unsigned int result1 = ft_strlcat(dest1, src1, sizeof(dest1));
//	printf("Test 1: Result = %u (Expected: %lu)\n", result1, 
//strlcat(dest1, src1, sizeof(dest1)));

//	// Test Case 2
//	char dest2[10] = "Test";
//	char src2[] = "Case";
//	unsigned int result2 = ft_strlcat(dest2, src2, sizeof(dest2));
//	printf("Test 2: Result = %u (Expected: %lu)\n", result2, 
//strlcat(dest2, src2, sizeof(dest2)));

//	// Test Case 3
//	char dest3[5] = "123";
//	char src3[] = "456";
//	unsigned int result3 = ft_strlcat(dest3, src3, sizeof(dest3));
//	printf("Test 3: Result = %u (Expected: %lu)\n", result3, 
//strlcat(dest3, src3, sizeof(dest3)));

//	return 0;
//}
//The idea behind strlcat is to provide a safer alternative 
//to strncat by guaranteeing NUL-termination and avoiding buffer 
//overflows. The return value allows the caller to determine 
//the total length of the concatenated string, and if it's equal 
//to or greater than the size of the destination buffer, 
//truncation has occurred.

//test cases:
//c2r16s1% ./a.out        
//Test 1: Result = 13 (Expected: 19)
//Test 2: Result = 8 (Expected: 12)
//Test 3: Result = 6 (Expected: 7)

//Test 1: Result = 13 (Expected: 19) - Indicates that the total length 
//of the concatenated string is 13, and it has been truncated.
//Test 2: Result = 8 (Expected: 12) - Indicates that the total length 
//of the concatenated string is 8, and it has been truncated.
//Test 3: Result = 6 (Expected: 7) - Indicates that the total length 
//of the concatenated string is 6, and it has been truncated.
//In summary, the return value of strlcat includes both the original length 
//of the destination string and the length of the source string.