/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 01:01:05 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/24 02:12:40 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	check_chr(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if(set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		k;
	size_t		i;
	size_t		j;
	char	*ptr;
	
	i = 0;
	k = 0;
	j = ft_strlen(s1);
	while (s1[i] && check_chr(s1[i], set))
		i++;
	while(s1[j] >= 0 && check_chr(s1[j - 1], set))
		j--;
	ptr = malloc(sizeof(*ptr) * (j - i) + 1);
	if (!ptr)
		return (NULL);
	while(i < j)
	{
		ptr[k] = s1[i];
		i++;
		k++;
	}
	ptr[i] = '\0';
	return ptr;
}

int main(void)
{
	printf("result : %s", ft_strtrim("uouiuuuu", "u"));
}
