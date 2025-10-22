/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:56:35 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 16:56:41 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_isascii(int c)
{
	return ((c >= 0) && (c <= 0x7F));
}
/*
//it work like this

int	ft_isascii(int c) 
{ 
	return (c >= 0 && c <= 127);
}


char chars[] = {'A', 255, 'Z'};

#define SIZE sizeof( chars ) / sizeof( char )

int main()
{
    int   i;
    for(i = 0; i < SIZE; i++)
    {
	    printf( "Char %c is %san ASCII character\n",
			    chars[i],
			    ( ft_isascii( chars[i] ) ) ? "" : "not " );
    }
}
*/
