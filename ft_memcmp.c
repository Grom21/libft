/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 16:09:53 by etisha            #+#    #+#             */
/*   Updated: 2021/10/07 16:09:55 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = s1;
	str2 = s2;
	i = 0;
	while (i < n)
	{
		if (*str1++ != *str2++)
			return (*--str1 - *--str2);
		i++;
	}
	return (0);
}
/*// Данная функция побайтно сравнивает два массива
int	main(void)
{
	char	cmemcmp1[] = "123456";
	char	cmemcmp2[] = "123456";
	int		sizememcmp = 6;
	int		rmemcmp;

	rmemcmp = ft_memcmp(cmemcmp1, cmemcmp2, sizememcmp);
	printf("ft_memcmp: %d\n", rmemcmp);
	rmemcmp = memcmp(cmemcmp1, cmemcmp2, sizememcmp);
	printf("   memcmp: %d\n", rmemcmp);
	return (0);
}*/
