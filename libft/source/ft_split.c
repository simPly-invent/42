/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:45:38 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/28 11:47:32 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	count_word(char const *s1, char c)
{
	size_t	word;
	size_t	i;
	size_t	boul;

	i = 0;
	word = 0;
	boul = 1;
	while (s1[i])
	{
		if (s1[i] == c)
			boul = 1;
		if (s1[i] != c && boul == 1)
		{
			boul = 0;
			word++;
		}
		i++;
	}
	return (word);
}

static char	**ft_free_all(char **strs, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(strs[i++]);
	free(strs);
	return (NULL);
}

static char	*ft_strdup_range(char const *s1, size_t start, size_t end)
{
	char	*ptr;
	int	size;
	int	i;
	
	i = 0;
	size = (end - start) + 1;
	ptr = malloc(sizeof(*ptr) * size);
	if (!ptr)
		return (NULL);
	while (i < size)
		ptr[i++] = s1[start++];
	ptr[i] = '\0';
	return ptr;
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int	words_index;
	int	size_big_array;
	int	i;
	int	start;
	int	end;
	
	if (!s)
		return (NULL);
	i = 0;
	words_index = 0;
	size_big_array = count_word(s, c) + 1;
	ptr = malloc(sizeof(*ptr) * size_big_array);
	if (!ptr)
		return (NULL);
	while (words_index < size_big_array)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		end = i;
		ptr[words_index] = ft_strdup_range(s, start, end);
		if (!ptr[words_index])
			return ft_free_all(ptr, words_index);
		words_index++;
	}
	ptr[count_word(s, c)] = NULL;
	return (ptr);
}

int main(void)
{
    char c = ' ';
    const char *s1 = "             oui je suis malade ";
    char **res = ft_split(s1, c);
    size_t i = 0;

    if (!res)
    {
        printf("ft_split returned NULL\n");
        return 1;
    }

    while (res[i])
    {
        printf("token %zu: \"%s\"\n", i, res[i]);
        free(res[i]);
        i++;
    }
    free(res);
    return 0;
}

