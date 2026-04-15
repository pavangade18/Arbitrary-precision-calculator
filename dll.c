#include "dll.h"

void insert_last(Dlist **head, Dlist **tail, int data)
{
    Dlist *new = malloc(sizeof(Dlist));
    new->data = data;
    new->next = NULL;
    new->prev = NULL;

    if (*head == NULL)
    {
        *head = *tail = new;
        return;
    }

    (*tail)->next = new;
    new->prev = *tail;
    *tail = new;
}

void insert_first(Dlist **head, Dlist **tail, int data)
{
    Dlist *new = malloc(sizeof(Dlist));
    new->data = data;
    new->prev = NULL;
    new->next = NULL;

    if (*head == NULL)
    {
        *head = *tail = new;
        return;
    }

    new->next = *head;
    (*head)->prev = new;
    *head = new;
}

void print_list(Dlist *head)
{
    if (head == NULL)
    {
        printf("0\n");
        return;
    }

    /* print first node normally */
    printf("%d", head->data);
    head = head->next;

    /* print remaining nodes with 4 digits */
    while (head)
    {
        printf("%04d", head->data);
        head = head->next;
    }

    printf("\n");
}

void remove_leading_zeros(Dlist **head)
{
    Dlist *temp;

    while (*head && (*head)->data == 0 && (*head)->next != NULL)
    {
        temp = *head;
        *head = (*head)->next;
        (*head)->prev = NULL;
        free(temp);
    }
}