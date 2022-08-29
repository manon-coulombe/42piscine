/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 17:26:50 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/28 17:50:41 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);
int		is_whitespace(char c);
int		is_in_base(char c, char *base);
int		is_good_input(char *input);
char	*ft_strrev(char *str);

int	ft_convertodec(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *nbr, char *base)
{
	int	i;
	int	minus;
	int	res;
	int	baselen;

	baselen = ft_strlen(base);
	i = 0;
	minus = 1;
	res = 0;
	while (is_whitespace(nbr[i]))
		i++;
	while (nbr[i] == '-' || nbr[i] == '+')
	{
		if (nbr[i] == '-')
			minus *= -1;
		i++;
	}
	while (is_in_base(nbr[i], base))
		res = res * baselen + ft_convertodec(nbr[i++], base);
	return (res * minus);
}

char	*nbr_dec_to_base(int nbr, char *base)
{
	long int	nb;
	char		*res;
	int			baselen;
	int			i;

	res = malloc(sizeof(char) * 34);
	if (res == NULL)
		return (NULL);
	i = 0;
	nb = (long int)nbr;
	baselen = ft_strlen(base);
	if (nb == 0)
		res[i++] = base[nb];
	while (nb != 0)
	{	
		if (nb < 0)
		{
			nb = nb * -1;
			res[i++] = '-';
		}	
		res[i] = base[nb % baselen];
		nb = nb / baselen;
		i++;
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{	
	int		nbr_dec;
	char	*res;	

	if (!is_good_input(base_from) || !is_good_input(base_to))
		return (NULL);
	nbr_dec = ft_atoi_base(nbr, base_from);
	res = nbr_dec_to_base(nbr_dec, base_to);
	res = ft_strrev(res);
	return (res);
}

/*int	main(int argc, char **argv)
{
	(void) argc;
	printf("%s", ft_convert_base(argv[1], argv[2], argv[3]));
}*/
