/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_interval.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 08:24:53 by elmaksim          #+#    #+#             */
/*   Updated: 2023/11/19 08:32:59 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	if (ac != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	write(1, &av[1][0], 1);
	while (av[1][i] != '\0')
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "3", 2);
		else if (i % 5 == 0)
			write(1, "3", 1);
		else if (i % 3 == 0)
			write(1, "5", 1);
		else
			write(1, &av[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
