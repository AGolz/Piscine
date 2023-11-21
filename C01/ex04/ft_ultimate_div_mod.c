/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:33:24 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/17 00:24:35 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp_a;
	int	tmp_b;

	tmp_a = *a / *b;
	tmp_b = *a % *b;
	*a = tmp_a;
	*b = tmp_b;
}

//int	main(void)
//{
//	int a;
//	int b;
//	a = 42;
//	b = 5;
//	ft_ultimate_div_mod(&a, &b);
//	printf("%d" "\n" "%d", a, b);
//	return (0);
//}
