/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:50:06 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/23 19:34:43 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_whitespace(char c)
{
	if (c == 32 || (9 <= c && c <= 13))
		return (1);
	return (0);
}

int	is_num(char c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	res;

	i = 0;
	minus = 1;
	res = 0;
	while (is_whitespace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (is_num(str[i]))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * minus);
}

/*int	main(void)
{
	char	*str;

	str = "  --+  -0123-  89";
	printf("%d", ft_atoi(str));
}*/
