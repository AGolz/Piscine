/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:38:45 by elmaksim          #+#    #+#             */
/*   Updated: 2023/12/07 21:13:22 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

//#include <stdio.h>

//int contains_letter_a(char *str)
//{
//    while (*str)
//    {
//        if (*str == 'a')
//            return 1; // Return 1 if 'a' is found in the string
//        str++;
//    }
//    return 0; // Return 0 if 'a' is not found in the string
//}

//int main(void)
//{
//    // Test array of strings
//    char *arr[] = {"apple", "banana", "cherry", "date", NULL};

//    // Test the ft_any function with the contains_letter_a function
//    int result = ft_any(arr, &contains_letter_a);

//    // Print the result
//    if (result)
//        printf("At least one string contains the letter 'a'\n");
//    else
//        printf("No string contains the letter 'a'\n");

//    return 0;
//}