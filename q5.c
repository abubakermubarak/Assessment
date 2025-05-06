#include <stdio.h>
#include <stdlib.h>
int length(int *array);
int main(int argc, char *argv[])
{
    int array[50];
    int count = argc - 1;

    for (int i = 0; i < count + 1; i++)
    {
        array[i] = atoi(argv[i + 1]);
    }
    for ( int i = count; i < 50; i++)
    {
        array[count] = 0;
    }
    int len = length(array);
    printf("%i\n", len);
}
int length(int *array)
{
    if (*array == 0)
    {
        return 0;
    }
    return 1 + length(array++);
}