/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:47:40 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/16 14:32:23 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i])
	{
		n = str[i];
		if (!(('a' <= n && n <= 'z') || ('A' <= n && n <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	*tab; 
	char	*tab1;
	char	*tab2;
	char	*tab3;

	tab = "aSE";
	tab1 = "@#$%5";
	tab2 = "7afaea4:8";
	tab3 = "";
	printf("%d\n", ft_str_is_alpha(tab));
	printf("%d\n", ft_str_is_alpha(tab1));	
	printf("%d\n", ft_str_is_alpha(tab2));
	printf("%d\n", ft_str_is_alpha(tab3));
}*/
