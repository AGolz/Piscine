/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 01:35:04 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/18 23:43:09 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//#include <stdio.h>
//#include <string.h>
//int main()
//{
//  char src[] = "123";
//  char dest[5];
//  char dest2[5];
//  ft_strcpy(dest, src);
//  strcpy(dest2,src); 
//  printf("%s dest", dest);
//  printf("\n");
//  printf("%s dest2",dest2);
//}