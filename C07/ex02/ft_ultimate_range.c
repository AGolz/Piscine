/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 00:59:49 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/26 04:40:26 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;
	int	array_len;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	array_len = max - min;
	array = malloc(sizeof(int) * array_len);
	if (!array)
	{
		*range = 0;
		return (-1);
	}
	*range = array;
	i = 0;
	while (i < array_len)
	{
		array[i] = min + i;
		i++;
	}
	return (array_len);
}

//#include <stdio.h>
//#include <stdlib.h>

//int main(void) {
//    // Test 1: Normal range (min: 1, max: 5)
//    int *result1;
//    int size1 = ft_ultimate_range(&result1, 1, 5);
//    printf("Test 1: Range(1, 5) -> ");
//    if (size1 > 0) {
//        for (int i = 0; i < size1; i++) {
//            printf("%d ", result1[i]);
//        }
//        free(result1);
//        printf("\n");
//    } else {
//        printf("Error: Invalid range or memory allocation\n");
//    }

//    // Test 2: Range with negative values (min: -3, max: 2)
//    int *result2;
//    int size2 = ft_ultimate_range(&result2, -3, 2);
//    printf("Test 2: Range(-3, 2) -> ");
//    if (size2 > 0) {
//        for (int i = 0; i < size2; i++) {
//            printf("%d ", result2[i]);
//        }
//        free(result2);
//        printf("\n");
//    } else {
//        printf("Error: Invalid range or memory allocation\n");
//    }

//    // Test 3: Range with min >= max (min: 8, max: 5)
//    int *result3;
//    int size3 = ft_ultimate_range(&result3, 8, 5);
//    printf("Test 3: Range(8, 5) -> ");
//    if (size3 >= 0) {
//        if (size3 == 0) {
//            printf("(Empty Range)\n");
//        } else {
//            for (int i = 0; i < size3; i++) {
//                printf("%d ", result3[i]);
//            }
//            free(result3);
//            printf("\n");
//        }
//    } else {
//        printf("Error: Invalid range or memory allocation\n");
//    }

//    // Test 4: Empty range (min: 5, max: 5)
//    int *result4;
//    int size4 = ft_ultimate_range(&result4, 5, 5);
//    printf("Test 4: Range(5, 5) -> ");
//    if (size4 == 0) {
//        printf("(Empty Range)\n");
//    } else {
//        printf("Error: Expected an empty range\n");
//    }

//    return 0;
//}