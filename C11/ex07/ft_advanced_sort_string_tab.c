/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:40:48 by elmaksim          #+#    #+#             */
/*   Updated: 2023/12/07 17:37:12 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*tmp;

	j = 0;
	while (!j)
	{
		i = 0;
		j = 1;
		while (tab[++i])
		{
			if (cmp(tab[i - 1], tab[i]) > 0)
			{
				tmp = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = tmp;
				j = 0;
			}
		}
	}
}

//#include <stdio.h>
//int compare_descending(char *s1, char *s2)
//{
//    return ft_strcmp(s2, s1);
//}

//int main(void)
//{
//    // Test ft_advanced_sort_string_tab with custom comparison function
//    char *string_tab[] = {"banana", "apple", "orange", "grape", "pear"};

//    printf("Original String Tab:\n");
//    for (int i = 0; string_tab[i] != NULL; i++)
//    {
//        printf("%s\n", string_tab[i]);
//    }

//    ft_advanced_sort_string_tab(string_tab, compare_descending);

//    printf("\nAdvanced Sorted String Tab (Descending Order):\n");
//    for (int i = 0; string_tab[i] != NULL; i++)
//    {
//        printf("%s\n", string_tab[i]);
//    }

//    return 0;
//}
