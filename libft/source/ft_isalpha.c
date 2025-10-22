/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:56:15 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 16:56:20 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

int	ft_isalpha(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if ((uc >= MIN_MIN_ALPHABET && uc <= MAX_MIN_ALPHABET)
		|| (uc >= MIN_MAJ_ALPHABET && uc <= MAX_MAJ_ALPHABET))
		return (1);
	return (0);
}
/*
//------------------------main--function---------------------------------
int main() 
{
   char c = 'L';

   if (ft_isalpha(c)) {
      __builtin_printf("%c is an alphabetic character.\n", c);
   } else {
      __builtin_printf("%c is not an alphabetic character.\n", c);
   }
   return 0;
}
*/
