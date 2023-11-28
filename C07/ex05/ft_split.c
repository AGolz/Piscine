/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 03:00:32 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/26 06:30:56 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	check_separator(char c, const char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

static int	count_strings(const char *str, const char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && check_separator(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !check_separator(str[i], charset))
			i++;
	}
	return (count);
}

static size_t	ft_strlen_sep(const char *str, const char *charset)
{
	size_t	i;

	i = 0;
	while (str[i] && !check_separator(str[i], charset))
		i++;
	return (i);
}

static char	*ft_word(const char *str, const char *charset)
{
	size_t		len_word;
	size_t		i;
	char		*word;

	i = 0;
	len_word = ft_strlen_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (len_word + 1));
	while (i < len_word)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		word_count;
	char	**strings;
	int		i;

	i = 0;
	word_count = count_strings(str, charset);
	strings = (char **)malloc(sizeof(char *) * (word_count + 1));
	while (*str != '\0')
	{
		while (*str != '\0' && check_separator(*str, charset))
			str++;
		if (*str != '\0')
		{
			strings[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !check_separator(*str, charset))
			str++;
	}
	strings[i] = NULL;
	return (strings);
}

//#include <stdio.h>

//int main(void)
//{
//    // Test 1: Split with space separator
//    char *str1 = "Hello World";
//    char *charset1 = " ";
//    char **result1 = ft_split(str1, charset1);
//    printf("Test 1: Split \"%s\" with space separator: [", str1);
//    for (int i = 0; result1[i] != NULL; i++) {
//        printf("\"%s\", ", result1[i]);
//        free(result1[i]);
//    }
//    printf("NULL]\n");
//    free(result1);

//    // Test 2: Split with comma separator
//    char *str2 = "Apple,Orange,Banana";
//    char *charset2 = ",";
//    char **result2 = ft_split(str2, charset2);
//    printf("Test 2: Split \"%s\" with comma separator: [", str2);
//    for (int i = 0; result2[i] != NULL; i++) {
//        printf("\"%s\", ", result2[i]);
//        free(result2[i]);
//    }
//    printf("NULL]\n");
//    free(result2);

//    // Test 3: Split with multiple separators
//    char *str3 = "One;Two-Three";
//    char *charset3 = ";-";
//    char **result3 = ft_split(str3, charset3);
//    printf("Test 3: Split \"%s\" with multiple separators: [", str3);
//    for (int i = 0; result3[i] != NULL; i++) {
//        printf("\"%s\", ", result3[i]);
//        free(result3[i]);
//    }
//    printf("NULL]\n");
//    free(result3);

//    // Test 4: Split with no separator
//    char *str4 = "NoSeparator";
//    char *charset4 = " ";
//    char **result4 = ft_split(str4, charset4);
//    printf("Test 4: Split \"%s\" with no separator: [", str4);
//    for (int i = 0; result4[i] != NULL; i++) {
//        printf("\"%s\", ", result4[i]);
//        free(result4[i]);
//    }
//    printf("NULL]\n");
//    free(result4);

//    return 0;
//}