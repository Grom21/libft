/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:35:44 by etisha            #+#    #+#             */
/*   Updated: 2021/10/06 14:35:47 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		freesizedst;
	int			z;
	int			x;
	int			lendst;

	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	lendst = ft_strlen(dst);
	freesizedst = dstsize - lendst;
	z = 0;
	while (dst[z] != '\0')
		z++;
	x = 0;
	while (freesizedst > 1 && src[x] != '\0')
	{
		dst[z] = src[x];
		freesizedst--;
		z++;
		x++;
	}
	dst[z] = '\0';
	return (lendst + ft_strlen(src));
}
/*// Поведение данной функции аналогично поведению функции strlcpy
//однако конкотинация работает не должным образом - она копирует
// только в свободное место dst!

int	main(void)
{
	char	dst[55] = "rrrrrr";
	char	src[] = "lorem ipsum";
	int		dstsize = -1;
	int		result;

	//dst[0] = '\0';
	//dst[11] = 'a';
	result = ft_strlcat(dst, src, dstsize);
	printf("ft_strlcat %d\n", result);
	for (int i = 0; i < 15; i++)
		printf("%c", dst[i]);
	printf("\n");

	char	dst2[15] = "rrrrrr";
	//dst2[0] = '\0';
	//dst2[11] = 'a';
	result = strlcat(dst2, src, dstsize);
	printf("strlcat %d\n", result);
	for (int x = 0; x < 15; x++)
		printf("%c", dst2[x]);
	return (0);
}*/
