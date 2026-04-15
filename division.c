#include "dll.h"

int division(Dlist **head1, Dlist **tail1,
             Dlist **head2, Dlist **tail2,
             Dlist **headR, Dlist **tailR)
{
    Dlist *tempH = *head1;
    Dlist *tempT = *tail1;

    int count = 0;

    while (compare(tempH, *head2) >= 0)
    {
        Dlist *resH = NULL;
        Dlist *resT = NULL;

        subtraction(&tempH, &tempT,
                    head2, tail2,
                    &resH, &resT);

        tempH = resH;
        tempT = resT;

        count++;
    }

    insert_last(headR, tailR, count);

    return 1;
}