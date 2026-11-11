/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfaris <cfaris@student.1337.ma>            #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-14 15:03:24 by cfaris            #+#    #+#             */
/*   Updated: 2026-10-14 15:03:24 by cfaris           ###   ########.1337     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	i;
	size_t	dd;

	s = ft_strlen(src);
	d = 0;
	while (d < size && dst[d])
		d++;
	if (d == size)
		return (size + s);
	dd = d;
	i = 0;
	while (src[i] && d + 1 < size)
	{
		dst[d] = src[i];
		i++;
		d++;
	}
	dst[d] = '\0';
	return (dd + s);
}
