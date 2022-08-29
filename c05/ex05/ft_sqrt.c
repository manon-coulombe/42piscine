/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:20:42 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/26 10:39:21 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	root;
	int	res;

	root = 1;
	res = 0;
	while (root <= (nb / root))
	{
		res = root * root;
		if (res == nb)
			return (root);
		root ++;
	}
	return (0);
}

/*int	main(void)
{
	printf("1: %d\n", ft_sqrt(1));
	printf("2: %d\n", ft_sqrt(2));
	printf("4: %d\n", ft_sqrt(4));
	printf("9: %d\n", ft_sqrt(9));
	printf("16: %d\n", ft_sqrt(16));
	printf("25: %d\n", ft_sqrt(25));
	printf("3: %d\n", ft_sqrt(3));
}*/
