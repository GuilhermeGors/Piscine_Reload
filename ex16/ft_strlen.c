/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:20:55 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/06 12:45:33 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(void)
{
	char str[] = "empty";
	int	num;

	num = ft_strlen(str);
	printf("\nLenth: %d", num);
}
*/