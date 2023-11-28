/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:54:42 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/21 22:48:53 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

//#include <stdio.h>
//#include <string.h>

//void test_strlen(char *test_string) {
//    // Using the provided function
//    int custom_length = ft_strlen(test_string);
//    // Using the standard library function for comparison
//    int standard_length = strlen(test_string);
//    // Checking if both lengths match
//    if (custom_length == standard_length) {
//        printf("PASS: Length of \"%s\" is %d\n", test_string, custom_length);
//    } else {
//        printf("FAIL: Length of \"%s\" is %d (custom) vs %d (standard)\n",
//test_string, custom_length, standard_length);
//    }
//}
//int main() {
//    // Test cases
//    test_strlen("");               // Empty string
//    test_strlen("Hello");           // String with characters
//    test_strlen("Test123");         // Alphanumeric string
//    test_strlen("   ");             // String with spaces
//    test_strlen("Special\tChars");  // String with special characters and tabs
//    test_strlen("\nNewline\n");     // String with newline characters

//    return 0;
//}