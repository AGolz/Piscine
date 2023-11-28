/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 00:59:46 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/26 15:08:26 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static size_t	ft_final_len(char **strs, int size, size_t sep_len)
{
	size_t	final_len;
	int		i;

	final_len = 0;
	i = 0;
	while (i < size)
	{
		final_len += ft_strlen(strs[i]);
		if (i < size - 1)
			final_len += sep_len;
		i++;
	}
	return (final_len);
}

void	ft_copy_strings(char *dest, char **strs, int size, char *sep)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_strcpy(dest, strs[i]);
		dest += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(dest, sep);
			dest += ft_strlen(sep);
		}
		i++;
	}
	*dest = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	size_t	full_length;
	char	*string;
	char	*res_ptr;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_length = ft_final_len(strs, size, ft_strlen(sep));
	string = malloc(sizeof(char) * (full_length + 1));
	if (!string)
		return (NULL);
	res_ptr = string;
	ft_copy_strings(res_ptr, strs, size, sep);
	return (string);
}

//#include <stdio.h>
//int main(void) {
//	// Test 1: Concatenate three strings with a comma separator
//	char *strs1[] = {"One", "Two", "Three"};
//	char *sep1 = ",";
//	char *result1 = ft_strjoin(3, strs1, sep1);
//	printf("Test 1: Result: \"%.*s\"\n", (int)ft_final_len(strs1, 
//3, ft_strlen(sep1)), result1);
//	free(result1);

//	// Test 2: Concatenate two strings with a space separator
//	char *strs2[] = {"Hello", "World"};
//	char *sep2 = " ";
//	char *result2 = ft_strjoin(2, strs2, sep2);
//	printf("Test 2: Result: \"%.*s\"\n", (int)ft_final_len(strs2, 2, 
//ft_strlen(sep2)), result2);
//	free(result2);

//	// Test 3: Concatenate an empty array with a hyphen separator
//	char *strs3[] = {};
//	char *sep3 = "-";
//	char *result3 = ft_strjoin(0, strs3, sep3);
//	printf("Test 3: Result: \"%s\"\n", result3);
//	free(result3);

//	// Test 4: Concatenate a single string with no separator
//	char *strs4[] = {"SingleString"};
//	char *sep4 = "_";
//	char *result4 = ft_strjoin(1, strs4, sep4);
//	printf("Test 4: Result: \"%.*s\"\n", (int)ft_final_len(strs4, 1, 
//ft_strlen(sep4)), result4);
//	free(result4);

//	// Test 5: Two strings
//	char *strs5[] = {"String", "TwoString"};
//	char *sep5 = "*";
//	char *result5 = ft_strjoin(2, strs5, sep5);
//	printf("Test 5: Result: \"%.*s\"\n", (int)ft_final_len(strs5, 2, 
//ft_strlen(sep5)), result5);
//	free(result5);

//	return 0;
//}
