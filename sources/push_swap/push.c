#include "push.h"

void    push_a(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    t_list  *tmp;

    a = *start_a;
    b = *start_b;
    if (!b)
        return ;
    tmp = b;
    b = b->next;
    *start_b = NULL;
    *start_b = b;
    tmp->next = a;
    *start_a = NULL;
    a = tmp;
    *start_a = a;
    get_pos(*start_a, a);
    get_pos(*start_b, b);
    *start_a = a;
    *start_b = b;
    ft_putstr_fd("pa\n", 2);
    return ;
}

void    push_b(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    t_list  *tmp;
    
    a = *start_a;
    b = *start_b;
    if (!a)
        return ;
    tmp = a;
    a = a->next;
    *start_a = NULL;
    *start_a = a;
    tmp->next = b;
    *start_b = NULL;
    b = tmp;
    *start_b = b;
    get_pos(*start_a, a);
    get_pos(*start_b, b);
    a = *start_a;
    b = *start_b;
    ft_putstr_fd("pb\n", 2);
    return ;
}