/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed <mobenais@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 18:43:41 by mohamed           #+#    #+#             */
/*   Updated: 2025/09/26 02:33:09 by mohamed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_tolower(int ch)
{
	unsigned char	uc;

	uc = (unsigned char)ch;
	if (uc >= MIN_MAJ_ALPHABET && uc <= MAX_MAJ_ALPHABET)
		uc += CONVERT_CASE;
	return (uc);
}
//---------------------main-function-----------------------//
/*
int main(void)
{
	printf("A --> a = %c\n", ft_tolower('A'));
	return (0);
}
*/
