/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etisha <etisha@student.21-school.>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 19:02:35 by etisha            #+#    #+#             */
/*   Updated: 2021/10/07 19:02:38 by etisha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*s;

	s = (void *)malloc(size * count);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, (count * size));
	return (s);
}
/*// калок не только выделяет память но и забивает ее нулями
int	main(void)
{
	int		c = 2;
	int		s = 1;
	char	*p;

	p = ft_calloc(c, s);
	return (0);
}*/
