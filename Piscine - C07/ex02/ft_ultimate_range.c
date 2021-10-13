/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:45:14 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/08/24 12:00:00 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	interval;
	int	*aux;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	interval = max - min;
	aux = malloc((interval + 1) * sizeof(int));
	if (aux == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = aux;
	i = 0;
	while (min + i < max)
	{
		aux[i] = min + i;
		i++;
	}
	return (interval);
}

#include <stdio.h>
int	ft_ultimate_range(int **range, int min, int max);
int main()
{
	int **retorno = malloc(sizeof(int **));
	int min = 10;
	int max = 21;
	printf("%d\n", ft_ultimate_range(retorno, min, max));
}
