/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:33:35 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/17 00:27:45 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	k;

	i = 0;
	n = size - 1;
	while (i < (size / 2))
	{
		k = tab[i];
		tab[i] = tab[n];
		tab[n] = k;
		i++;
		n--;
	}
}

//int		main(void)
//{
//	int tab[] = {0, 1, 2, 3, 4, 5};
//	int size = 6;
//	int i = 0;
//	ft_rev_int_tab(tab, size);
//	while (size > 0)
//	{
//		printf("%d" ",", tab[i]);
//		i++;
//		size--;
//	}
//	return (0);
//}