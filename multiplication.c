#include "dll.h"

int multiplication(Dlist **head1, Dlist **tail1,
                   Dlist **head2, Dlist **tail2,
                   Dlist **headR, Dlist **tailR)
{
    Dlist *t2 = *tail2;

    while (t2)
    {
        Dlist *t1 = *tail1;
        int carry = 0;

        while (t1)
        {
            long long prod = (long long)t1->data * t2->data + carry;

            carry = prod / 10000;
            prod = prod % 10000;

            insert_first(headR, tailR, prod);

            t1 = t1->prev;
        }

        if (carry)
            insert_first(headR, tailR, carry);

        t2 = t2->prev;
    }

    return 1;
}