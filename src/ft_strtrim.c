/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: r-afonso < r-afonso@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:35:31 by r-afonso          #+#    #+#             */
/*   Updated: 2023/05/18 21:45:29 by r-afonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	start_string(char const *s1, char const *set)
{
	int	index;
	int	index_2;
	int	control;

	control = 0;
	index = -1;
	while (index++, *(s1 + index))
	{
		index_2 = -1;
		while (index_2++, *(set + index_2))
		{
			if (*(s1 + index) == *(set + index_2))
			{
				control = 1;
				break ;
			}
		}
		if (control == 0)
			break ;
		control = 0;
	}
	return (index);
}

static int	end_string(char const *s1, char const *set)
{
	int	index;
	int	index_2;
	int	control;

	control = 0;
	index = ft_strlen(s1);
	while (index--, *(s1 + index))
	{
		index_2 = -1;
		while (index_2++, *(set + index_2))
		{
			if (*(s1 + index) == *(set + index_2))
			{
				control = 1;
				break ;
			}
		}
		if (control == 0)
			break ;
		control = 0;
		index--;
	}
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		index;
	int		start;
	int		stop;

	start = start_string(s1, set);
	stop = end_string(s1, set);
	if (stop < start)
	{
		str = (char *)ft_calloc(1, sizeof(char));
		*str = '\0';
	}
	else
	{
		str = (char *)ft_calloc((stop - start + 2), sizeof(char));
		index = 0;
		while (start <= stop)
		{
			*(str + index) = *(s1 + start);
			start++;
			index++;
		}
		*(str + index) = '\0';
	}
	return (str);
}
