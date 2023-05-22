/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r-afonso < r-afonso@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:35:31 by r-afonso          #+#    #+#             */
/*   Updated: 2023/05/18 21:38:16 by r-afonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	index;
	size_t	len;

	len = ft_strlen(src);
	index = 0;
	
	if (size == 0)
		return (len);
	else
	{
		while (--size && *(src + index))
		{
			*(dst + index) = *(src + index);
			index++;
		}	
		*(dst + index) = '\0';
	}
	return (len);
}

// int main()
// {
// 	char src[] = "coucou";
// 	char dest[10] = {'A','A','A','A','A','A','A','A','A','A'};

// 	size_t t;
// 	t = ft_strlcpy(dest, src, 2);
// 	return (0);
// }
