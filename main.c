/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvigneau <jvigneau@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 12:57:46 by jvigneau          #+#    #+#             */
/*   Updated: 2021/09/22 07:54:15 by bdion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int main(void)
{
    //int 			a = '4';
    //char			z[] = "wednvopjnadvjnasdvjnSFGSFGSFG@#$%&^";
	char	mem[] = "allooa";
	char	mem2[] = "indigogaterie";

	/*printf("ft_isalpha : %d \n", ft_isalpha(a));
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
	printf("memset    : %s \n\n", z);
	bzero(z, 1);
	printf("bzero[0] = 0    : %d \n", z[0]);
	printf("bzero[1] = 44   : %d \n", z[1]);
	printf("bzero[2] = 44   : %d \n\n", z[2]);
	ft_bzero(z, 5);
	printf("ft_bzero[3] = 0  : %d \n", z[3]);
	printf("ft_bzero[4] = 0 : %d \n", z[4]);
	printf("ft_bzero[5] = 44 : %d \n\n", z[5]);
	ft_memset(z, '1', 8*sizeof(char));
	memcpy(z, mem, ft_strlen(mem) + 1);
	printf("memcpy    : %s\n", z);
	ft_memmove(z, mem2, 8);
	printf("ft_memmove : %s\n", z);*/
	ft_strlcat(mem, mem2, 6);
	printf("%d \n", atoi("-2354245sdfhsfh"));
	printf("%d \n", atoi(" 	+ 2354245sdfhsfh"));
	printf("%d \n", atoi("-2354245sdfhsfh"));
	printf("%d \n\n", atoi());
	printf("%d \n", ft_atoi("-2354245sdfhsfh"));
	printf("%d \n", ft_atoi(" 	+ 2354245sdfhsfh"));
	printf("%d \n", ft_atoi("-2354245sdfhsfh"));
	printf("%d \n", ft_atoi());
}
