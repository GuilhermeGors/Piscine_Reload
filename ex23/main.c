/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 15:11:21 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/06 12:24:39 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

//#include <stdio.h>
//printf("x value: %d\ny value: %d", point.x, point.y);
int	main(void)
{
	t_point	point;

	set_point(&point);
	return (0);
}
