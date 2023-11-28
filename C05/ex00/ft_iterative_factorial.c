/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:10:06 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/22 19:49:55 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (res);
}

//#include <stdio.h>

//void run_tests() {
//    // Test case 1: Test the factorial of a positive number
//    int result = ft_iterative_factorial(5);
//    if (result == 120) {
//        printf("Test 1 Passed: ft_iterative_factorial(5) = %d\n", result);
//    } else {
//        printf("Test 1 Failed: Expected 120, Got %d\n", result);
//    }
//    // Test case 2: Test the factorial of 0
//    result = ft_iterative_factorial(0);
//    if (result == 1) {
//        printf("Test 2 Passed: ft_iterative_factorial(0) = %d\n", result);
//    } else {
//        printf("Test 2 Failed: Expected 1, Got %d\n", result);
//    }
//    // Test case 3: Test the factorial of a negative number
//    result = ft_iterative_factorial(-5);
//    if (result == 0) {
//        printf("Test 3 Passed: ft_iterative_factorial(-5) = %d\n", result);
//    } else {
//        printf("Test 3 Failed: Expected 0, Got %d\n", result);
//    }
//}
//int main() {
//    run_tests();
//    return 0;
//}