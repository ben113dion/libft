/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdion <bdion@student.42quebec.co>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:27:30 by bdion             #+#    #+#             */
/*   Updated: 2021/11/11 14:29:30 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char	*pch;
	char	str[] = "Example string";

	pch = (char*)ft_memchr(str, 'p', ft_strlen(str));
	if (pch != NULL)
		printf("'p' found at position '%s'.\n", pch);
	else
		printf("'p' not found.\n");
	return (0);
}
