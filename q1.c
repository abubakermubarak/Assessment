#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
}node;

void add_end(node ** head, int n);

int main(int argc, char *argv[])
{

    node *head;
    head = NULL;
    int count;
    count = 0;
    while(count < argc)
    {
        add_end(&head, atoi(argv[count + 1][0]));
        count++;
    }
}
void add_end(node ** head, int n)
{
    node *new = malloc(sizeof(node));
    new->number = n;
    new->next = NULL;

    if (*head == NULL)
    {
        *head = new;
    }
    free(new);
}