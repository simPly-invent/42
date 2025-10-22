/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:58:46 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 16:58:51 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*s1;
	const unsigned char	*s2;

	if (dest == NULL || src == NULL)
		return (NULL);
	s1 = (unsigned char *)dest;
	s2 = (const unsigned char *)src;
	if (s1 < s2)
	{
		while(n--)
		{
			*s1++ = *s2++;
		}
	}
	else
	{
		s1 += n;
		s2 += n;
		while(n--)
			*--s1 = *--s2;
	}
	return (dest);
}

//---------------main-function-----------------------------

int main()
{
    char str1[] = "Geeks";
    char str2[] = "Quiz";

    __builtin_printf("str1 before memmove ");
    __builtin_printf("%s", str1);

    ft_memmove(str1, str2, sizeof(str2));

    __builtin_printf("\nstr1 after memmove ");
    __builtin_printf("%s", str1);

    return 0;
}

