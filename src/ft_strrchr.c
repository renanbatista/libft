/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r-afonso < r-afonso@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:35:31 by r-afonso          #+#    #+#             */
/*   Updated: 2023/05/18 21:41:14 by r-afonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*s_last;
	int		finded;

	finded = 0;
	if (c < 0 || c > 126)
		return ((char *)s);
	s_last = (char *) s;
	while (*(s))
	{
		if (*(s) == c)
		{
			s_last = (char *) s;
			finded = 1;
		}
		s++;
	}
	if (*(s) == c)
		return ((char *) s);
	if (finded == 1)
	{
		return (s_last);
	}
	return (NULL);
}
