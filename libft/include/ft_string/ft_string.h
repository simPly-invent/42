/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobenais <mobenais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 17:58:25 by mobenais          #+#    #+#             */
/*   Updated: 2025/10/20 18:48:01 by mohamed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/* here we can find some function for string management */

int	ft_atoi(const char *str);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int		ft_isprint(int ch);
size_t	ft_strlen(const char *str);
int	ft_toupper(int ch);
int	ft_tolower(int ch);
int	ft_strncmp(const char *src, const char *dest, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strdup(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

