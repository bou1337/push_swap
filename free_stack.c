#include "push_swap.h"
 void free_stack(t_data **sa)
 {
    t_data *curr ;
    t_data *next_node;
    curr = *sa;
    while(curr)
    {
        next_node = curr->next;
        free(curr);
        curr  = next_node;
    }
 }