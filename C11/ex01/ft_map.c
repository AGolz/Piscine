/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:38:31 by elmaksim          #+#    #+#             */
/*   Updated: 2023/12/07 12:27:39 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*buff;

	i = 0;
	buff = malloc(sizeof(int) * length);
	if (!buff)
		return (0);
	while (i < length)
	{
		buff[i] = f(tab[i]);
		i++;
	}
	return (buff);
}

//#include <stdio.h>
//int square(int n)
//{
//    return n * n;
//}

//int main(void)
//{
//    // Test array
//    int arr[] = {1, 2, 3, 4, 5};
//    int length = sizeof(arr) / sizeof(arr[0]);

//    int *result = ft_map(arr, length, &square);

//    // Print the result
//    printf("Original array: ");
//    for (int i = 0; i < length; i++)
//    {
//        printf("%d ", arr[i]);
//    }

//    printf("\nSquared array: ");
//    for (int i = 0; i < length; i++)
//    {
//        printf("%d ", result[i]);
//    }
//    free(result);

//    return 0;
//}