/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 22:29:58 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/22 22:39:36 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (nb >= 2)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

//#include <stdio.h>

//void run_tests() {
//    // Test case 1: Test finding the next prime after 5
//    int result = ft_find_next_prime(5);
//    if (result == 5) {
//        printf("Test 1 Passed: ft_find_next_prime(5) = %d\n", result);
//    } else {
//        printf("Test 1 Failed: Expected 5, Got %d\n", result);
//    }
//    // Test case 2: Test finding the next prime after 11
//    result = ft_find_next_prime(11);
//    if (result == 11) {
//        printf("Test 2 Passed: ft_find_next_prime(11) = %d\n", result);
//    } else {
//        printf("Test 2 Failed: Expected 11, Got %d\n", result);
//    }
//    // Test case 3: Test finding the next prime after 20
//    result = ft_find_next_prime(20);
//    if (result == 23) {
//        printf("Test 3 Passed: ft_find_next_prime(20) = %d\n", result);
//    } else {
//        printf("Test 3 Failed: Expected 23, Got %d\n", result);
//    }
//    // Test case 4: Test finding the next prime after 0
//    result = ft_find_next_prime(0);
//    if (result == 2) {
//        printf("Test 4 Passed: ft_find_next_prime(0) = %d\n", result);
//    } else {
//        printf("Test 4 Failed: Expected 2, Got %d\n", result);
//    }
//    // Test case 5: Test finding the next prime after a negative number
//    result = ft_find_next_prime(-5);
//    if (result == 2) {
//        printf("Test 5 Passed: ft_find_next_prime(-5) = %d\n", result);
//    } else {
//        printf("Test 5 Failed: Expected 2, Got %d\n", result);
//    }
//}

//int main() {
//    run_tests();
//    return 0;
//}