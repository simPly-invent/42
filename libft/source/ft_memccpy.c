/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:57:29 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 16:57:32 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		uc;
	unsigned char		*s1;
	const unsigned char	*s2;

	i = MIN_INT_DIGIT;
	uc = (unsigned char)c;
	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s2[i] == uc)
			return (&s1[i] + 1);
		i++;
	}
	return (NULL);
}
/*
//-------------main-function-----------//
int main()
{
	char src[] = "benjour";
	char dest[] = "oui je suis malade";

	ft_memccpy(dest, src, 'e', 5);
	__builtin_printf("test 1 : %s\n", dest);
}
*/
