/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r-afonso < r-afonso@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:35:31 by r-afonso          #+#    #+#             */
/*   Updated: 2023/05/19 13:36:29 by r-afonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*src_p;
	char	*dest_p;

	src_p = (char *)src;
	dest_p = (char *)dest;
	while (n > 0)
	{
		*(dest_p) = *(src_p);
		dest_p++;
		src_p++;
		n--;
	}
	return (dest);
}
