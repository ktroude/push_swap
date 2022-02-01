/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktroude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:42:59 by ktroude           #+#    #+#             */
/*   Updated: 2022/01/19 16:53:27 by ktroude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_H
# define PUSH_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
    int             nbr;
    struct s_list   *next;
}   t_list;

int ft_atoi(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	**ft_split(char const *s, char c);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
void    error_txt(void);
void    ft_checker(int actual_arg, char **argv);
void    check_error(int argc, char **argv);
t_list  *parsing_a1(char **argv);
t_list  *parsing_a2(int argc, char **argv);

#endif
