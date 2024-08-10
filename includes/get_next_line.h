/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anporced <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:02:08 by antoine           #+#    #+#             */
/*   Updated: 2024/08/10 12:18:20 by anporced         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

size_t	ft_strlen_gnl(char const *str);
char	*ft_strjoin_gnl(char *s1, char const *s2);
char	*ft_stash_update(char *stash);
char	*ft_get_line(char *stash);
char	*ft_read(int fd, char *buf, char *stash);
char	*get_next_line(int fd);
char	*ft_strdup_gnl(char const *src);
char	*ft_strchr_gnl(char const *str, int c);
char	*ft_substr_gnl(const char *s, unsigned int start, size_t len);

#endif
