/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:02:04 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 17:27:54 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = MIN_INT_DIGIT;
	while (str[i])
		i++;
	return (i);
}
/*
----------------main-function---------------
int	main(int argc, char **argv)
{
	if(argc == 2)
		__builtin_printf("%ld", ft_strlen(argv[1]));
	return (0);
}
*/
