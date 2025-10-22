/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:00:47 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 17:01:03 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = MIN_INT_DIGIT;
	len = MIN_INT_DIGIT;
	while (dst[len])
		len++;
	while (src[i] && i < size)
	{
		dst[len + i] = src[i];
		i++;
	}
	return (len + i);
}
/*

//-----------------main-function-----------------------//

int main(void)
{
	char src[] = "oui";
	char dst[] = "non";
	printf("%ld\n", ft_strlcat(src, dst, 3));
	printf("%ld\n", strlcat(src, dst, 3));
}
*/
