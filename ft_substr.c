/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 18:54:05 by mkchikec          #+#    #+#             */
/*   Updated: 2019/10/24 14:11:51 by mkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*r;
	char	*p;
	size_t	lens;

	if (!s)
		return (NULL);
	lens = ft_strlen(&s[start]);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	lens = (lens <= len) ? lens : len;
	str = (char*)malloc(sizeof(char) * (lens + 1));
	if (!str)
		return (NULL);
	r = str;
	p = (char*)(s + start);
	if (str)
	{
		while (lens-- && *p)
		{
			*(str++) = *(p++);
		}
		*str = '\0';
	}
	return (r);
}
