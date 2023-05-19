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
	}
	return (index);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		index;
	int		start;
	int		stop;

	index = 0;
	start = start_string(s1, set);
	stop = end_string(s1, set);
	str = (char *) malloc(sizeof(char) * (stop - start));
	if (str == NULL)
		return (NULL);
	while (start <= stop)
	{
		*(str + index) = *(s1 + start);
		start++;
		index++;
	}
	return (str);
}
