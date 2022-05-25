/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:58:52 by etisha            #+#    #+#             */
/*   Updated: 2021/10/07 16:58:54 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	int				x;

	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	if (ft_strlen(haystack) == 0 || ft_strlen(haystack) < ft_strlen(needle))
		return (NULL);
	i = 0;
	while (haystack[i] != '\0' && len > i)
	{
		x = 0;
		while (haystack[i] == needle[x] && haystack[i] != '\0' \
		&& needle[x] != '\0' && len > i)
		{
			i++;
			x++;
		}
		if (needle[x] == '\0')
			return ((char *)haystack + (i - x));
		if (x == 0)
			i++;
		else
			i = i - x + 1;
	}
	return (NULL);
}
/*//функция ищет вхождение строки 2 в строке 1. Если не найдено - NULL
int	main(void)
{
	char	cstrstr1[] = "aaabcabcd";
	char	cstrstr2[] = "aabc";
	int		lenstrnstrn = -1;
	char	*pointerstrstr;

	pointerstrstr = ft_strnstr(cstrstr1, cstrstr2, lenstrnstrn);
	printf("ft_strlen: %s\n", pointerstrstr);
	pointerstrstr = strnstr(cstrstr1, cstrstr2, lenstrnstrn);
	printf("   strlen: %s\n", pointerstrstr);
	return (0);
}*/
