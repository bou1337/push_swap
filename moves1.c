#include "push_swap.h"

void swap(t_data **list)
{
    int data;
    data = (*list)->n;
    (*list)->n= (*list)->next->n;
    (*list)->next->n = data;
}
void sa(t_data **list)
{
    swap(list);
    write(1,"sa\n",3);
}
void sb(t_data **list)
{
    swap(list);
    write(1,"sb\n",3);
}
void rat(t_data **list) {


    t_data *first_node = *list; 
    t_data *last_node = *list;
    while (last_node->next != NULL) {
        last_node = last_node->next;
    }
    *list = (*list)->next;
    last_node->next = first_node;
    first_node->next = NULL;
}

void ra(t_data **list) {
    rat(list);
    write(1, "ra\n", 3); 
}
