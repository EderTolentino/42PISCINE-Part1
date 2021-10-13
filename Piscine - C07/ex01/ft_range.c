/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:59:25 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/08/24 11:56:40 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;
	int	range;

	if (min >= max)
		return (0);
	range = max - min;
	array = malloc((range + 1) * sizeof(int));
	if (array == NULL)
		return (0);
	i = 0;
	while (min + i < max)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

#include <stdio.h>
int	*ft_range(int min, int max);

int	main(void)
{
	int	*result;
	int	min = 10;
	int max = 21;
	int i;

	i = 0;
	while (min + i < max)
	{
		printf("RES - %d\n", ft_range(min, max)[i]);
		i++;
		
	}
	return (0);

	int	arr[10] = {1, 2 , 3 ,4 , 5, 6, 7, 8, 9}
}
