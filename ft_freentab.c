/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freentab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiran <cmiran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 01:24:02 by cmiran            #+#    #+#             */
/*   Updated: 2018/01/22 14:40:19 by cmiran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_freentab(char ***tab, int n)
{
	char	**tmp;

	tmp = *tab;
	while (n)
	{
		free(**tab);
		**tab = NULL;
		(*tab)++;
		n--;
	}
	free(tmp);
}
