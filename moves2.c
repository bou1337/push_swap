#include "push_swap.h"

void rb(t_data **list)
{

    rat(list);
    write(1,"rb\n", 3);
}
void rv(t_data **list)
{
    t_data *last;
    t_data *second_last;
    second_last = *list;
    while(second_last->next->next)
    {
        second_last=second_last->next;
    }
    last = second_last->next;
    second_last->next = NULL;
    last->next = *list;
    *list = last;
}

void  rra(t_data ** list)

{
    rv(list);
    write(1,"rra\n", 4);
}
void rrb(t_data ** list)
{

    rv(list);
    write(1, "rrb\n", 4);
}