/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:33:38 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/17 00:27:42 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	k;
	int	cnt;

	cnt = 0;
	while (cnt < (size - 1))
	{
		if (tab[cnt] > tab[cnt + 1])
		{
			k = tab[cnt];
			tab[cnt] = tab[cnt + 1];
			tab[cnt + 1] = k;
			cnt = 0;
		}
		else
			cnt++;
	}
}

//int		main(void)
//{
//	int tab[] = {2, 1, 5, 0, 5, 8, 3};
//	int size = 7;
//	int i = 0;
//	ft_sort_int_tab(tab, size);
//	while (size > 0)
//	{
//		printf("%d" ",", tab[i]);
//		i++;
//		size--;
//	}
//	return 0;
//}