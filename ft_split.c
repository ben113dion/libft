/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:03:23 by bdion             #+#    #+#             */
/*   Updated: 2021/12/16 14:39:57 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nline(char const *s, char c)
{
	int	i[2];

	i[0] = 0;
	i[1] = 0;
	while (*s)
	{
		if (i[1] == 0 && *s != c)
		{
			i[0]++;
			i[1] = 1;
		}
		else if (*s == c)
			i[1] = 0;
		s++;
	}
	return (i[0]);
}

char	**ft_split(char const *s, char c)
{
	char		**rtn;
	int			i;
	size_t		j[2];

	if (!s)
		return (NULL);
	rtn = (char **)ft_calloc((nline(s, c) + 1), sizeof(char *));
	if (!rtn)
		return (NULL);
	i = -1;
	j[0] = 0;
	j[1] = 0;
	while (j[0] <= ft_strlen(s))
	{
		if (s[j[0]] != c && i < 0)
			i = j[0];
		else if (i >= 0 && (s[j[0]] == c || j[0] == ft_strlen(s)))
		{
			rtn[j[1]++] = ft_substr(s, i, (j[0] - i));
			i = -1;
		}
		j[0]++;
	}
	return (rtn);
}
