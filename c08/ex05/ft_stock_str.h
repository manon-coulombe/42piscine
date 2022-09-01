/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcoulomb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 16:39:06 by mcoulomb          #+#    #+#             */
/*   Updated: 2022/08/30 17:13:10 by mcoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR

# define FT_STOCK_STR
#include <stdlib.h>

typedef struct	s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}	t_stock_str;

#endif
