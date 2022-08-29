/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:03:52 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/24 13:05:11 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_whitespace(char c)
{
	if (c == 32 || (9 <= c && c <= 13))
		return (1);
	return (0);
}

int	is_good_input(char *input)
{
	int	i;
	int	j;

	i = 0;
	if (input[0] == '\0' || input[1] == '\0')
		return (0);
	while (input[i] != '\0')
	{
		j = 0;
		if (input[i] == '-' || input[i] == '+' || is_whitespace(input[i]))
			return (0);
		while (input[j] != '\0')
		{
			j++;
			if (j == i)
				j++;
			if (input[i] == input[j])
				return (0);
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				baselen;
	unsigned int	nb;

	baselen = ft_strlen(base);
	if (is_good_input(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nb = (unsigned int)(-1 * nbr);
			if (nb / baselen > 0)
				ft_putnbr_base((int)(nb / baselen), base);
			ft_putnbr_base((int)(nb % baselen), base);
		}
		else if (nbr >= baselen)
		{
			ft_putnbr_base((nbr / baselen), base);
			ft_putnbr_base((nbr % baselen), base);
		}
		else
			write(1, &base[nbr % baselen], 1);
	}
}

/*int	main(void)
{
	char	binbase[] = "01";
	char	hexabase[] = "0123456789ABCDEF";
	char	decbase[] = "0123456789";
	ft_putnbr_base(-2148, decbase);
}*/
