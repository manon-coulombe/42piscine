/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 13:24:44 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/28 17:55:01 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	range[0] = malloc((max - min) * sizeof(int));
	if (range[0] == NULL)
		return (-1);
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (i);
}

/*int	main(void)
{
	int	nbr;
	int	*tab;
	int	**tabtab;

	tab = &nbr;
	tabtab = &tab;
	printf("taille: %d", ft_ultimate_range(tabtab, 2, 7));
}*/
