/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 17:29:36 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/18 13:07:54 by mcoulomb         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	destlen;
	int	i;

	destlen = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
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

	printf("%s", ft_strcat(str1, str2));
}*/
