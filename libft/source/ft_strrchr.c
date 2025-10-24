/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed <mobenais@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:17:47 by mohamed           #+#    #+#             */
/*   Updated: 2025/10/22 17:33:00 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	uc;

	i = ft_strlen(s);
	uc = (unsigned char)c;
	while (i > 0)
	{
		if (s[i] == uc)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int main(void)
{
	printf("ft_strrchr = %s\n", ft_strrchr("oui la vie je est belle", 'j'));
	printf("strrchr = %s\n", strrchr("oui la vie je est belle", 'j'));
}
*/
