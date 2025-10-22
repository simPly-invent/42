/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:56:55 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 16:56:59 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_isdigit(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if ((uc >= MIN_CHAR_DIGIT) && (uc <= MAX_CHAR_DIGIT))
		return (1);
	return (0);
}
/*
//------------------------main--function-------------------------------//
#include <stdio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c",&c);

    if (ft_isdigit(c) == 0)
         printf("%c is not a digit.",c);
    else
         printf("%c is a digit.",c);
    return 0;
}
*/
