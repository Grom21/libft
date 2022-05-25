/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:40:24 by etisha            #+#    #+#             */
/*   Updated: 2021/10/05 14:40:27 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (d == 0 && s == 0)
		return (dst);
	i = 0;
	while (i < n)
	{
		*(d++) = *(s++);
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
    //Данная функция копирует n байт из массива *src в *dst
	//(массивы могут быть любые!)
    // char chardst[] = "0123456789";
    // char charsrc[] = "qwertyuiop";
	int	intdst[] = {0,1,2,3,4,5,6,7,8,9};
	int	intsrc[] = {9,9,9,9,9,9,9,9,9,9};
	int	sizememcpy = 4;
	//!в случае если данное значение больше длинны строки
	//мой функция работает, а оригинальная сигфолд!
	int	*pointerdst;

	printf("  ft_memcpy: ");
	pointerdst = ft_memcpy(intdst, intsrc, sizememcpy);
	for (int i = 0; i < 10; i++)
		printf("%d ", pointerdst[i]);
	printf("\norig memcpy: ");

	int	intdst2[] = {0,1,2,3,4,5,6,7,8,9};
	pointerdst = memcpy(intdst2, intsrc, sizememcpy);
	for (int i = 0; i < 10; i++)
		printf("%d ", pointerdst[i]);
	return (0);
}*/
