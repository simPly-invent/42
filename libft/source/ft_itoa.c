/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:57:51 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/28 20:44:27 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static	int len_nbr(int n)
{
	int i;

	i = 0;
	if (n <= 0)
		i = 1;
	while(n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int	len;
	unsigned int	tmp;

	len = len_nbr(n);
	ptr = malloc(sizeof(*ptr) * (len + 1));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	if (n < 0)
		tmp = -n;
	else
		tmp = n;
	while (len--)
	{
		ptr[len] = (tmp % 10) + '0';
		tmp /= 10;
		if (n < 0 && len == 0)
		{
			ptr[0] = '-';
			break;
		}
	}
	return (ptr);
}

int main(void)
{
	printf("%s\n", ft_itoa(-123456));
}
