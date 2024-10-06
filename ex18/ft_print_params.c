/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:45:10 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/04 19:49:57 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}
/*
#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
*/

int	main(int argc, char *argv[])
{
	int	index;
	int	i;

	index = 1;
	i = 0;
	if (argc > 1)
	{
		while (index != argc)
		{
			ft_putstr(argv[index]);
			index++;
		}
	}
	return (0);
}
