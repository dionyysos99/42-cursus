/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymetinog <ymetinog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:18:31 by ymetinog          #+#    #+#             */
/*   Updated: 2024/10/15 03:23:57 by ymetinog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_atoi(const char *str);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_strncmp(char *s1, char *s2, size_t len);

size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t maxlen);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

void	*ft_memset(void *b, int c, size_t len);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t len);
void	ft_bzero(void *s, size_t n);
void    ft_striteri(char *s, void (*f)(unsigned int , char*));
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);

char    *ft_itoa(int n);
char    *ft_strmapi(char const *s, char (*f)(unsigned int , char));
char    **ft_split(char const *str, char c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strrchr(char *str, int c);
char	*ft_strnstr(char *hastack, char *needle, size_t len);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);

#endif