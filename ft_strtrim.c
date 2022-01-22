/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 12:24:38 by bdion             #+#    #+#             */
/*   Updated: 2021/12/16 12:32:10 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char const chr, char const *set)
{
	size_t	i;

	i = -1;
	while (set[++i])
		if (chr == set[i])
			return (1);
	return (0);
}

char	*mallocnull(void)
{
	char	*rtn;

	rtn = malloc(sizeof(char) * 1);
	rtn[0] = '\0';
	return (rtn);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*rtn;

	if (!s1[0] || !set)
		return (mallocnull());
	i = -1;
	while (s1[++i])
		if (is_set(s1[i], set) == 0)
			break ;
	start = i;
	i = ft_strlen(s1);
	while (--i > start)
		if (is_set(s1[i], set) == 0)
			break ;
	end = i;
	rtn = malloc(sizeof(char) * (end - start) + 5);
	if (!rtn)
		return (NULL);
	i = 0;
	while (start <= end)
		rtn[i++] = s1[start++];
	rtn[i] = 0;
	return (rtn);
}
