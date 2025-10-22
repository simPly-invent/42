/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:04:18 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 17:04:21 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_strncmp(const char *src, const char *dest, size_t n)
{
	size_t	i;

	i = MIN_INT_DIGIT;
	while (i < n && src[i] == dest[i])
	{
		i++;
	}
	return (src[i] - dest[i]);
}
/*
//-------------main-function-------------//
#include <string.h>

int main(void)
{
	printf("%d", ft_strncmp("", "", 5));
	printf("%d", strncmp("", "", 5));
}
*/
