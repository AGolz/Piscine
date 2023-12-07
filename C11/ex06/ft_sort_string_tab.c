/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:40:32 by elmaksim          #+#    #+#             */
/*   Updated: 2023/12/07 21:26:12 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			if (tab[j + 1] && ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

//#include <stdio.h>
//int main(void)
//{
//    // Test ft_strcmp
//    char str1[] = "apple";
//    char str2[] = "banana";
//    char str3[] = "apple";
//    int cmp_result1 = ft_strcmp(str1, str2);
//    int cmp_result2 = ft_strcmp(str1, str3);

//    printf("Comparison Result 1: %d\n", cmp_result1); 
//// Expected output: Negative value
//    printf("Comparison Result 2: %d\n", cmp_result2); 
//// Expected output: 0
//    // Test ft_sort_string_tab
//    char *string_tab[] = {"banana", "apple", "orange", "grape", "pear"};
//    printf("Original String Tab:\n");
//    for (int i = 0; string_tab[i] != NULL; i++)
//    {
//        printf("%s\n", string_tab[i]);
//    }

//    ft_sort_string_tab(string_tab);

//    printf("\nSorted String Tab:\n");
//    for (int i = 0; string_tab[i] != NULL; i++)
//    {
//        printf("%s\n", string_tab[i]);
//    }

//    return 0;
//}