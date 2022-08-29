/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:25:07 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/17 19:50:16 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{	
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main() 
{
	char str1[] = "ceci est une chaine de caracteres";
 	char str2[34];

	printf("%s", ft_strncpy(str2, str1, 10));
	
}*/
