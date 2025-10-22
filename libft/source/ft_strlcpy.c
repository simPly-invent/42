/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:01:14 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 17:01:17 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = MIN_INT_DIGIT;
	i = MIN_INT_DIGIT;
	while (src[len])
		len++;
	while (i < size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	return (len);
}
/*
#include <string.h>

int main(void)
{
	char src[] = "oui je m'appelle";
	char dest[4];

	printf("%ld", ft_strlcpy(dest, "", 3));
	printf("%ld", strlcpy(dest, "", 3));	
}
*/
