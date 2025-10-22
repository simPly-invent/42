/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:49:57 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 18:47:48 by mohamed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*Here there is proto of function who can read bloc memory*/
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
/*--------------------------------------------------------*/
