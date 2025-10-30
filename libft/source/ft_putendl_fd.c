/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:20:47 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/29 17:31:25 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;
	
	i = ft_strlen(s);
	write(fd, s, i);
	write(fd, "\n", 1);
}
/*
int main(void)
{
	ft_putendl_fd("oui je m'appelle", 2);
}
*/
