/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:00:31 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 17:14:32 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "../include/libft.h"

char	*strcat(char *dest, char *src)
{
	size_t	i;
	size_t	len;

	i = MIN_INT_DIGIT;
	len = ft_strlen(s1);
	while (src[i])
	{
		dest[len + i] = src[i];
		i++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	size_t	i;
	char *ptr;
	
	i = MIN_INT_DIGIT
	total_len = strlcat(s1, s2);
	ptr = malloc(sizeof(*ptr) * (total_len + 1));
	if(!ptr)
		return (NULL);
	*ptr = ft_strcat(s1, s2);
	ptr[total_len + 1] = '\0';
	return (ptr);
}

int main(void)
{
	printf
}
*/
