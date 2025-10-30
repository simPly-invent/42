/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:31:44 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/29 18:34:27 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (fd == 1)
	{
		if (n == -2147483648)
		{
			write(1, "-2147483648", 11);
			return ;
		}
		if (n < 0)
		{
			write(1, "-", 1);
			n = n * -1;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, 1);
		}
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putstr_fd("error", 2);
}
/*
int main(void)
{
	ft_putnbr_fd(-2147483648, 2);
}
*/
