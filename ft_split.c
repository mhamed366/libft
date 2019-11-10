/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 02:26:05 by mkchikec          #+#    #+#             */
/*   Updated: 2019/10/27 04:01:47 by mkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		word_nb(char const *s, char c)
{
	int	i;
	int wrd_nb;

	wrd_nb = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c && (i == 0 || s[i - 1] == c))
			wrd_nb++;
		i++;
	}
	return (wrd_nb);
}

static int		word_len(char const *s, char c)
{
	int len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char		*copy(char *dst, char const *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char			**ft_split(char const *s, char c)
{
	t_vard	var;
	char	**splt;

	if (!s)
		return (NULL);
	var.wd_nb = word_nb((char*)s, c);
	if (!(splt = (char **)malloc(sizeof(char *) * (var.wd_nb + 1))))
		return (NULL);
	var.i = 0;
	var.j = 0;
	while (var.j < var.wd_nb)
	{
		while (s[var.i] == c)
			var.i++;
		var.wd_len = word_len((char*)s + var.i, c);
		if (!(splt[var.j] = (char *)malloc(sizeof(char) * (var.wd_len + 1))))
		{
			free(splt);
			return (NULL);
		}
		copy(splt[var.j++], (char*)s + var.i, var.wd_len);
		var.i += var.wd_len;
	}
	splt[var.j] = NULL;
	return (splt);
}
