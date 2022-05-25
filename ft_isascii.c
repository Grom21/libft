/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:11:34 by etisha            #+#    #+#             */
/*   Updated: 2021/10/04 16:11:37 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
/*// функция проверяет является ли код символа ascii допустимым
int	main(void)
{
	int		cisascii;
	int		resultisascii;

	cisascii = -1;
	resultisascii = ft_isascii(cisascii);
	printf("%d\n", resultisascii);
	resultisascii = isascii(cisascii);
	printf("%d\n", resultisascii);
	return (0);
}*/
