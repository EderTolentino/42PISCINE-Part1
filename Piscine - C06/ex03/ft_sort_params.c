/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 23:16:40 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/08/19 22:32:36 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp( char *s1, char *s2)
{
	int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0' && s2[c] != '\0'))
		c++;
	return (s1[c] - s2[c]);
}

void	ft_putstr(char *str)
{
	int	leng;

	leng = 0;
	while (str[leng] != '\0')
	{
		write(1, &str[leng], 1);
		leng++;
	}
	write(1, "\n", 1);
}

void	ft_order_argv(int size, char **arr)
{
	int		i;
	int		j;
	char	*aux;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(arr[i], arr[j]) > 0)
			{
				aux = arr[i];
				arr[i] = arr[j];
				arr[j] = aux;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc > 1)
	{
		ft_order_argv(argc, argv);
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			i++;
		}
	}
	return (0);
}
