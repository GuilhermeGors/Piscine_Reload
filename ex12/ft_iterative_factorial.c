/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:04:15 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/06 13:58:57 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <time.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (0 > nb)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result = nb * result;
		nb--;
	}
	return (result);
}
/*
int main(void)
{
    int nb = 12;  // Valores muito grandes podem causar overflow
    clock_t start, end;
    double cpu_time_used;

    start = clock();  // Marca o início
    int result = ft_iterative_factorial(nb);
    end = clock();  // Marca o fim

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;  // Calcula o tempo
    printf("Factorial: %d\n", result);
    printf("Tempo de execução: %f segundos\n", cpu_time_used);

    return 0;
}
*/