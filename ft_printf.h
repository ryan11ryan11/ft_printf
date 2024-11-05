/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 11:07:53 by junhhong          #+#    #+#             */
/*   Updated: 2024/01/16 11:09:05 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H
# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int				decitohex(unsigned int num, int bigorsmall);
void			ft_putchar_fd(char c, int fd);
int				ft_printf(const char *contentptr, ...);
char			*ft_itoa(int n);
char			*ft_strdup(const char *s);
void			*ft_calloc(size_t nmemb, size_t size);
void			*ft_memset(void *s, int c, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
unsigned int	case_u(unsigned int n);
int				ptr_case(uintptr_t num);
int				case_sentence(char *content, int fd, int is_char, int is_di);
size_t			ft_strlen(const char *s);
int				case_char(int c, int fd, int is_percent);

#endif