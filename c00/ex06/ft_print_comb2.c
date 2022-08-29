/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:20:24 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/13 18:31:48 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_display(int nb1, int nb2)
{
	if (nb1 <= 9)
	{
		ft_putchar('0');
	}
	ft_putnbr(nb1);
	ft_putchar(' ');
	if (nb2 <= 9)
	{
		ft_putchar('0');
	}
	ft_putnbr(nb2);
	if (nb1 != 98 || nb2 != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_display(a, b);
			b++;
		}
		++a;
	}
}
