/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:49:28 by etisha            #+#    #+#             */
/*   Updated: 2021/10/04 15:49:32 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*//функция проверяет предана цифра или нет
int	main(void)
{
	char	intisdigit;
	int		resultdigit;

	intisdigit = '\0';
	resultdigit = ft_isdigit(intisdigit);
	printf("%d\n", resultdigit);
	resultdigit = isdigit(intisdigit);
	printf("%d\n", resultdigit);
	return (0);
}*/
