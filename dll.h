#ifndef DLL_H
#define DLL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
} Dlist;

/* DLL functions required for the project*/
void insert_last(Dlist **head, Dlist **tail, int data);
void insert_first(Dlist **head, Dlist **tail, int data);
void print_list(Dlist *head);
void remove_leading_zeros(Dlist **head);

/* Input */
void create_list_from_string(char *str, Dlist **head, Dlist **tail);

/* Compare */
int compare(Dlist *h1, Dlist *h2);

/* Arithmetic operations */
int addition(Dlist **head1, Dlist **tail1,
             Dlist **head2, Dlist **tail2,
             Dlist **headR, Dlist **tailR);

int subtraction(Dlist **head1, Dlist **tail1,
                Dlist **head2, Dlist **tail2,
                Dlist **headR, Dlist **tailR);

int multiplication(Dlist **head1, Dlist **tail1,
                   Dlist **head2, Dlist **tail2,
                   Dlist **headR, Dlist **tailR);

int division(Dlist **head1, Dlist **tail1,
             Dlist **head2, Dlist **tail2,
             Dlist **headR, Dlist **tailR);

#endif