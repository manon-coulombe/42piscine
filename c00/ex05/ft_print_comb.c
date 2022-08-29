/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 13:09:33 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/13 18:34:08 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_display(char *num)
{
	if (num[0] != num[1] && num[0] != num[2] && num[1] != num[2])
	{
		write(1, num, 3);
		if (num[0] != 55 || num[1] != 56 || num[2] != 57)
		{	
			write(1, ", ", 2);
		}
	}			
}

void	ft_print_comb(void)
{
	char	b[3];

	b[0] = 48;
	b[1] = 49;
	b[2] = 50;
	while (b[0] <= 55)
	{	
		while (b[1] <= 56)
		{
			while (b[2] <= 57)
			{
				ft_display(b);
				++b[2];
			}
			b[2] = b[1] + 1;
			++b[1];
		}
		b[1] = b[0] + 1;
		++b[0];
	}
}