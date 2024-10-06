/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:26:14 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/06 12:14:56 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = malloc(strlen (src) + 1);
	sft_strcpy(dest, src);
	if (dest == NULL)
		return (NULL);
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
    char s1[] = "teste1";
    char s2[] = "teste2";

    printf("ft_strdup: %s\n",ft_strdup(s1));
    printf("strup: %s", strdup(s2));
}
*/