/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 14:15:32 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/15 14:23:24 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	n;

	i = 0;
	while (str[i])
	{
		n = str[i];
		if (!('A' <= n && n <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
