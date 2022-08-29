/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 10:48:33 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/18 17:35:19 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char c)
{
	if (c < 32 || c == 127)
		return (0);
	return (1);
}

void	put_hexa(unsigned char decnum)
{	
	char	*base;

	base = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &base[decnum / 16], 1);
	write(1, &base[decnum % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_str_is_printable(str[i]))
			put_hexa(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "Coucou\ntu\e vas\r bien\a ?";
	ft_putstr_non_printable(str);
}*/
