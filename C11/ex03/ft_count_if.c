/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:39:01 by elmaksim          #+#    #+#             */
/*   Updated: 2023/12/07 17:35:37 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (*tab && i < length)
	{
		if (f(*tab))
			j++;
		i++;
		tab++;
	}
	return (j);
}

//#include <stdio.h>
//int has_more_than_three_chars(char *str)
//{
//    int count = 0;
//    while (*str)
//    {
//        count++;
//        str++;
//    }
//    return count > 3; // Return 1 if than three characters, 0 otherwise
//}

//int main(void)
//{
//    // Test array of strings
//    char *arr[] = {"one", "two", "three", "four", NULL};
//    int length = 4;
//    int result = ft_count_if(arr, length, &has_more_than_three_chars);
//    // Print the result
//    printf("Number of strings with more than three characters: %d\n", result);

//    return 0;
//}