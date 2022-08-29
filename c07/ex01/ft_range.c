/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 12:59:43 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/28 16:58:24 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*res;
	int	i;

	i = 0;
	if (min >= max)
		return (res = 0);
	res = malloc((max - min) * sizeof(int));
	if (res == NULL)
		return (NULL);
	while (min < max)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}

/*int	main(void)
{
	printf("%d ", ft_range(-2, 2)[0]);
	printf("%d ", ft_range(2, 9)[1]);
	printf("%d ", ft_range(2, 9)[2]);
	printf("%d ", ft_range(2, 9)[3]);
	printf("%d ", ft_range(2, 9)[4]);
	printf("%d ", ft_range(2, 9)[5]);
	printf("%d ", ft_range(2, 9)[6]);
}*/
