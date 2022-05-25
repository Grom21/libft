/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:20:26 by etisha            #+#    #+#             */
/*   Updated: 2021/10/04 21:20:29 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*// функция заполняет н байт массива '\0'
int	main(void)
{
	int f;
	int ibzero1[] = {1,2,3,4,5};
	int ibzero2[] = {1,2,3,4,5};
	// char	cbzero1[] = "12345";
	// char	cbzero2[] = "12345";
	int		n = 1;
	ft_bzero(ibzero1, n);
	f = 0;
	while (f < 5)
	{
		printf("%d", ibzero1[f]);
		f++;
	}
	printf("\n");
	bzero(ibzero2, n);
	f = 0;
	while (f < 5)
	{
		printf("%d", ibzero2[f]);
		f++;
	}
	return (0);
}*/
