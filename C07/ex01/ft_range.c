/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 00:58:41 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/26 04:38:50 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*array;

	if (min >= max)
		return (0);
	range = max - min;
	array = malloc(sizeof(int) * range);
	if (!array)
		return (0);
	i = 0;
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

//#include <stdio.h>
//#include <stdlib.h>

//void print_array(int *arr, int size) {
//    for (int i = 0; i < size; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//}

//int main(void) {
//    // Test 1: Normal range (min: 1, max: 5)
//    int min1 = 1, max1 = 5;
//    int *result1 = ft_range(min1, max1);
//    printf("Test 1: Range(%d, %d) -> ", min1, max1);
//    if (result1) {
//        print_array(result1, max1 - min1);
//        free(result1);
//    } else {
//        printf("Error: Invalid range\n");
//    }

//    // Test 2: Range with negative values (min: -3, max: 2)
//    int min2 = -3, max2 = 2;
//    int *result2 = ft_range(min2, max2);
//    printf("Test 2: Range(%d, %d) -> ", min2, max2);
//    if (result2) {
//        print_array(result2, max2 - min2);
//        free(result2);
//    } else {
//        printf("Error: Invalid range\n");
//    }

//    // Test 3: Range with min >= max (min: 8, max: 5)
//    int min3 = 8, max3 = 5;
//    int *result3 = ft_range(min3, max3);
//    printf("Test 3: Range(%d, %d) -> ", min3, max3);
//    if (result3 == 0) {
//        printf("(Empty Range)\n");
//        free(result3);
//    } else {
//        printf("Error: Invalid range\n");
//    }

//    // Test 4: Empty range (min: 5, max: 5)
//    int min4 = 5, max4 = 5;
//    int *result4 = ft_range(min4, max4);
//    printf("Test 4: Range(%d, %d) -> ", min4, max4);
//    if (result4 == 0) {
//        printf("(Empty Range)\n");
//        free(result4);
//    } else {
//        printf("Error: Invalid range\n");
//    }

//    return 0;
//}