/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:10:29 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/22 22:10:55 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	j;

	j = nb;
	if (j <= 0)
		return (0);
	if (j == 1)
		return (1);
	i = 2;
	if (j >= 2)
	{
		while (i * i <= j)
		{
			if (i * i == j)
				return (i);
			i++;
		}
	}
	return (0);
}

//#include <stdio.h>

//void run_tests() {
//    // Test case 1: Test the square root of a perfect square (e.g., 9)
//    int result = ft_sqrt(9);
//    if (result == 3) {
//        printf("Test 1 Passed: ft_sqrt(9) = %d\n", result);
//    } else {
//        printf("Test 1 Failed: Expected 3, Got %d\n", result);
//    }
//    // Test case 2: Test the square root of a non-perfect square (e.g., 16)
//    result = ft_sqrt(16);
//    if (result == 4) {
//        printf("Test 2 Passed: ft_sqrt(16) = %d\n", result);
//    } else {
//        printf("Test 2 Failed: Expected 4, Got %d\n", result);
//    }
//    // Test case 3: Test the square root of 1
//    result = ft_sqrt(1);
//    if (result == 1) {
//        printf("Test 3 Passed: ft_sqrt(1) = %d\n", result);
//    } else {
//        printf("Test 3 Failed: Expected 1, Got %d\n", result);
//    }
//    // Test case 4: Test the square root of 0
//    result = ft_sqrt(0);
//    if (result == 0) {
//        printf("Test 4 Passed: ft_sqrt(0) = %d\n", result);
//    } else {
//        printf("Test 4 Failed: Expected 0, Got %d\n", result);
//    }
//    // Test case 5: Test the square root of a negative number
//    result = ft_sqrt(-25);
//    if (result == 0) {
//        printf("Test 5 Passed: ft_sqrt(-25) = %d\n", result);
//    } else {
//        printf("Test 5 Failed: Expected 0, Got %d\n", result);
//    }
//}

//int main() {
//    run_tests();
//    return 0;
//}