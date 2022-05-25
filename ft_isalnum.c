/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:00:56 by etisha            #+#    #+#             */
/*   Updated: 2021/10/04 16:00:58 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') \
	|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*//функци проверяет цифра и буква ли переданный символ
int	main(void)
{
	int		intisalnum;
	int		resultisalnum;

	intisalnum = '\0';
	resultisalnum = ft_isalnum(intisalnum);
	printf("%d\n", resultisalnum);
	resultisalnum = isalnum(intisalnum);
	printf("%d\n", resultisalnum);
	return (0);
}*/
