/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 18:32:23 by etisha            #+#    #+#             */
/*   Updated: 2021/10/04 18:32:26 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = b;
	while (i < len)
	{
		str[i] = c;
		i++;
	}
	return (b);
}
/*//функция принимает любой массив и обрабатывает его
//как массив типа чар, заменяя лен байт символами с
int	main(void)
{
	int imemset[] = {1,2,3,4,5};
	//char	cmemset[] = "12345";
	int		c = 88;
	int		len = 3;
	char	*resultmemset;
	resultmemset = ft_memset(imemset, c, len);
	int f = 0;
	while (f < 5)
	{
		printf("%d ", resultmemset[f]);
		f++;
	}
	printf("\n");
	int imemset2[] = {1,2,3,4,5};
	resultmemset = memset(imemset2, c, len);
	f = 0;
	while (f < 5)
	{
		printf("%d ", resultmemset[f]);
		f++;
	}
	return (0);
}*/
