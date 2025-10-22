/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:57:11 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 16:57:18 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_isprint(int ch)
{
	unsigned char	uc;

	uc = (unsigned char)ch;
	if (uc >= 32 && uc <= 126)
	{
		return (1);
	}
	return (0);
}
/*
//-------it-work-like-this---------//
int	ft_isprint(int ch)
{
	unsigned char	uc;

	uc = (unsigned char)ch;
	return (uc >= 32 && uc <= 126);
}


int main(void)
{
	if(ft_isprint(127) == 1)
		printf("Your string is printable");
	else
		printf("Your string is not");
}
*/
