/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 06:54:00 by bdion             #+#    #+#             */
/*   Updated: 2021/11/10 12:43:59 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i[2];

	i[0] = 0;
	i[1] = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	if (i[1] > size - 1)
		return (size + ft_strlen(src));
	while (src[i[0]] != '\0' && i[0] + i[1] < size - 1)
	{
		dst[i[0] + i[1]] = src[i[0]];
		i[0]++;
	}
	dst[i[0] + i[1]] = 0;
	return (i[1] + ft_strlen(src));
}
