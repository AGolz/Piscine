/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 06:29:35 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/19 07:52:34 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (*to_find == '\0')
		return ((char *)str);
	while (*str)
	{
		i = 0;
		while (str[i] == to_find[i])
		{
			if (to_find[i + 1] == '\0')
				return ((char *)str);
			i++;
		}
		str++;
	}
	return (0);
}

//#include <stdio.h>
//#include <string.h>

//int main(void)
//{
//    const char *test_strings[] = {
//        "Hello, world!",
//        "This is a test string.",
//        "Searching for a substring.",
//        "Some string",
//        "Substring",
//        "abcd",
//        ""
//    };

//    const char *to_find = "is";

//    printf("Testing ft_strstr:\n");
//    for (int i = 0; i < sizeof(test_strings) / sizeof(test_strings[0]); ++i)
//    {
//        char *result = ft_strstr((char *)test_strings[i], (char *)to_find);
//        printf("Original: \"%s\", To Find: \"%s\", Result: \"%s\"\n", 
//test_strings[i], to_find, result ? result : "NULL");
//    }

//    printf("\nTesting strstr (standard library function) for comparison:\n");
//    for (int i = 0; i < sizeof(test_strings) / sizeof(test_strings[0]); ++i)
//    {
//        char *result = strstr(test_strings[i], to_find);
//        printf("Original: \"%s\", To Find: \"%s\", Result: \"%s\"\n", 
//test_strings[i], to_find, result ? result : "NULL");
//    }

//    return 0;
//}