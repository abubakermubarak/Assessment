#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}node;

void add_end(node ** head, int n);
void print_list(node *head);
int main(int argc, char *argv[])
{

    node *head;
    head = NULL;
    int count;
    count = 1;
    while(count < argc)
    {
        add_end(&head, atoi(argv[count]));
        count++;
    }
    //print_list(head);
}
void add_end(node ** head, int n)
{
    node *new = malloc(sizeof(node));
    if (new == NULL)
    {
        return;
    }
    new->number = n;
    new->next = NULL;
    printf("%i\n", new->number);
    if (*head == NULL)
    {
        *head = new;
    }
    free(new);
}
void print_list(node *head)
{
    while (head != NULL)
    {
        printf("%i\n", head->number);
        head = head->next;
    }
}
void sort_list(node *head, int count)
{
    /* make new list*/
    node *new = NULL; 
    /*loop over all list*/
    int min = head->number;
    while (head != NULL)
    {
        if (head-> number < min)
        {
            add_end(&new, head->number);
            min = head->number;
        }
        head =  head->next;
    }
}