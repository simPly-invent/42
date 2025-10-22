/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:55:59 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 16:56:02 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_isalnum(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if ((uc >= MIN_MIN_ALPHABET && uc <= MAX_MIN_ALPHABET)
		|| (uc >= MIN_MAJ_ALPHABET && uc <= MAX_MAJ_ALPHABET)
		|| (uc >= MIN_CHAR_DIGIT && uc <= MAX_CHAR_DIGIT))
		return (1);
	return (0);
}
/*
//-----------------------main-function----------------------------
#include <stdio.h>
#include <ctype.h>
int main()
{
    char c;
    int result;

    c = '5';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'Q';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = 'l';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    c = '+';
    result = ft_isalnum(c);
    printf("When %c is passed, return value is %d\n", c, result);

    return 0;
}
*/
