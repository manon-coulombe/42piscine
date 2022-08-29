/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 18:00:20 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/17 15:43:00 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_char_is_alpha(char c)
{
	if (!(('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')))
		return (0);
	return (1);
}

int	ft_char_is_num(char c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}

char	*ft_strlowcase(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i] != '\0')
	{
		n = str[i];
		if ('A' <= n && n <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (ft_char_is_alpha(str[0]))
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (!ft_char_is_alpha(str[i]) && !ft_char_is_num(str[i]))
		{
			if (ft_char_is_alpha(str[i + 1]))
				str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	tab[] = "tyu@#%^blaYUlab 42teSt^&gty  lIa454";

	printf("%s", ft_strcapitalize(tab));
}*/
