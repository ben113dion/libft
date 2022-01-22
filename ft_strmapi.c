/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 16:04:16 by bdion             #+#    #+#             */
/*   Updated: 2021/12/13 11:50:55 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*rtn;
	unsigned int	i;

	if (!s || (!f && !s))
		return (ft_strdup(""));
	rtn = ft_strdup(s);
	if (!rtn)
		return (NULL);
	else if (!f)
		return (rtn);
	i = -1;
	while (s[++i])
		rtn[i] = (*f)(i, s[i]);
	return (rtn);
}
