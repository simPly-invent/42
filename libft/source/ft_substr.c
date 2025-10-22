/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed <mobenais@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 22:45:57 by mohamed           #+#    #+#             */
/*   Updated: 2025/10/20 17:21:20 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static size_t	ft_strlen_substr(char const *str)
{
	size_t	i;

	i = MIN_INT_DIGIT;
	while(str[i])
		i++;
	return (i);
}
/*
static char	*ft_strdup_substr(char const *str)
{
	size_t	i;
	char	*ptr;

	i = MIN_INT_DIGIT;
	ptr = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if(!ptr)
		return (NULL);
	while(str[i])
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
*/

char	*ft_empty_str(void)
{
	char	*p;

	p = malloc(sizeof(char));
	p[0] = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	total;
	char	*ptr;

	i = MIN_INT_DIGIT;
	total = ft_strlen_substr(s);
	if (start >= ft_strlen_substr(s))
		return (ft_empty_str());
	ptr = malloc(sizeof(*ptr) * (len + 1));
	if (!ptr)
		return (NULL);
	while (i < (total - start))
	{
		ptr[i] = s[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int main(void)
{
	char const	tab[] = "";
	printf("Result : %s", ft_substr(tab, 5, 5));
}
*/
