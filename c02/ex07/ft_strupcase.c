/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 15:15:51 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/16 14:34:29 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;
	int	n;	

	i = 0;
	while (str[i] != '\0')
	{
		n = str[i];
		if ('a' <= n && n <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*void	put_str(char *str)
{
	while (*str)
		write(1, str++, 1);
}

int	main(void)
{
	char	tab[] = "blablabla";

	put_str(ft_strupcase(tab));
}*/
