/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/27 14:16:06 by novan-ve       #+#    #+#                */
/*   Updated: 2019/12/13 12:10:59 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int		get_next_line(int fd, char **line);
int		ft_cpy(char **line, char **str, int fd);
int		ft_strcheck(char *str);
char	*ft_strread(int fd, char **str, ssize_t red);
char	*ft_plusn(char *str);
size_t	ft_strlen(const char *s);
char	*ft_strdup(char *s1);
char	*ft_strcat2(char *origin, char *append, char *dest);
char	*ft_strcat(char *origin, char *append);
char	*ft_substr(char *str);

#endif
