/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:39:14 by elmaksim          #+#    #+#             */
/*   Updated: 2023/12/07 17:35:51 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ascending(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (++i < length)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			return (0);
	}
	return (1);
}

int	ft_descending(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (++i < length)
	{
		if (f(tab[i - 1], tab[i]) < 0)
			return (0);
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	if (ft_ascending(tab, length, f) || ft_descending(tab, length, f))
		return (1);
	return (0);
}

//int square(int n, int i)
//{
//    if (n > i)
//	  return (1);
//	else
//		return (-1);
//}
//#include <stdio.h>
//int main(void)
//{
//    // Test array
//    int arr[] = {1, 2, 3, 4, 5};
//    int length = sizeof(arr) / sizeof(arr[0]);

//    // Test the ft_is_sort function with the ft_ascending function
//    int result_ascending = ft_is_sort(arr, length, &square);

//    // Print the results
//    if (result_ascending == 1)
//        printf("The array is sorted in ascending order.\n");
//    else
//        printf("The array is not sorted in ascending order.\n");
//    return 0;
//}