/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 16:47:42 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/17 17:55:53 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] > 47 && str[i] < 58))
			return (0);
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

	tab = "ceci est une chaine de caracteres";
	tab1 = "078955";
	tab2 = "74:8";
	tab3 = "";
	printf("%d\n", ft_str_is_numeric(tab));
	printf("%d\n", ft_str_is_numeric(tab1));	
	printf("%d\n", ft_str_is_numeric(tab2));
	printf("%d\n", ft_str_is_numeric(tab3));
}*/
