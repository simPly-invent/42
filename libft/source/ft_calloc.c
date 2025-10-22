/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:55:31 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 19:10:51 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static void	ft_bzero_calloc(void *s, size_t n)
{
	size_t	i;
	unsigned char		*str;

	str = (unsigned char *)s;
	i = MIN_INT_DIGIT;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t size_tab, size_t size)
{
	if ((size == 0) && (size_tab == '\0'))
		return (NULL);
	size_t		i;
	unsigned char		*ptr;

	i = MIN_INT_DIGIT;
	ptr = malloc(size_tab * size);
	if (!ptr)
		return (NULL);
	ft_bzero_calloc(ptr, (size_tab * size));
	return (ptr);
}

int main()
{
	size_t size_tab = 4;
	size_t size = 4;
	ft_calloc(size_tab, size);
}
