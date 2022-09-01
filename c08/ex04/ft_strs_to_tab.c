/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:32:56 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/30 18:38:56 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h> 

int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
                i++;
        return (i);
}

char    *ft_strdup(char *src)
{
        char    *dest;
        int             i;

        i = 0;
        dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
        if (dest == NULL)
                return (0);
        while (src[i] != '\0')
        {
                dest[i] = src[i];
                i++;
        }
        dest[i] = '\0';
        return (dest);
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str *array;
	int	i;

	i = 0;
	array = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (array == NULL)
		return (NULL);
	while (i < ac)
	{
		array[i].str = ft_strdup(av[i]);
		array[i].copy = ft_strdup(av[i]);
		array[i].size = ft_strlen(av[i]);
		i++;
	}
	array[i].str = 0;
	return (array);
}

/*#include <stdio.h>
int	main(void)
{
	char	*strs[] = {"bonjour", "bonsoir", "adieu"};
	struct s_stock_str	*tab;
	
	tab = ft_strs_to_tab(3, strs);
//	printf("%s", tab[0].str);
	ft_show_tab(tab);
}*/
