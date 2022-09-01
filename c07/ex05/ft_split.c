/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 11:29:16 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/09/01 12:53:15 by mcoulomb         ###   ########.fr       */
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
	if (charset == NULL)
		return (0);
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
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_charset(str[i], charset))
			i++;
		while (str[i] != '\0' && !is_charset(str[i], charset))
			i++;
		while (str[i] != '\0' && is_charset(str[i], charset))
			i++;
		j++;
	}
	return (j);
}

char	*ft_strdup(char *src, int start, int end)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (end - start + 1));
	if (dest == NULL)
		return (0);
	while (start < end)
	{
		dest[i] = src[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**strs;
	int		i;
	int		k;
	int		start;

	i = 0;
	strs = (char **)malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (strs == NULL || str == NULL)
		return (NULL);
	k = 0;
	while (str[k] != '\0')
	{
		while (is_charset(str[k], charset) && str[k] != '\0')
			k++;
		start = k;
		while (!is_charset(str[k], charset) && str[k] != '\0')
			k++;
		if (k != start)
			strs[i++] = ft_strdup(str, start, k);
	}
	strs[i] = 0;
	return (strs);
}

/*int	main(int argc, char **argv)
{
	char	**res = ft_split(argv[1], argv[2]);
	int	i = 0;
	
	printf("%d\n", count_words(argv[1], argv[2]));
	if (res[i] == 0)
		printf("c null");
	while (*(res + i))
		printf("%s\n", res[i++]);
	i = 0;
        while (*(res + i))
                free(res[i++]);
	free(res);
}*/
