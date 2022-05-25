/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:53:05 by etisha            #+#    #+#             */
/*   Updated: 2021/10/07 19:53:08 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s;
	size_t	size;
	size_t	count;

	size = 1;
	count = ft_strlen(s1) + 1;
	s = ft_calloc(count, size);
	if (s == NULL)
		return (0);
	size = ft_strlcpy(s, s1, count);
	return (s);
}
/*// Копирует строку в новую замолоченную строку
//данная функция как оригинал имеет мусор после последнего символа!
int	main(void)
{
	char	stringstrdup[] = "12345";
	char	*pstringstrdup;

	printf("ft_strdup: ");
	pstringstrdup = ft_strdup(stringstrdup);
	for (int i = 0; i < 10; i++)
		printf("%c", pstringstrdup[i]);
	printf("\n   strdup: ");
	pstringstrdup = strdup(stringstrdup);
	for (int i = 0; i < 10; i++)
		printf("%c", pstringstrdup[i]);
	return (0);
}*/
