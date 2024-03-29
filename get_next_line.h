/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kevin <kevin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 13:35:56 by kparis            #+#    #+#             */
/*   Updated: 2019/12/02 11:23:45 by kevin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4

# endif
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_struct
{
	char	*buf;
	char	*str;
	char	*tmp;
	int		nb_read;
	int		init;
}				t_struct;

int				get_next_line(int fd, char **line);
void			ft_putstr(char *str);
char			*ft_strjoin(char **s1, char *s2);
char			*ft_strdup(const char *src);
char			*ft_substr(char const *s, unsigned int start, size_t len);
size_t			ft_strlen(const char *str);

#endif
