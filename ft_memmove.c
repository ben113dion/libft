/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:04:18 by bdion             #+#    #+#             */
/*   Updated: 2021/09/20 06:51:59 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"
#include <stdio.h>

void *ft_memmove(void *dst, const void *src, size_t len)
{
	int	i;

	if ((!dst) || (!src))
		return (NULL);
	if (dst > src)
	{	
		i = (int)len;
		while (--i >= 0)
			*(char *)(dst + i) = *(char *)(src + i);
	}
	else
	{
		i = -1;
		while (++i < (int)len)
			*(char *)(dst + i) = *(char *)(src + i);
	}
	return (dst);
}
