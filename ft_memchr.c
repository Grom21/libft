/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 19:44:37 by etisha            #+#    #+#             */
/*   Updated: 2021/10/06 19:44:40 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	str = s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		i++;
		str++;
	}
	if (c == '\0' && *str == '\0')
		return ((void *)str);
	return (NULL);
}

/*// функция ищет адрес символа n в массиве s и возвращает его адрес,
//если символа нет NULL
int	main(void)
{
	char	imemchr[] = {0, 1, 2, 3, 4, 5};
	//int		imemchr[] = {-49, 49, 1, -1, 0, -2, 2};
	int		foundmemchr = 2 + 256;
	int		sizememchr = 3;
	char	*resultmemchr;

	resultmemchr = ft_memchr(imemchr, foundmemchr, sizememchr);
	printf("ft_memchr: %s\n", resultmemchr);
	resultmemchr = memchr(imemchr, foundmemchr, sizememchr);
	printf("   memchr: %s\n", resultmemchr);
	return (0);
}*/
