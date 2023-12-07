/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 12:11:55 by elmaksim          #+#    #+#             */
/*   Updated: 2023/12/07 12:11:58 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

# include <unistd.h>

int		add(int a, int b);
int		substract(int a, int b);
int		divide(int a, int b);
int		modulo(int a, int b);
int		multiply(int a, int b);

int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	init_func_table(int (*func[5])(int, int));

#endif