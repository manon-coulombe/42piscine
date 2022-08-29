/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 13:11:06 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/23 18:43:42 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_whitespace(char c)
{
	if (c == 32 || (9 <= c && c <= 13))
		return (1);
	return (0);
}

int	is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	is_good_input(char *input)
{
	int	i;
	int	j;

	i = 0;
	if (input[0] == '\0' || input[1] == '\0')
		return (0);
	while (input[i] != '\0')
	{
		j = 0;
		if (input[i] == '-' || input[i] == '+' || is_whitespace(input[i]))
			return (0);
		while (input[j] != '\0')
		{
			j++;
			if (j == i)
				j++;
			else if (input[i] == input[j])
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_convertodec(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	minus;
	int	res;
	int	baselen;

	baselen = 0;
	i = 0;
	minus = 1;
	res = 0;
	while (base[baselen] != '\0')
		baselen++;
	if (is_good_input(base))
	{
		while (is_whitespace(str[i]))
			i++;
		while (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				minus *= -1;
			i++;
		}
		while (is_in_base(str[i], base))
			res = res * baselen + ft_convertodec(str[i++], base);
	}
	return (res * minus);
}

/*int	main()
{
	char	str[] = "\t\n  -++--84F";
	char	base[] = "0123456789ABCDEF";
	printf("%d\n", ft_atoi_base(str, base));
}*/
