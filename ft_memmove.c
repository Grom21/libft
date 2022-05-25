/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 16:43:04 by etisha            #+#    #+#             */
/*   Updated: 2021/10/05 16:43:07 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int					i;
	unsigned char		*d;
	const unsigned char	*s;

	if (dst == 0 && src == 0)
		return (dst);
	if (src > dst)
	{
		d = ft_memcpy(dst, src, len);
		return (dst);
	}
	d = dst + len - 1;
	s = src + len - 1;
	i = len;
	while (i > 0)
	{
		*(d--) = *(s--);
		i--;
	}
	return (dst);
}
/*
int	main(void)
{
	//Данная функция копирует n байт из массива *src в *dst
	//при этом массив dst может быть короче массива src (массивы могут быть любые!)
	// char chardst[] = "0123456789";
    // char charsrc[] = "qwertyuiop";
	int intdst[] = {0,1,2,3,4,5,6,7,8,9};
	int intsrc[] = {9,9,9,9,9,9,9,9,9,9};
	int lenmemmove = 9;
	int *pointerdst;

	printf("  ft_memmove: ");
	pointerdst = ft_memmove(intdst, intsrc, lenmemmove);
	for (int i = 0; i < 9; i++)
		printf("%d ", pointerdst[i]);
	printf("\norig memmove: ");

	int intdst2[] = {0,1,2,3,4,5,6,7,8,9};
	pointerdst = memmove(intdst2, intsrc, lenmemmove);
	for (int i = 0; i < 9; i++)
		printf("%d ", pointerdst[i]);
	return (0);
}*/
