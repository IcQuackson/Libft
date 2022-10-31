/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedgonca <pedgonca@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:49:37 by pedgonca          #+#    #+#             */
/*   Updated: 2022/10/29 16:51:16 by pedgonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	needle_len;

	needle_len = ft_strlen((char *) needle);
	if (needle_len == 0)
		return ((char *) haystack);
	i = 0;
	if (len < needle_len || ft_strlen(haystack) < needle_len)
		return (NULL);
	while (i <= len - needle_len)
	{
		if (ft_strncmp(haystack, needle, needle_len) == 0)
			return ((char *) haystack);
		i++;
		haystack++;
	}
	return (NULL);
}
