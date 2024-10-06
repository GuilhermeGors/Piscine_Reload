/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:59:47 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/06 12:17:45 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				index;
	int				*array;
	unsigned int	min_sign;
	unsigned int	max_sign;

	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	if (!array)
		return (NULL);
	index = 0;
	while (min < max)
	{
		array[index] = min;
		index++;
		min++;
	}
	return (array);
}
/*
#include <stdio.h>

int main(void)
{
    int min = -9;
    int max = -4;
    int index = 0;

    int *array = ft_range(min, max);

    if (array == NULL)
    {
        printf("error\n");
        return 1;
    }

    while (index < (max - min))
    {
        printf("array[%d]: %d\n", index, array[index]);
        index++;
    }

    free(array);
    return 0;
}*/