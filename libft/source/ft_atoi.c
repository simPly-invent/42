/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 16:54:32 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 16:54:36 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

static int	ft_is_space(char c)
{
	if (((c >= MIN_VALUE_WHITESPACE) && (c <= MAX_VALUE_WHITESPACE))
		|| (c == SPACE))
		return (1);
	return (MIN_INT_DIGIT);
}

static int	ft_is_digit(char c)
{
	if (c >= MIN_CHAR_DIGIT && c <= MAX_CHAR_DIGIT)
		return (1);
	return (MIN_INT_DIGIT);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	i = MIN_INT_DIGIT;
	sign = 1;
	result = MIN_INT_DIGIT;
	while (ft_is_space(str[i]) == 1)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}
	}
	while (ft_is_digit(str[i]) == 1)
	{
		result = result * 10 + (str[i] - MIN_CHAR_DIGIT);
		i++;
	}
	return (result * sign);
}
/*
//----------------main-function-----------------

int main(void)
{
    __builtin_printf("%d", ft_atoi("      123456"));
}
*/
