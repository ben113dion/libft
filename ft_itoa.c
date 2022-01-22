/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 14:57:01 by bdion             #+#    #+#             */
/*   Updated: 2021/12/16 12:34:44 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(int n)
{
	int	i;
	int	stop;

	stop = 0;
	i = 0;
	while (stop == 0 && i++ > -1)
	{
		if (n / 10 != 0)
			n = n / 10;
		else
			stop = 1;
	}
	return (i);
}

static char	*invstr(char *s)
{
	int			i;
	int			j;
	char		*rtn;

	rtn = malloc(sizeof(char) * ft_strlen(s) + 1);
	i = ft_strlen(s) - 1;
	j = 0;
	rtn[i + 1] = '\0';
	while (i != -1)
		rtn[i--] = s[j++];
	return (rtn);
}

char	*ft_itoa(int n)
{
	int		j;
	int		is_neg;
	char	*rtn;

	if (n == -2147483648)
		return (invstr("8463847412-"));
	is_neg = 0;
	if (n < 0)
		is_neg = 1;
	if (n < 0)
		n = -n;
	j = (intlen(n) + is_neg);
	rtn = malloc(sizeof(char) * j + 1);
	if (!rtn)
		return (NULL);
	rtn[j] = '\0';
	while (intlen(n) != 1)
	{
		rtn[--j] = (n % 10 + 48);
		n = n / 10;
	}
	rtn[--j] = n % 10 + 48;
	if (is_neg == 1)
		rtn[--j] = '-';
	return (rtn);
}
