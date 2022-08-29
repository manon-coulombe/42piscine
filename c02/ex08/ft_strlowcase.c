/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:05:32 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/16 14:34:56 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;
	int	n;	

	i = 0;
	while (str[i] != '\0')
	{
		n = str[i];
		if ('A' <= n && n <= 'Z')
		{
			str[i] += 32;
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
	char	tab[] = "QWERTY";

	put_str(ft_strlowcase(tab));
}*/
