/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:54:39 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/21 23:10:22 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

//#include <stdio.h>
//#include <string.h>
//// Test function to compare the custom implementation with the 
//standard library function
//void test_putstr(char *test_string, char *expected_output) {

//    // Using the provided function
//    ft_putstr(test_string);

//    // Compare the printed output with the expected output
//    if (strcmp(test_string, expected_output) == 0) {
//        printf(" |  PASS: \"%s\" was printed correctly\n", test_string);
//    } else {
//        printf(" |  FAIL: For \"%s\", expected \"%s\", but got \"%s\"\n",
// test_string, expected_output, test_string);
//    }
//}

//int main() {
//    // Test cases
//    test_putstr("Hello, World!", "Hello, World!");            // Simple string
//    test_putstr("12345", "12345");                           // Numeric string
//    test_putstr("Special\tCharacters\n", "Special\tCharacters\n");  // String 
//with tabs and newline characters
//    test_putstr("", "");                                     // Empty string
//    test_putstr("   ", "   ");                               // String with 
//spaces
//    return 0;
//}