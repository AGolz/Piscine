/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 09:39:56 by elmaksim          #+#    #+#             */
/*   Updated: 2023/12/07 12:02:58 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_do_op.h"

static int	is_op(char c)
{
	return (c == '+' || c == '-' || c == '*' || c == '/' || c == '%');
}

static int	op_index(char op)
{
	if (op == '+')
		return (0);
	if (op == '-')
		return (1);
	if (op == '/')
		return (2);
	if (op == '%')
		return (3);
	return (4);
}

void	init_func_table(int (*func[5])(int, int))
{
	func[0] = add;
	func[1] = substract;
	func[2] = divide;
	func[3] = modulo;
	func[4] = multiply;
}

int	main(int argc, char **argv)
{
	int		nb;
	int		check_op;
	int		(*func[5])(int, int);
	char	op;

	if (argc != 4)
		return (0);
	check_op = is_op((op = argv[2][0]));
	if (!argv[2] || argv[2][1] || !check_op)
	{
		write(1, "0\n", 2);
		return (0);
	}
	init_func_table(func);
	nb = ft_atoi(argv[3]);
	if (nb == 0 && (op == '/' || op == '%'))
	{
		if (op == '/' )
			write(1, "Stop : division by zero\n", 24);
		if (op == '%' )
			write(1, "Stop : modulo by zero\n", 22);
		return (0);
	}
	ft_putnbr(func[op_index(op)](ft_atoi(argv[1]), nb));
	write(1, "\n", 1);
}
