/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:01:15 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/09/01 16:18:44 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	main(int argc, char **argv)
{
	char	*str;
	char	temp;
	int	i;

	i = 0;
	str = argv[1];
	if (argc != 2)
	{
		write(1,"\n", 1);
		return (0);
	}
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && str[i] <= 'm'))
			temp = str[i] + (25 - (str[i] - 'a') * 2);
		else if ('A' <= str[i] && str[i] <= 'M')
			temp = str[i] + (25 - (str[i] - 'A') * 2);
		else if ((str[i] >= 'n' && 'z' >= str[i]))
			temp = str[i] - (25 - ('z' - str[i]) * 2);
		else if (str[i] >= 'N' && 'Z' >= str[i])
			temp = str[i] - (25 - ('Z' - str[i]) * 2);
		else
			temp = str[i];
		write(1, &temp, 1);
		i++;
	}
}
