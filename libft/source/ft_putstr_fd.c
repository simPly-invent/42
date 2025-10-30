/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:07:34 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/29 18:33:21 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int i = ft_strlen(s);
	write(fd, s, i);
}
/*
int main(void)
{
	ft_putstr_fd("oui je suis malade", 2);
}
*/
