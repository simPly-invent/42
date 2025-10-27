/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:00:31 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/25 16:41:48 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static char	*ft_strcat(char *dest, const char *src)
{
	size_t	dest_len;
	size_t	i;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i])
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*ptr;
	size_t		i;
	size_t		total_len;

	if ((s1 == NULL) || (s2 == NULL))
		return (NULL);
	i = 0;
	if (ft_strlen(s1) > SIZE_T_MAX - ft_strlen(s2) - 1)
		return (NULL);
	total_len = (ft_strlen(s1) + ft_strlen(s2)) + 1;
	ptr = malloc(sizeof(*ptr) * total_len);
	if (!ptr)
		return (NULL);
	ft_strcat(ptr, s1);
	ft_strcat(ptr, s2);
	ptr[total_len] = '\0';
	return (ptr);
}

int main(void)
{
	char *str_1 = "oui je suis gentil";
	char *str_2 = "et con";
	printf("resultat = %s\n", ft_strjoin(str_1, str_2));
}
