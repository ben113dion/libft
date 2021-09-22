/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 07:27:59 by bdion             #+#    #+#             */
/*   Updated: 2021/09/20 07:36:46 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdlib.h"

unsigned	long	int	ft_strlen(const char *s);

char *ft_strrchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s) + 1;
	while (s[--i])
		if (s[i] == (char)c)
			return ((char*)(s + i));
	return (NULL);
}
