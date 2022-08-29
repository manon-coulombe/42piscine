/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:29:16 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/29 15:06:52 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (is_charset(str[i], charset) && str[i] != '\0')
			i++;
		while (!is_charset(str[i], charset) && str[i] != '\0')
			i++;
		while (is_charset(str[i], charset) && str[i] != '\0')
			i++;
		j++;
	}
	return (j);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	char	*temp;
	int		i;
	int		j;
	int		k;

	strs = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (strs == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (str[k] != '\0')
	{
		temp = (char *)malloc(sizeof(char) * ft_strlen(str));
		if (temp == NULL)
			return (NULL);
		j = 0;
		while (is_charset(str[k], charset) && str[k] != '\0')
			k++;
		while (!is_charset(str[k], charset) && str[k] != '\0')
			temp[j++] = str[k++];
		strs[i++] = ft_strdup(temp);
	}
	strs[i] = 0;
	return (strs);
}

/*int	main(void)
{
//	char	*str = " &boneibnqribnruivnjour,&& bonsoir, adieu, lala &  l";
	char	*str = "";
	char	*sep = "& ";
	char	**res = ft_split(str, sep);
	int	i = 0;

	while (*(res + i))
	{
		printf("%s\n", res[i++]);
	}
}*/
