/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:59:49 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/16 16:03:37 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		++i;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	str1[] = "string5";
	char	str2[] = "string";
	printf("%d", ft_strcmp(str1, str2)); 
}*/
