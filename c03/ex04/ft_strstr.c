/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 18:10:20 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/21 14:50:40 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			++j;
		}
		++i;
	}
	return (0);
}

/*int	main(void)
{
	char	*str1;
	char	*str2;
	
	str1 = "Same";
	str2 = "";
	printf("%s ", ft_strstr(str1, str2));
	printf("%s", strstr(str1, str2));
}*/
