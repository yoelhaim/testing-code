#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
typedef struct list
{
    int content;
    struct list *next;
    struct list *prev;
} t_list;
typedef struct data
{
    int index;
    char *s;
    int *i;
} t_data;

#endif