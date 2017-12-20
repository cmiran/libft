/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiran <cmiran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 14:33:55 by cmiran            #+#    #+#             */
/*   Updated: 2017/12/20 14:36:13 by cmiran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcnew(size_t size, char c)
{
	char	*str;

	if (!(str = (char *)malloc(sizeof(*str) * size + 1)))
		return (NULL);
	return (ft_memset(str, c, size + 1));
}
