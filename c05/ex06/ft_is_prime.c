/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 14:25:14 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/26 11:08:55 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d: 0\n", ft_is_prime(0));
	printf("%d: 1\n", ft_is_prime(11));
	printf("%d: 1\n", ft_is_prime(19));
	printf("%d: 1\n", ft_is_prime(71));
	printf("%d: 1\n", ft_is_prime(2147483647));
	printf("%d: 1\n", ft_is_prime(41));
	printf("%d: 0\n", ft_is_prime(1));
	printf("%d: 0\n", ft_is_prime(6));
	printf("%d: 0\n", ft_is_prime(196));
}*/
