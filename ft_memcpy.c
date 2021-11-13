/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:52:34 by bdion             #+#    #+#             */
/*   Updated: 2021/09/18 16:04:08 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *dst2;
	unsigned char *src2;

	if (!dst && !src)
		return (NULL);
    dst2 = (unsigned char *)dst;
    src2 = (unsigned char *)src;
    while (n--)
        *dst2++ = *src2++;
    return (dst);

}
