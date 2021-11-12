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
	const char	*s2;
	size_t		i;

	i = 0;
	s2 = (const char *)s;
	while (i != n)
	{
		if (s2[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
