/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:57:46 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/17 18:40:21 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    int a = '4';
    char	z[] = "wednvopjnadvjnasdvjnSFGSFGSFG@#$%&^";

	printf("ft_isalpha : %d \n", ft_isalpha(a));
    printf("isalpha    : %d \n\n", isalpha(a));
    printf("ft_isdigit : %d \n", ft_isdigit(a));
    printf("isdigit    : %d \n\n", isdigit(a));
	printf("ft_isalnum : %d \n", ft_isalnum(a));
    printf("isalnum    : %d \n\n", isalnum(a));
	printf("ft_isascii : %d \n", ft_isascii(a));
    printf("isascii    : %d \n\n", isascii(a));
	printf("ft_isprint : %d \n", ft_isprint(a));
    printf("isprint    : %d \n\n", isprint(a));
	printf("ft_strlen : %lu \n", ft_strlen(z));
    printf("strlen    : %lu \n\n", strlen(z));
	printf("ft_toupper : %d \n", ft_toupper(a));
    printf("toupper    : %d \n\n", toupper(a));
	printf("ft_tolower : %d \n", ft_tolower(a));
    printf("tolower    : %d \n\n", tolower(a));
	ft_memset(z, '.', 8*sizeof(char));
	printf("ft_memset : %s \n", z);
	memset(z, ',', 8*sizeof(char));
	printf("memset    : %s \n", z);
}
