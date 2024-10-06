/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 13:04:15 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/04 19:25:45 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <time.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	result;

	if (nb == 0)
		return (1);
	result = nb;
	while (nb > 1)
	{
		nb--;
		result = nb * result;
	}
	return (result);
}
/*
int main(void)
{
    int nb = 0;  // Valores muito grandes podem causar overflow
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