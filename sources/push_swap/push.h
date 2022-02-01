/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktroude <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 16:42:59 by ktroude           #+#    #+#             */
/*   Updated: 2022/01/24 14:15:09 by ktroude          ###   ########.fr       */
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
	int				index;
	int				pos;
    struct s_list   *next;
}   t_list;

typedef struct s_lsts
{
    t_list  *a;
    t_list  *b;
}   lst;

typedef struct s_start
{
    t_list  **start_a;
    t_list  **start_b;
}   start_lst;

int ft_atoi(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	ft_putnbr_fd(int n, int fd);
char	**ft_split(char const *s, char c);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
void    error_txt(void);
void    ft_checker(int actual_arg, char **argv);
void    check_error(int argc, char **argv);
void    check_error_2(int argc, char **argv);
t_list  *parsing_a1(char **argv);
t_list  *parsing_a2(int argc, char **argv);
void    swap_a(t_list **start, t_list *a);
void    swap_b(t_list **start, t_list *b);
void    swap_r(t_list *start_a, t_list *start_b, t_list *a, t_list *b);
void    rotate_a(t_list **start, t_list *a);
void    rotate_b(t_list **start, t_list *b);
void    rotate_r(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
void    reverse_a(t_list **start, t_list *a);
void    reverse_b(t_list **start, t_list *b);
void    reverse_r(t_list **start_a, t_list **start_b, t_list *b, t_list *a);
void    push_a(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
void    push_b(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
void    get_pos(t_list *start, t_list *a);
void    get_index(t_list *start, t_list *a, int i);
void    get_neg_index(t_list *start, t_list *a);
t_list  *search_suite(t_list *start, t_list *lst);
int count_arg(t_list *start, t_list *lst);
void    push_min(t_list *start_a, t_list *start_b, t_list *a, t_list *b);
int scan_from_top(t_list *start, t_list *lst);
int scan_from_botom(t_list *start, t_list *lst);
void    move_to_top(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
int recursiv_scan_top(t_list *start, t_list *lst, int i, int j);
int recursiv_scan_botom(t_list *start, t_list *lst, int i, int j);
void    check_n_push_b(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
void    check_n_push_b(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
void    oranise_rest_a(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
void    check_pos_3(t_list *start_a, t_list *a);
void    check_pos_5(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
void    organise_3(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
void    case_1(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
void    case_2(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
void    case_3(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
void    case_4(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
void    case_5(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
void    case_6(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
void    case_7(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
void    case_8(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
void    case_9(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
void    case_10(t_list **start_a, t_list **start_b, t_list *a, t_list *b);
int scan_from_top_b(t_list **start, t_list *lst);
int scan_from_botom_b(t_list **start, t_list *lst);
void    move_to_top_b(t_list **start_b, t_list *b);
void    get_max_nbr_b(t_list **start_b, t_list *b);

#endif
