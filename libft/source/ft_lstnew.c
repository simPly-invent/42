/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:37:56 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/30 21:24:57 by mobenais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;
	node = malloc(sizeof(*node));
	if (!node)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}
