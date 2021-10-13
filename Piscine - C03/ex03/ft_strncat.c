/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 01:29:12 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/08/16 00:35:19 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				c;
	int unsigned	i;

	c = 0;
	i = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
	return (dest);
}
