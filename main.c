/* the new version of big number from n numbers using arrays and procudural philosophy ( functions :) ) */

#include <stdlib.h>
#include <stdio.h>

void add(int *array, int size);

void big(int *array_1 , int size);

int main(void)
{
    int size;
    printf("add array size :)\n");
    do
    {
        scanf("%d", &size);

    } while(size < 0 || size > 12);

    int array[size];

    add(array, size);

    big(array, size);

    return 0;
}
void add(int *array, int size)
{
    printf("add the %d elements\n", size);
    int i;

    for(i = 0 ; i < size ; i++)
    {
        scanf("%d", &array[i]);
    }
}

void big(int *array_1 , int size)
{
    int max = array_1[0], i;
    for(i = 0 ; i < size ; i++)
    {
        if(array_1[i] > max)
        {
            max = array_1[i];
        }
    }
    printf("the biggest element is : %d", max);
}
