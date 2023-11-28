/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:10:24 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/22 21:59:13 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index -1));
}

//#include <stdio.h>

//void run_tests() {
//    // Test case 1: Test the Fibonacci sequence at index 0
//    int result = ft_fibonacci(0);
//    if (result == 0) {
//        printf("Test 1 Passed: ft_fibonacci(0) = %d\n", result);
//    } else {
//        printf("Test 1 Failed: Expected 0, Got %d\n", result);
//    }

//    // Test case 2: Test the Fibonacci sequence at index 1
//    result = ft_fibonacci(1);
//    if (result == 1) {
//        printf("Test 2 Passed: ft_fibonacci(1) = %d\n", result);
//    } else {
//        printf("Test 2 Failed: Expected 1, Got %d\n", result);
//    }

//    // Test case 3: Test the Fibonacci sequence at index 5
//    result = ft_fibonacci(5);
//    if (result == 5) {
//        printf("Test 3 Passed: ft_fibonacci(5) = %d\n", result);
//    } else {
//        printf("Test 3 Failed: Expected 5, Got %d\n", result);
//    }

//    // Test case 4: Test the Fibonacci sequence at a negative index
//    result = ft_fibonacci(-3);
//    if (result == -1) {
//        printf("Test 4 Passed: ft_fibonacci(-3) = %d\n", result);
//    } else {
//        printf("Test 4 Failed: Expected -1, Got %d\n", result);
//    }
//}

//int main() {
//    run_tests();
//    return 0;
//}