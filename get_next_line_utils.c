/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreshetn <oreshetn@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 16:20:56 by oreshetn          #+#    #+#             */
/*   Updated: 2023/08/23 16:20:59 by oreshetn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*string;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	string = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!string)
		return (0);
	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		string[i] = s2[j];
		i++;
		j++;
	}
	string[i] = '\0';
	return (string);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;
	char	ch;

	str = (char *)s;
	ch = (char)c;
	i = 0;
	while (str[i] != ch)
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return (str + i);
}

void	*ft_memset(void *b, int c, int len)
{
	int				i;
	unsigned char	*p;

	p = b;
	i = 0;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	total_size;

	if (count == 0 || size == 0)
	{
		total_size = 1;
	}
	else
	{
		total_size = count * size;
	}
	str = (char *)malloc(total_size);
	if (!str)
		return (NULL);
	ft_memset(str, 0, total_size);
	return ((void *)str);
}
