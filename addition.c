#include "dll.h"

int addition(Dlist **head1, Dlist **tail1,
             Dlist **head2, Dlist **tail2,
             Dlist **headR, Dlist **tailR)
{
    Dlist *t1 = *tail1;
    Dlist *t2 = *tail2;

    int carry = 0;

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

        int sum = num1 + num2 + carry;

        carry = sum / 10000;
        sum = sum % 10000;

        insert_first(headR, tailR, sum);
    }

    if (carry)
        insert_first(headR, tailR, carry);

    return 1;
}