/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:24:25 by etisha            #+#    #+#             */
/*   Updated: 2021/10/05 19:24:28 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	char		*d;
	const char	*s;

	d = dst;
	s = src;
	if (dstsize == 0)
	{
		i = ft_strlen(src);
		return (i);
	}
	i = 0;
	while (i < dstsize - 1 && s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	i = ft_strlen(src);
	return (i);
}
/*// функция копирует сайз-1 элементов из src в dst

int	main(void)
{
	char	dst[15] = "999";
	char	src[] = "lorem";
	int		size = 15;
	int		result;

	result = ft_strlcpy(dst, src, size);
	printf("ft_strlcpy %d\n", result);
	printf("%s\n", dst);
	result = strlcpy(dst, src, size);
	printf("strlcpy %d\n", result);
	printf("%s\n", dst);
	return (0);
}*/
