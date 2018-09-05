/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubfree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiran <cmiran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:23:11 by cmiran            #+#    #+#             */
/*   Updated: 2018/09/05 15:53:23 by cmiran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsubfree(char const *s, unsigned int start, size_t len)
{
	char	*sstr;
	size_t	i;

	if (!s)
		return (NULL);
	if (!(sstr = (char *)malloc(sizeof(*sstr) * len + 1)))
		return (NULL);
	i = 0;
	while (s[start] && len--)
		sstr[i++] = s[start++];
	sstr[i] = '\0';
	ft_memdel(*(void **)&s);
	return (sstr);
}
