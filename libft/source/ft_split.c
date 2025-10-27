/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:45:38 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/28 00:04:32 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	count_word(const char *s1, char c)
{
	size_t	word;
	size_t	i;

	i = 0;
	word = 0;
	while (s1[i])
	{
		if (s1[i] == c)
		{
			word++;
		}
		i++;
	}
	return (word);
}

static void	ft_free_all(char **strs, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(strs);
		i++;
	}
	return (NULL);
}

static char	*ft_strdup_range(const char s1, size_t start, size_t end)
{
	char	*ptr;
	int	size;
	int	i;
	
	size = (end - start) + 1;
	ptr = malloc(sizeof(*ptr) * size);
	if (!ptr)
		return (NULL);
	while (i < size)
	{
		ptr[i] = s1[start++];
		i++;
	}
	ptr[i] = '\0';
	return ptr;
}

char	**ft_split(char const *s, char c)
{
	char **ptr;
	int	words_index;
	int	size_big_array;
	int	i;
	int	start;
	int	end;
	
	i = 0;
	words_index = 0;
	start = 0;
	end = 0;
	size_big_array = count_word(s1, c) + 1;
	ptr = malloc(sizeof(*ptr) * size_big_array);
	if (!ptr)
		return (NULL);
	while (words_index <= size_big_array)
	{
		start = end - start;
		while (s1[start] == c)
		{
			end = start;
			while (s1[end] != c)
			{
				if (s1[end])
					ptr[words_index] = ft_strdup_range(s1, start, end);
				end++;
			}
			start++;
		}
		words_index++;
	}
	return (ptr);
}
