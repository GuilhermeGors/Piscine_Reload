/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 18:23:05 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/04 19:45:46 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[] = "abcde";
    char s2[] = "abcde";
    int result;

    result = ft_strcmp(s1, s2);
    printf("s1: %s\ns2: %s\nresult: %d\n", s1, s2, result);
    result = strcmp(s1, s2);
    printf("s1: %s\ns2: %s\nresult: %d\n", s1, s2, result);

}*/