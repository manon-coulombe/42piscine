/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:43:16 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/28 16:19:36 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	is_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i++] == c)
			return (1);
	}
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
		j = i + 1;
		if (input[i] == '-' || input[i] == '+' || is_whitespace(input[i]))
			return (0);
		while (input[j] != '\0')
		{
			if (input[i] == input[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	temp;

	i = 0;
	if (str[i] == '-')
		i++;
	len = ft_strlen(str) - 1;
	while (i < len)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}
