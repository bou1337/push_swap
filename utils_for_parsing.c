#include "push_swap.h"
int *linked_list_to_tab(t_data **stack, int len) {
    t_data *curr = *stack;
    int *tab;
    int i = 0;
    tab = malloc(sizeof(int) * len);
    if (!tab) {
        write(2, "Error\n", 6);
        exit(1);
    }

    curr = *stack;
    while (i < len) {
        tab[i] = curr->n;
        curr = curr->next;
        i++;
    }

    return tab;
}

int len_tab(t_data **stack)
{
    int len ;
    len = 0;
    t_data  *curr ;
    curr =  *stack;
    while(curr)
    {
        len ++;
        curr = curr ->next;
    }
    return (len);
}
int check_doub(t_data **stack) {
    int i = 0;
    int j;
    int size ;
    int *tab;
    size  = len_tab(stack);
    tab = linked_list_to_tab(stack,size);
    while (i < size) {
        j = i + 1;
        while (j < size) {
            if (tab[i] == tab[j]) {
                free(tab);
                return 0; 
            }
            j++;
        }
        i++;
    }
    free(tab);
    return 1;
}
