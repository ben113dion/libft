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

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	if (!s)
		return (NULL);
	while (n > i)
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((unsigned char *)(s + i));
	return (NULL);
}
