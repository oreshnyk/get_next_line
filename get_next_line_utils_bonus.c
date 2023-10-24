/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreshetn <oreshetn@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:49:38 by oreshetn          #+#    #+#             */
/*   Updated: 2023/08/23 18:49:40 by oreshetn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	if (!s1)
		return (ft_strdup(s2));
	res = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
	{
		free (s1);
		return (NULL);
	}
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		res[i++] = s2[j++];
	res[i] = '\0';
	free (s1);
	return (res);
}

char	*ft_strchr(char *s, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	if (!s)
		return (NULL);
	while (i <= len)
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize <= 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize -1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*res;

	len = ft_strlen(s1) + 1;
	res = (char *) malloc(len * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, len);
	return (res);
}
