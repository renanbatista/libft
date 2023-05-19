/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r-afonso < r-afonso@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:35:31 by r-afonso          #+#    #+#             */
/*   Updated: 2023/05/18 21:39:56 by r-afonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*src_p;
	char	*dest_p;

	dest_p = (char *) dest;
	src_p = (char *) src;
	if (dest < src)
	{
		while (n > 0)
		{
			*(dest_p) = *(src_p);
			dest_p++;
			src_p++;
			n--;
		}
		return (dest);
	}
	else if (dest > src)
	{
		while (n > 0)
		{
			*(dest_p + n) = *(src_p + n);
			n--;
		}
	}
	return (dest);
}
