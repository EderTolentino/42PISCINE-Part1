/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 02:02:23 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/08/18 17:12:53 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	c;
	int	result;

	c = 0;
	result = 1;
	if (power < 0)
		return (0);
	while (c < power)
	{
		result = result * nb;
		c++;
	}
	return (result);
}

/*#include <stdio.h>
int ft_iterative_power(int nb, int power);
int main ()
{
    printf("nb = -5 , power = 2 , result = %d\n", ft_iterative_power(-5, 2));
    printf("nb = 5 , power = -2 , result = %d\n", ft_iterative_power(5, -2));
    printf("nb = 3 , power = 3 , result = %d\n", ft_iterative_power(3, 3));
    printf("nb = 10 , power = 4 , result = %d\n", ft_iterative_power(10, 4));
}*/
