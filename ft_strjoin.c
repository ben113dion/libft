/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 10:42:01 by bdion             #+#    #+#             */
/*   Updated: 2021/12/14 12:09:37 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*rtn;
	size_t	s1l;
	size_t	s2l;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1 && s2)
		return (ft_strdup(s2));
	if (s1 && !s2)
		return (ft_strdup(s1));
	s1l = ft_strlen(s1);
	s2l = ft_strlen(s2);
	rtn = malloc(sizeof(char) * (s1l + s2l + 1));
	if (!rtn)
		return (0);
	ft_memmove(rtn, s1, s1l);
	ft_memmove(rtn + s1l, s2, s2l);
	rtn[s1l + s2l] = 0;
	return (rtn);
}
