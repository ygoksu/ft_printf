/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygoksu <ygoksu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 14:10:53 by ygoksu            #+#    #+#             */
/*   Updated: 2022/02/09 16:17:36 by ygoksu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t n)
{
	void	*p;

	p = malloc(num * n);
	if (!p)
		return (p);
	ft_bzero(p, (num * n));
	return (p);
}
