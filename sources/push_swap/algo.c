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

int scan_from_top(t_list *start, t_list *lst)
{
    int         j;
    static int  i;

    i = count_arg(start, lst);
    i = i/5;
    j = i;
    lst = start;
    return (recursiv_scan_top(start, lst, i, j));
}

int recursiv_scan_top(t_list *start, t_list *lst, int i, int j)
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
            i += j;
            return (recursiv_scan_top(start, lst, i, j));
        }
    return (ret); 
}

int scan_from_botom(t_list *start, t_list *lst)
{
    int         j;
    static int  i;

    i = count_arg(start, lst);
    i = i/5;                                             // automatiser nbr de chunk en fonction du nbr d'arg (5 pour 100, 11 pour 500, ...)
    j = i;
    lst = start;
    return (recursiv_scan_botom(start, lst, i, j));
    }

int recursiv_scan_botom(t_list *start, t_list *lst, int i, int j)
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
            i += j;
            return(recursiv_scan_botom(start, lst, i, j));
        }
    return (ret);
}


void    move_to_top(t_list **start_a, t_list **start_b, t_list *a, t_list *b)
{
    int i;
    int top;
    int botom;
    int count;

    i = 0;
    b = *start_b;
    a = *start_a;
    count = count_arg(*start_a, a);
    top = scan_from_top(*start_a, a);
    botom = scan_from_botom(*start_a, a);
    get_pos(*start_a, a);
    a = *start_a;
    while (a)
    {
        if (a->nbr == top)
            top = a->pos;
        if (a->nbr == botom)
            botom = count - a->pos;
        a = a->next;
    }
    a = *start_a;
    if (!a->next)
        return ;
    if (botom >= top)
    {
        while (i != top)
        {
            rotate_a(start_a, a);
            a = *start_a;
            i++;
        }
    }
else
    {
        while (i != botom)
        {
            reverse_a(start_a, a);
            i++;
        }
    }
    a = *start_a;
    b = *start_b;
    return ;
}

void    get_max_nbr_b(t_list **start_b, t_list *b)
{
    int i;
    int j;
    int k;

    i = count_arg(*start_b, b);
    j = 0;
    if (i < 0)
        return ;
    b = *start_b;
    while (b)
    {
        if (b->index == i - 1)
            break ;
        b = b->next;
        j++;
    }
    k = 0;
    if (j < i/2)
    {
        while (k != j)
        {
            b = *start_b;
            rotate_b(start_b, b);
            b = *start_b;
            k++;
        }
        return ;
    }
    else
    {
        j = i - j;
        while (k != j)
        {
            if (j == 0)
                return ;
//            printf("je suis j : %d\n", j);
            b = *start_b;
            reverse_b(start_b, b);
            b = *start_b;
            k++;
        }
        return ;
    }
}

