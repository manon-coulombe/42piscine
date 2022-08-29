/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouleau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 21:17:49 by fbouleau          #+#    #+#             */
/*   Updated: 2022/08/13 11:15:10 by fbouleau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_good_char(int x, int y, int i, int j)
{
	if (i == 0)
	{
		if (j == 0 || j == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else if (i == y - 1)
	{
		if (j == 0 || j == x - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
	}
	else
	{
		if (j == 0 || j == x - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (x > 0 && y > 0)
	{
		while (i < y)
		{
			while (j < x)
			{
				print_good_char(x, y, i, j);
				j++;
			}
			ft_putchar('\n');
			j = 0;
			i++;
		}
	}
}
