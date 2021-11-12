/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 07:41:56 by bdion             #+#    #+#             */
/*   Updated: 2021/09/22 08:28:52 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_exp10(int len)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	while (--len != 0)
	{
		num = num * 10;
	}
	return (num);
}

int	ft_nti(char *str, int len)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (len != 0)
	{
		num = num + (ft_exp10(len) * (str[i] - 48));
		i++;
		len--;
	}
	return (num);
}

int	ft_atoi(const char *str)
{
	long long int	i;
	long long int	neg;
	long long int	j;
	char			cut[21];

	i = 0;
	while (str[i] == '	' || str[i] == ' ')
		i++;
	neg = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	j = 0;
	while (str[i] <= '9' && str[i] >= '0')
	{
		cut[j] = str[i];
		j++;
		i++;
	}
	return (neg * ft_nti(cut, j));
}
