/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouleau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:15:44 by fbouleau          #+#    #+#             */
/*   Updated: 2022/08/13 16:21:05 by fbouleau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(47 < str[i] && str[i] < 58))
			return (0);
		i++;
	}
	return (1);
}

int	ft_str_to_int(char *str, int default_size)
{
	int	i;
	int	res;

	if (ft_str_is_numeric(str))
	{
		i = 0;
		res = 0;
		while (str[i] != '\0')
		{
			res = res * 10 + str[i] - '0';
			i++;
		}
		return (res);
	}
	return (default_size);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;
	int	default_size;

	default_size = 5;
	if (argc == 3)
	{
		x = ft_str_to_int(argv[1], default_size);
		y = ft_str_to_int(argv[2], default_size);
		if (x == 0)
			x = default_size;
		if (y == 0)
			y = default_size;
	}
	else
	{
		x = default_size;
		y = default_size;
	}
	rush(x, y);
	return (0);
}
