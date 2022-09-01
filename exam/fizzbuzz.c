/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:10:46 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/09/01 14:43:31 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int n)
{
	if (0 <= n && n <= 9)
		ft_putchar(n + 48);
	else if (n > 9)
	{
		putnbr(n / 10);
		putnbr(n % 10);
	}
}
void	fizzbuzz(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write(1, "fizz\n", 5);
		else if (i % 5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
}

int	main(void)
{
	fizzbuzz();
}
