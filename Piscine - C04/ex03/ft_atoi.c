/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 14:44:52 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/08/18 00:09:06 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	count;
	int	signal;
	int	result;

	count = 0;
	signal = 1;
	result = 0;
	while ((str[count] >= '\t' && str[count] <= '\r') || str[count] == ' ')
		count++;
	while (str[count] == '+' || str[count] == '-')
	{
		if (str[count] == '-')
			signal *= -1;
		count++;
	}
	while (str[count] >= '0' && str[count] <= '9')
	{
		result = (result * 10) + (str[count] - '0');
		count++;
	}
	return (result * signal);
}
