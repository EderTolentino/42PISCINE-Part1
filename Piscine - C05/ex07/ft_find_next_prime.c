/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:16:31 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/08/18 17:26:52 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 2)
		return (1);
	if (nb < 2 || nb % 2 == 0)
		return (0);
	i = 3;
	while (i < nb / 2 )	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}

/*#include <stdio.h>

int ft_find_next_prime(int nb);

int main (void)
{
    printf("Num -4 retorna %d\n", ft_find_next_prime(-4));
    printf("Num 0 retorna %d\n", ft_find_next_prime(0));
    printf("Num 1 retorna %d\n", ft_find_next_prime(1));
    printf("Num 2 retorna %d\n", ft_find_next_prime(2));
    printf("Num 4 retorna %d\n", ft_find_next_prime(4));
    printf("Num 13 retorna %d\n", ft_find_next_prime(13));
    printf("Num 16 retorna %d\n", ft_find_next_prime(16));
    printf("Num 17 retorna %d\n", ft_find_next_prime(17));
    printf("Num 28 retorna %d\n", ft_find_next_prime(28));
}*/
