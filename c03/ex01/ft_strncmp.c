/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 15:54:30 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/21 15:25:04 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		++i;
	return (s1[i] - s2[i]);
}

/*int	main(void)
{
	char	*str1 = "hehehe";
	char	*str2 = "heh3ehe";
	printf("%d\n", ft_strncmp(str1, str2, 5));	
	printf("%d", strncmp(str1, str2, 5));	
}*/
