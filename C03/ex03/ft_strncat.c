/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 06:14:04 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/19 07:51:25 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*destination_ptr;
	char			*source_ptr;

	i = 0;
	destination_ptr = dest;
	source_ptr = src;
	while (*destination_ptr)
		destination_ptr++;
	while (*source_ptr && i < nb)
	{
		*destination_ptr = *source_ptr;
		source_ptr++;
		destination_ptr++;
		i++;
	}
	*destination_ptr = 0;
	return (dest);
}

//#include <stdio.h>
//#include <string.h>

//int main(void)
//{
//    // Test Case 1
//    char dest1[20] = "Hello, ";
//    const char src1[] = "world!";
//    unsigned int nb1 = 5;

//    printf("Original string 1: %s\n", dest1);
//    printf("Appending %u characters from \"%s\"\n", nb1, src1);
//    ft_strncat(dest1, (char *)src1, nb1);
//    printf("Result after ft_strncat: %s\n", dest1);
//    printf("Expected result: Hello, world\n");
//    printf("\n");

//    // Test Case 2
//    char dest2[20] = "Test ";
//    const char src2[] = "string";
//    unsigned int nb2 = 10; // nb2 greater than the length of src2

//    printf("Original string 2: %s\n", dest2);
//    printf("Appending %u characters from \"%s\"\n", nb2, src2);
//    ft_strncat(dest2, (char *)src2, nb2);
//    printf("Result after ft_strncat: %s\n", dest2);
//    printf("Expected result: Test string\n");
//    printf("\n");

//    // Test Case 3: Comparison with standard strncat
//    char dest3[20] = "This is a ";
//    const char src3[] = "test";
//    unsigned int nb3 = 5;

//    printf("Original string 3: %s\n", dest3);
//    printf("Appending %u characters from \"%s\"\n", nb3, src3);
//    // Using ft_strncat
//    ft_strncat(dest3, (char *)src3, nb3);
//    printf("Result after ft_strncat: %s\n", dest3);

//    // Using standard strncat for comparison
//    char dest4[20] = "This is a ";
//    strncat(dest4, src3, nb3);
//    printf("Result using strncat for comparison: %s\n", dest4);

//    return 0;
//}