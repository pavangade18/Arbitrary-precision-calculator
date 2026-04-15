#include "dll.h"

int compare(Dlist *h1, Dlist *h2)
{
    while (h1 && h2)
    {
        if (h1->data > h2->data)
            return 1;
        else if (h1->data < h2->data)
            return -1;

        h1 = h1->next;
        h2 = h2->next;
    }

    if (h1)
        return 1;

    if (h2)
        return -1;

    return 0;
}