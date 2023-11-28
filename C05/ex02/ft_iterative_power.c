/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:10:16 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/22 20:06:27 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (res);
}

//#include <stdio.h>

//void run_tests() {
//    // Test case 1: Test the power of a positive number (e.g., 2^3)
//    int result = ft_iterative_power(2, 3);
//    if (result == 8) {
//        printf("Test 1 Passed: ft_iterative_power(2, 3) = %d\n", result);
//    } else {
//        printf("Test 1 Failed: Expected 8, Got %d\n", result);
//    }
//    // Test case 2: Test the power of 0 (e.g., 0^5)
//    result = ft_iterative_power(0, 5);
//    if (result == 0) {
//        printf("Test 2 Passed: ft_iterative_power(0, 5) = %d\n", result);
//    } else {
//        printf("Test 2 Failed: Expected 0, Got %d\n", result);
//    }
//    // Test case 3: Test the power with an exponent of 1 (e.g., 4^1)
//    result = ft_iterative_power(4, 1);
//    if (result == 4) {
//        printf("Test 3 Passed: ft_iterative_power(4, 1) = %d\n", result);
//    } else {
//        printf("Test 3 Failed: Expected 4, Got %d\n", result);
//    }
//    // Test case 4: Test the power with a negative exponent (e.g., 3^(-2))
//    result = ft_iterative_power(3, -2);
//    if (result == 0) {
//        printf("Test 4 Passed: ft_iterative_power(3, -2) = %d\n", result);
//    } else {
//        printf("Test 4 Failed: Expected 0, Got %d\n", result);
//    }
//	// Test case 5: Test the power and nb == 0;
//	result = ft_iterative_power(0, 0);
//    if (result == 1) {
//        printf("Test 5 Passed: ft_iterative_power(0, 0) = %d\n", result);
//    } else {
//        printf("Test 5 Failed: Expected 1, Got %d\n", result);
//    }
//}
//int main() {
//    run_tests();
//    return 0;
//}