/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:57:21 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/18 13:08:47 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	destlen;
	unsigned int	i;

	destlen = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		dest[destlen + i] = src[i];
		++i;
	}
	dest[destlen + i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	str1[] = "hello";
	char	str2[] = "world";

	printf("%s", ft_strncat(str1, str2, 2));
}*/
