/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:04:31 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 17:04:34 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = MIN_INT_DIGIT;
	if (*s2 == '\0')
		return ((char *)s1);
	while (i < n)
	{
		j = MIN_INT_DIGIT;
		if (s1[i] == s2[j])
		{
			while (s1[i] == s2[j])
			{
				if (s2[j])
				{
					return ((char *)&s1[i] + j);
				}
				i++;
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
/*
//-------------------main-function------------------//
int main(void)
{
    const char *haystack = "hello world";
    const char *needle   = "wor";

    char *r1 = ft_strnstr(haystack, needle, 11);
    char *r2 = strnstr(haystack, needle, 11);

    if (r1 == r2)
        printf("Test 1 OK\n");
    else
        printf("Test 1 FAIL\n");

    // Cas avec needle pas trouvé
    needle = "zzz";
    r1 = ft_strnstr(haystack, needle, 11);
    r2 = strnstr(haystack, needle, 11);

    if (r1 == r2)
        printf("Test 2 OK\n");
    else
        printf("Test 2 FAIL\n");

    // Cas avec needle vide
    needle = "";
    r1 = ft_strnstr(haystack, needle, 11);
    r2 = strnstr(haystack, needle, 11);

    if (r1 == r2)
        printf("Test 3 OK\n");
    else
        printf("Test 3 FAIL\n");

    return 0;
}
*/
