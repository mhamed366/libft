/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkchikec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:02:15 by mkchikec          #+#    #+#             */
/*   Updated: 2019/10/24 07:26:52 by mkchikec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*res;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (!(res = (char*)malloc((i + j + 2) * sizeof(char))))
		return (0);
	i = -1;
	j = -1;
	while (s1[++i])
		res[i] = s1[i];
	i--;
	while (s2[++j])
		res[++i] = s2[j];
	res[++i] = '\0';
	return (res);
}
