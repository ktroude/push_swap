#include "push.h"

void    error_txt(void)
{
    ft_putstr_fd("Error\n", 2);
    exit(1);
}

void    ft_checker(int actual_arg, char **argv)
{
    int i;
    
    i = 1;
    while(i < actual_arg)
    {
     if (ft_atoi(argv[i]) == ft_atoi(argv[actual_arg]))
        error_txt();
        i++; 
    }
}

void    check_error(int argc, char **argv)
{
    int nb_arg;
    int tmp;

    tmp = 0;
    nb_arg = 1;
    while (nb_arg < argc)
    {
        ft_checker(nb_arg, argv);
        nb_arg++;
    }
    if (argc < 2)
        exit(0);
    if (argc == 2)
    {
        tmp = ft_atoi(argv[1]);
        ft_putnbr_fd(tmp, 2);
        ft_putstr_fd("\n", 2);
        exit(0);
    }
    check_error_2(argc, argv);
}

void    check_error_2(int argc, char **argv)
{
    char **tab;

    tab = NULL;
    if (argc > 3)
    {
        if (*argv[1] == '"')
        {
            tab = ft_split(argv[1], ' ');
            if (tab[1] != NULL)
            {
                free(tab);
                error_txt();
            }
            else
                free(tab);
    return ;
        }
    }
}