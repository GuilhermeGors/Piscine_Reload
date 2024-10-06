/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 18:57:46 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/06 12:31:07 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i != length)
	{
		f(tab[i]);
		i++;
	}
}
/*
#include <stdio.h>

void    ft_double(int i)
{
    i*= 2;
    printf("i: %d \n", i);
}

int main(void)
{
    int tab[10] = {0, 1, 2, 3, 5 ,4 , 6, 7, 8, 9};
    
    ft_foreach(tab, 10, &ft_double);
    return 0;
}
*/