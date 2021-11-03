/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javi_pop <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 21:16:26 by javi_pop          #+#    #+#             */
/*   Updated: 2021/11/03 12:33:35 by javigarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(const char *s);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dest, const char *scr, size_t size);
int			ft_toupper(int c);
int			ft_tolower(int c);
const char	*ft_strnstr(const char *hayctack, const char *needle, size_t len);
int			ft_atoi(const char *str);
char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memset(void *str, int c, size_t n);
void		ft_bzero(void *str, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_calloc(size_t count, size_t size);
char		*ft_strdup(const char *src);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);

#endif
