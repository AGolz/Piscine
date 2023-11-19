/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 06:06:13 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/19 07:49:39 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*destination_ptr;
	char	*source_ptr;

	destination_ptr = dest;
	source_ptr = src;
	while (*destination_ptr)
		destination_ptr++;
	while (*source_ptr)
	{
		*destination_ptr = *source_ptr;
		source_ptr++;
		destination_ptr++;
	}
	*destination_ptr = 0;
	return (dest);
}

//#include <stdio.h>
//#include <string.h>

//int main()
//{
//    // Test 1: Custom implementation ft_strcat
//    char dest1[20] = "Hello, ";
//    char src1[] = "world!";
//    ft_strcat(dest1, src1);
//    printf("Test 1: %s\n", dest1); // Expected: Hello, world!

//    // Test 2: Standard library str
//    char dest2[20] = "Hello, ";
//    char src2[] = "world!";
//    ft_strcat(dest2, src2);
//    printf("Test 2: %s\n", dest2); // Expected: Hello, world!

//    // Compare the results
//    if (strcmp(dest1, dest2) == 0)
//        printf("Results match!\n");
//    else
//        printf("Results differ.\n");

//    return 0;
//}