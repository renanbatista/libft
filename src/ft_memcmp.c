/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r-afonso < r-afonso@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:35:31 by r-afonso          #+#    #+#             */
/*   Updated: 2023/05/18 21:00:09 by r-afonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*s1_p;
	char	*s2_p;

	s1_p = (char *)s1;
	s2_p = (char *)s2;
	if (n == 0)
		return (0);
	while (*(s1_p) == *(s2_p) && --n)
	{
		s1_p++;
		s2_p++;
	}
	return (*(s2_p) - *(s1_p));
}
