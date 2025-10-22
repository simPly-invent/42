/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:59:17 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 16:59:20 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	b;

	i = 0;
	str = (unsigned char *)s;
	b = (unsigned char)c;
	while (i < n)
	{
		str[i] = b;
		i++;
	}
	return (s);
}
/*
//-------------test-function----------------
#include <string.h>
int main(void)
{
	char str[] = "yesssss";
	__builtin_printf("before : %s\n", str);
	ft_memset(str + 2, 'Z', 5*sizeof(char));
	__builtin_printf("after : %s\n", str);
	
	char str2[] = "yesssss";
        __builtin_printf("before : %s\n", str2);
        memset(str2 + 2, 'Z', 5*sizeof(char));
        __builtin_printf("after : %s\n", str2);
}
*/
