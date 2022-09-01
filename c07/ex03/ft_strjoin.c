/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:41:31 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/31 14:26:01 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	total_len(int size, char **strs)
{
	int	i;
	int	total;

	total = 0;
	size--;
	while (size >= 0)
	{
		i = 0;
		while (strs[size][i] != '\0')
		{
			i++;
			total++;
		}
		size--;
	}
	return (total);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*newstr;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	j = total_len(size, strs) + (ft_strlen(sep) * (size - 1));
	if (size <= 0)
		return ((char *)malloc(sizeof(char)));
	newstr = (char *)malloc(j * sizeof(char) + 1);
	if (newstr == 0)
		return (0);
	while (k < (total_len(size, strs) + (ft_strlen(sep) * (size -1))))
	{
		j = 0;
		while (strs[i][j] != '\0')
			newstr[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != (size - 1))
			newstr[k++] = sep[j++];
		i++;
	}
	newstr[k] = '\0';
	return (newstr);
}

/*int	main(int argc, char **argv)
{
	printf("%s", ft_strjoin(argc - 2, argv + 1, argv[argc - 1]));
}*/
