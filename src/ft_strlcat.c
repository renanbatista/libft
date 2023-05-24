/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r-afonso < r-afonso@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:35:31 by r-afonso          #+#    #+#             */
/*   Updated: 2023/05/12 19:01:47 by r-afonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_dst;
	size_t	size_src;

	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	dst = &dst[size_dst];
	if (size < size_dst)
		return (size_src + size);
	if (size == 0)
		return (size_src + size_dst);
	else
	{
		while (*(src) && size-- - 1 > size_dst)
			*(dst++) = *(src++);
	}
	*(dst + size_dst) = '\0';
	return (size_src + size_dst);
}
