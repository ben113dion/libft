/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 06:54:00 by bdion             #+#    #+#             */
/*   Updated: 2021/09/20 07:23:05 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i[3];

	i[0] = -1;
	i[1] = ft_strlen(dst);
	i[2] = ft_strlen(dst);
	if (size > 0 && ft_strlen(dst) > size - 1)
	{
		while (src[++i[0]] && ft_strlen(dst) + i[0] < (size - 1))
			dst[i[1]++] = src[i[0]];
		dst[i[1]] = 0;
	}
	if (i[2] >= size)
		i[2] = size;
	return (i[2] + ft_strlen(src));
}
