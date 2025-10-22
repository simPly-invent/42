/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed <mobenais@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 13:17:47 by mohamed           #+#    #+#             */
/*   Updated: 2025/10/20 17:09:33 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static size_t	ft_strlen_strrchr(const char *str)
{
	size_t	i;

	i = MIN_INT_DIGIT;
	while(str[i])
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	unsigned char	uc;

	i = ft_strlen_strrchr(s);
	uc = (unsigned char)c;
	while(i > 0)
	{
		if(s[i] == uc)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

int main(void)
{
	printf("ft_strrchr = %s\n", ft_strrchr("oui la vie je est belle", 'j'));
	printf("strrchr = %s\n", strrchr("oui la vie je est belle", 'j'));
}
