/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 08:42:44 by bdion             #+#    #+#             */
/*   Updated: 2021/09/22 08:49:27 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
        if (!n)
                return (0);
        while (--n && *(unsigned char *)s1 == *(unsigned char *)s2)
        {
                (unsigned char *)s1++;
                (unsigned char *)s2++;
        }
        return ((int)(*(unsigned char *)s1 - *(unsigned char *)s2));
}
