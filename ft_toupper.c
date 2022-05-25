/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 16:30:24 by etisha            #+#    #+#             */
/*   Updated: 2021/10/06 16:30:28 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c = c - 32;
		return (c);
	}
	return (c);
}
/*//функция возвращает большую букву если получает маленькую
int	main(void)
{
	char	ctoupper = 'a';
	int		rtoupper;

	rtoupper = ft_toupper(ctoupper);
	printf("%c\n", rtoupper);
	rtoupper = toupper(ctoupper);
	printf("%c\n", rtoupper);
	return (0);
}*/
