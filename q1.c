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
    node *p = head;
    node *track;
    /*loop over all list*/
    int min = head->number;
    while (count > 0)
    {
        while (p != NULL)
        {
            if (p-> number < min)
            {
                
                min = p->number;
                track = &p
            }
            p =  p->next;
        }
        add_end(new, min);
        
    }
}