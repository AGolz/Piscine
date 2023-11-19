/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 01:35:08 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/19 05:21:20 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

//#include <stdio.h>
//#include <string.h>
//int main(void) 
//{
//  char dest[10];
//  char *src = "22222";
//  printf("%s", ft_strncpy(dest ,src, 3));
//  printf("\n");
//  printf("%s", strncpy(dest ,src, 3));
//  return 0;
//}