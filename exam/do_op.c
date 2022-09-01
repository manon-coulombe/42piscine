/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:23:05 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/09/01 17:11:34 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(n * -1);
	}
	else if (n <= 9)
		ft_putchar(n + 48);
	else
	{	
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}

int	main(int argc, char **argv)
{
	int	ftnbr;
	int	sdnbr;
	char	operator;
	int 	res;
	if (argc != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	res = 0;
	ftnbr = atoi(argv[1]);
	sdnbr = atoi(argv[3]);
	operator = argv[2][0];
	if (operator == '+')
		res = ftnbr + sdnbr;
	else if (operator == '-')
		res = ftnbr - sdnbr;
	else if (operator == '*')
                res = ftnbr * sdnbr;
	else if (operator == '/')
                res = ftnbr / sdnbr;
	else if (operator == '%')
                res = ftnbr % sdnbr;
	ft_putnbr(res);
	ft_putchar('\n');
}
