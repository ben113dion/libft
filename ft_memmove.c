/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 16:04:18 by bdion             #+#    #+#             */
/*   Updated: 2021/12/16 13:15:10 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst2;
	char	*src2;
	int		i;

	if ((!dst) && (!src))
		return (NULL);
	dst2 = (char *)dst;
	src2 = (char *)src;
	if (dst2 > src2)
	{
		i = (int)len;
		while (--i >= 0)
			*(char *)(dst2 + i) = *(char *)(src2 + i);
	}
	else
	{
		i = -1;
		while (++i < (int)len)
			*(char *)(dst2 + i) = *(char *)(src2 + i);
	}
	return (dst2);
}
