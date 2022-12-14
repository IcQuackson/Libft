/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgonca <pedgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 14:05:51 by pedgonca          #+#    #+#             */
/*   Updated: 2022/10/29 16:51:43 by pedgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	size_t		s_len;
	size_t		sub_len;
	size_t		i;

	s_len = ft_strlen(s);
	sub_len = 0;
	i = 0;
	while ((size_t) start + i < s_len && i < len)
	{
		sub_len++;
		i++;
	}
	sub = malloc((sub_len + 1) * sizeof(char));
	ft_memcpy(sub, s + start, sub_len);
	sub[i] = '\0';
	return (sub);
}
