/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:02:29 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/26 10:32:40 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
		res *= nb * ft_recursive_power(nb, power - 1);
	return (res);
}

/*int main(void)
{
	printf("%d", ft_recursive_power(0, 0));
}*/
