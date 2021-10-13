/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 01:29:40 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/08/16 00:00:45 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	int	n;
	int	m;

	if (*to_find == 0)
		return (str);
	n = 0;
	while (str[n] != '\0')
	{
		m = 0;
		while (to_find[m] == str[n + m])
		{
			if (to_find[m + 1] == '\0')
			{
				return (str + n);
			}
			m++;
		}
		n++;
	}
	return (0);
}
