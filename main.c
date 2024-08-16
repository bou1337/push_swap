#include "push_swap.h"
#include <stdlib.h>
void string_to_numbers(char *str, t_data **stack)
{
    int num;
    int start ;
    int end;
    int i= 0;

    while (str[i]&&ft_espace(str[i])) {
        i++;
    }
    while (str[i]) {
        start =i;
        if (str[i] == '+' || str[i] == '-') {
            i++;
        }
        while (str[i]&&ft_is_digit(str[i]))
        i++;
        end = i;
        num = ft_atoi(stack, str, start, end);
        add_at_last(stack, num);
        while (str[i]&&ft_espace(str[i])) {
            i++;
        }
    }
}

void   arg_to_stack_a(char **av, t_data **stack_a )
{
    int  i = 1;
    while(av[i])
    {
        string_to_numbers(av[i], stack_a);
        i++;
    }
}
void chek_error(char **av, t_data **stack)
{
    if(!check_arg(av))
    {
         write(2, "Error\n",6);
         exit(1);
    }
    arg_to_stack_a(av, stack);
    if(!check_doub(stack))
    { 
        write(2, "Error\n",6);
        free_stack(stack);
        exit(1);
    }
}
void  chose_sort(t_data **stacka , t_data **stackb,int *tab, int  len)
{
    if(len == 2)
    sort_two(stacka);
    else if(len == 3)
    sort_three(stacka);
    else if(len ==4)
    sort_four(stacka, stackb);
    else if(len ==5)
    sort_five(stacka, stackb);
    else if(len >5&& len<=100)
    {
        sort_b_5_100(stacka, stackb,tab,len);
        sort_a(stacka, stackb, len);
    }
    else if(len>100)
    {
        sort_b_plus_100(stacka, stackb, tab, len);
        sort_a(stacka, stackb, len);
    }
}

int main(int ac, char **av)
{
   t_data *stacka =NULL ;
   t_data  *stackb =NULL;
   int *tab = NULL;
   int len ;
   int i = 0;
   if(ac==1)
    return(0);
      t_data *curr ;
    chek_error(av, &stacka);
    check_sort(&stacka);
    len  = len_tab(&stacka);
    tab= linked_list_to_tab(&stacka, len);
    sort_tab(tab, len) ;
    chose_sort(&stacka, &stackb, tab, len);
    free_stack(&stacka);
    free(tab);
   
}
