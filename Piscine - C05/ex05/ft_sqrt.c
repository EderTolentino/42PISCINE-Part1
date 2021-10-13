/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:31:13 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/08/18 19:37:13 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_sqrt(int nb)
{
	int	square;

	square = 1;
	if (nb > 0)
	{
		while (square * square <= nb)
		{
			if (square * square == nb)
				return (square);
			else if (square >= 46341)
				return (0);
			square++;
		}
	}
	return (0);
}

/*#include <stdio.h>

int	ft_sqrt(int b);

int main(void)
{
	printf("Raiz de 4 -  %d\n", ft_sqrt(4));
	printf("Raiz de 0 - %d\n", ft_sqrt(0));
	printf("Raiz de 1 - %d\n", ft_sqrt(1));
	printf("Raiz de -4 - %d\n", ft_sqrt(-4));
	printf("Raiz de 100 - %d\n", ft_sqrt(100));
	printf("Raiz de 2147483646 - %d\n", ft_sqrt(2147483646));
}*/
