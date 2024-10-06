/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 08:37:59 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/06 12:33:15 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != NULL)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

int	count_one(char *str)
{
	if (str[0] == '1')
		return (1);
	return (0);
}
/*
int main(void)
{
    char *tab[] = {"101", "001", "111", "000", NULL};    
    int num;

    num = ft_count_if(tab, &count_one);    

    printf("num is: %d\n", num);
    return 0;
}*/