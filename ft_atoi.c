/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 07:41:56 by bdion             #+#    #+#             */
/*   Updated: 2021/12/14 12:15:18 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c == ' ' || c == '\r' || c == '\f' || c == '\v' || \
			c == '\n' || c == '\t');
}

int	ft_atoi(const char *str)
{
	int	i[2];

	i[1] = 0;
	i[0] = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		i[0] = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
		i[1] = i[1] * 10 + *str++ - '0';
	return (i[1] * i[0]);
}
