#include "push.h"

int count_arg(t_list *start, t_list *lst)
{
    int i;

    i = 0;
    lst = start;
    while (lst)
    {
        i++;
        lst = lst->next;
    }
    return (i);
}

int scan_from_top_b(t_list *start, t_list *lst)
{
    static int  i;

    i = count_arg(start, lst);
    lst = start;
    return (recursiv_scan_top_b(start, lst, i));
}

int recursiv_scan_top_b(t_list *start, t_list *lst, int i)
{
    int ret;

    ret = -1;
    while (lst)
    {
        if (lst->index <= i)
        {
            ret = lst->nbr;
            break ;
        }
        lst = lst->next;
    }
    lst = start;
    if (ret == -1)
        {
            i--;
            return (recursiv_scan_top_b(start, lst, i));
        }
    return (ret); 
}

int scan_from_botom_b(t_list *start, t_list *lst)
{
    static int  i;

    i = count_arg(start, lst);
    lst = start;
    return (recursiv_scan_botom_b(start, lst, i));
}

int recursiv_scan_botom_b(t_list *start, t_list *lst, int i)
{
    int ret;

    ret = -1;
    while (lst)
    {
        if (lst->index <= i)
            ret = lst->nbr;
        lst = lst->next;
    }
    lst = start;
     if (ret == -1)
        {
            i--;
            return(recursiv_scan_botom_b(start, lst, i));
        }
    return (ret);
}


void    move_to_top_b(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    int i;
    int top;
    int botom;
    int count;

    i = 0;
    b = *start_b;
    a = *start_a;
    count = count_arg(*start_b, b);
    top = scan_from_top_b(*start_b, b);
    botom = scan_from_botom_b(*start_b, b);
    get_pos(*start_b, b);
    b = *start_b;
    while (b)
    {
        if (b->nbr == top)
            top = b->pos;
        if (b->nbr == botom)
            botom = count - b->pos;
        b = b->next;
    }
    b = *start_b;
    if (!b->next)
        return ;
    if (botom >= top)
    {
        while (i != top)
        {
            rotate_b(start_b, b);
            b = *start_b;
            i++;
        }
    }
else
    {
        while (i != botom)
        {
            reverse_b(start_b, b);
            i++;
        }
    }
    a = *start_a;
    b = *start_b;
    return ;
}




