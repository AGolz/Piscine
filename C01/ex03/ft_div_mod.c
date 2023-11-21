/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:33:20 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/17 00:24:10 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//int	main(void)
//{
//	int a;
//	int b;
//	int div;
//	int mod;
//	a = 42;
//	b = 9;
//	div = 0;
//	mod = 0;	
//	ft_div_mod(a, b, &div, &mod);
//	printf("%d" "\n" "%d" "\n", div, mod);
//	return (0);
//}