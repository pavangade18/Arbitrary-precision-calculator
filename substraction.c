#include "dll.h"

int subtraction(Dlist **head1, Dlist **tail1,
                Dlist **head2, Dlist **tail2,
                Dlist **headR, Dlist **tailR)
{
    Dlist *t1 = *tail1;
    Dlist *t2 = *tail2;

    int borrow = 0;

    while (t1 || t2)
    {
        int num1 = 0, num2 = 0;

        if (t1)
        {
            num1 = t1->data;
            t1 = t1->prev;
        }

        if (t2)
        {
            num2 = t2->data;
            t2 = t2->prev;
        }

        num1 -= borrow;

        if (num1 < num2)
        {
            num1 += 10000;
            borrow = 1;
        }
        else
            borrow = 0;

        insert_first(headR, tailR, num1 - num2);
    }

    return 1;
}