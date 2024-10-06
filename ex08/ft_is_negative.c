/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:32:16 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/04 19:13:54 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}
/*
#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

int     main(void)
{
	int n;

	n = -2;
    ft_is_negative(n);
}
*/