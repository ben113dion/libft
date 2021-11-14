/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 07:41:56 by bdion             #+#    #+#             */
/*   Updated: 2021/09/22 08:28:52 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    char    *dup;
    size_t  j;

    j = -1;
    if (!(dup = malloc(sizeof(char) * ft_strlen(s) + 1)))
        return (NULL);
    while (s[++j] != '\0')
        dup[j] = s[j];
    dup[j] = '\0';
    return (dup);
}

