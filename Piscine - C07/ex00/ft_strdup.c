/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eluiz-to <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 17:24:38 by eluiz-to          #+#    #+#             */
/*   Updated: 2021/08/24 11:54:26 by eluiz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		size;

	size = ft_strlen(src);
	copy = (char *)malloc((size + 1) * sizeof(char));
	if (copy == NULL)
		return (0);
	ft_strcpy(copy, src);
	return (copy);
}

#include <stdio.h>

int	ft_strlen(char *src);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);

int main(void)
{
	char	*string = "Estou funcionando";
	char	*result;

	result = ft_strdup(string);

	printf("RES - %s\n", result);
}
