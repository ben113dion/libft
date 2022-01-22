/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 15:27:02 by bdion             #+#    #+#             */
/*   Updated: 2021/12/13 11:39:58 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i[2];

	i[0] = 0;
	i[1] = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i[0]] != '\0' && i[0] < len)
	{
		if (haystack[i[0]] == needle[0])
		{
			while (needle[i[1]] != '\0' && \
					haystack[i[0] + i[1]] == needle[i[1]] && i[0] + i[1] < len)
			{
				if (needle[i[1] + 1] == '\0')
					return ((char *)&haystack[i[0]]);
				i[1]++;
			}
		}
	i[0]++;
	}
	return (NULL);
}
