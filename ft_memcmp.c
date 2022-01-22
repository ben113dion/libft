/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 08:42:44 by bdion             #+#    #+#             */
/*   Updated: 2021/12/13 12:53:05 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s1c;
	unsigned char	*s2c;
	size_t			i;

	if (!n)
		return (0);
	s1c = (unsigned char *)s1;
	s2c = (unsigned char *)s2;
	i = -1;
	while (++i < n)
		if (s1c[i] != s2c[i])
			return (s1c[i] - s2c[i]);
	return (0);
}
