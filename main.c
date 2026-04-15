#include "dll.h"

int main()
{
    char num1[100];
    char num2[100];

    Dlist *head1=NULL,*tail1=NULL;
    Dlist *head2=NULL,*tail2=NULL;
    Dlist *headR=NULL,*tailR=NULL;

    int choice;

    printf("Please enter Number1: ");
    scanf("%s",num1);

    printf("Please enter Number2: ");
    scanf("%s",num2);

    create_list_from_string(num1,&head1,&tail1);
    create_list_from_string(num2,&head2,&tail2);

    printf("\n---Arthemantic Operations menu---\n");
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Please enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
            addition(&head1,&tail1,&head2,&tail2,&headR,&tailR);
            break;

        case 2:
            subtraction(&head1,&tail1,&head2,&tail2,&headR,&tailR);
            break;

        case 3:
            multiplication(&head1,&tail1,&head2,&tail2,&headR,&tailR);
            break;

        case 4:
            division(&head1,&tail1,&head2,&tail2,&headR,&tailR);
            break;

        default:
            printf("Invalid choice\n");
    }

    remove_leading_zeros(&headR);
    printf("Result:\n");
    print_list(headR);

    return 0;
}