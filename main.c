#include "header.h"
int create_node(t_list **list, t_data *data)
{
    printf("%d\n", data->index);
    return (1);
}
int main(int ac, char **av)
{
    t_data *data;
    t_list *a;
    int i = 0;
    while (av[i])
        printf("%d", i++);
    // data->index = i++;
    // create_node(&a, data);
}