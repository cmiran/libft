/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_set_bit.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiran <cmiran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 11:15:03 by cmiran            #+#    #+#             */
/*   Updated: 2019/06/24 11:15:31 by cmiran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_set_bit(size_t nbr)
{
	size_t	count;

	while (nbr)
	{
		nbr &= (nbr - 1);
      	count++;
	}
	return (count);
}
