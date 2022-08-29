/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 09:17:50 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/18 17:17:06 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srcsize;

	i = 0;
	srcsize = 0;
	while (src[srcsize] != '\0')
		srcsize++;
	if (src[0] == '\0')
	{	
		dest[0] = '\0';
		return (0);
	}
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (srcsize);
}

/*int	main(void)
{
	char str1[] = "";
	char str2[34];

	printf("%i\n", ft_strlcpy(str2, str1, 10));
	printf("src = %s, dest = %s", str1, str2);
}*/
