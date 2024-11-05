/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhhong <junhhong@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:25:13 by junhhong          #+#    #+#             */
/*   Updated: 2024/01/16 12:50:04 by junhhong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s);
void	*ft_memmove(void *dest, const void *src, size_t n);

char	*ft_strdup(const char *s)
{
	int		len_s;
	char	*arr;

	len_s = ft_strlen((char *)s);
	arr = (char *)malloc((len_s + 1) * sizeof(char));
	if (!arr)
		return (NULL);
	ft_memmove(arr, (char *)s, len_s);
	arr[len_s] = '\0';
	return (arr);
}
