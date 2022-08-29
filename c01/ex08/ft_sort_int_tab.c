/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 21:27:53 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/14 12:40:29 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < size)
	{
		while (i < size)
		{
			if (tab[i] > tab[j])
			{
				ft_swap(&tab[i], &tab[j]);
			}
			++i;
		}
		i = 0;
		++j;
	}
}
