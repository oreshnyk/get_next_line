/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oreshetn <oreshetn@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:49:25 by oreshetn          #+#    #+#             */
/*   Updated: 2023/08/23 18:49:27 by oreshetn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
char	*ft_strchr(char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char *s1, char *s2);
#endif
