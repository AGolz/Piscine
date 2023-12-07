/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:38:08 by elmaksim          #+#    #+#             */
/*   Updated: 2023/12/07 12:25:30 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

//#include <stdio.h>

//void double_and_print(int n)
//{
//    printf("%d ", 2 * n);
//}

//int main(void)
//{
//    // Test array
//    int arr[] = {1, 2, 3, 4, 5};
//    int length = sizeof(arr) / sizeof(arr[0]);

//    // Test the ft_foreach function with the print_square function
//    ft_foreach(arr, length, &double_and_print);

//    return 0;
//}