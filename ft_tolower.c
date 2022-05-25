/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 17:09:07 by etisha            #+#    #+#             */
/*   Updated: 2021/10/06 17:09:09 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	return (c);
}
/*// функция возврашает маленькую букву если получает большую
int	main(void)
{
	char	ctolower = 'Z';
	int		rtolower;

	rtolower = ft_tolower(ctolower);
	printf("%c\n", rtolower);
	rtolower = tolower(ctolower);
	printf("%c\n", rtolower);
	return (0);
}*/
