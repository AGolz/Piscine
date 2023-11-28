/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:10:43 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/22 22:40:11 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i += 1;
	}
	return (1);
}

//#include <stdio.h>

//void run_tests() {
//    // Test case 1: Test a prime number (e.g., 13)
//    int result = ft_is_prime(13);
//    if (result == 1) {
//        printf("Test 1 Passed: ft_is_prime(13) = %d\n", result);
//    } else {
//        printf("Test 1 Failed: Expected 1, Got %d\n", result);
//    }
//    // Test case 2: Test a non-prime number (e.g., 6)
//    result = ft_is_prime(6);
//    if (result == 0) {
//        printf("Test 2 Passed: ft_is_prime(6) = %d\n", result);
//    } else {
//        printf("Test 2 Failed: Expected 0, Got %d\n", result);
//    }
//    // Test case 3: Test the number 2 (smallest prime number)
//    result = ft_is_prime(2);
//    if (result == 1) {
//        printf("Test 3 Passed: ft_is_prime(2) = %d\n", result);
//    } else {
//        printf("Test 3 Failed: Expected 1, Got %d\n", result);
//    }
//    // Test case 4: Test the number 1 (not a prime number)
//    result = ft_is_prime(1);
//    if (result == 0) {
//        printf("Test 4 Passed: ft_is_prime(1) = %d\n", result);
//    } else {
//        printf("Test 4 Failed: Expected 0, Got %d\n", result);
//    }
//    // Test case 5: Test a negative number
//    result = ft_is_prime(-7);
//    if (result == 0) {
//        printf("Test 5 Passed: ft_is_prime(-7) = %d\n", result);
//    } else {
//        printf("Test 5 Failed: Expected 0, Got %d\n", result);
//    }
//}

//int main() {
//    run_tests();
//    return 0;
//}