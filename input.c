#include "dll.h"

void create_list_from_string(char *str, Dlist **head, Dlist **tail)
{
    int len = strlen(str);
    int i = len;

    while (i > 0)
    {
        char temp[5];
        int j = 0;

        int start = i - 4;
        if (start < 0)
            start = 0;

        for (int k = start; k < i; k++)
        {
            temp[j++] = str[k];
        }

        temp[j] = '\0';

        insert_first(head, tail, atoi(temp));

        i -= 4;
    }
}