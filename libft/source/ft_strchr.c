/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:59:40 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 17:10:47 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	unsigned char	uc;

	i = 0;
	uc  = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == uc)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	printf("ft_strchr : %s\n", ft_strchr("bonjour", 'j'));
	printf("strchr    : %s\n", strchr("bonjour", 'j'));
}
