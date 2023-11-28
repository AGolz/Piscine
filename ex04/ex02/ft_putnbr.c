/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 19:54:47 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/21 23:13:43 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

//#include <stdio.h>
//// Test function to compare the custom implementation 
//with the standard library function
//void test_putnbr(int test_number) {
//    // Using the provided function
//    ft_putnbr(test_number);
//    // Compare the printed output with the expected output
//    printf("   |   Expected: %d\n", test_number);
//}

//int main() {
//    // Test cases
//    test_putnbr(0);              // Test with zero
//    test_putnbr(123);            // Positive integer
//    test_putnbr(-456);           // Negative integer
//    test_putnbr(2147483647);     // Maximum positive integer (int)
//    test_putnbr(-2147483648);    // Minimum negative integer (int)

//    return 0;
//}