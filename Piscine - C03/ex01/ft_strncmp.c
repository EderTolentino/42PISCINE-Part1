/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 01:28:09 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/08/16 19:32:38 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((s1[c] == s2[c]) && (s1[c] != '\0' && s2[c] != '\0') && c < n - 1)
		c++;
	if (n == 0)
		return (0);
	else
		return (s1[c] - s2[c]);
}
