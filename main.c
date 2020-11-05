#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, max, choice;
    printf("how many you want \n");
    do
    {
        printf("how many you want \n");
        scanf("%d", &choice);
    } while(choice < 0);
    printf("enter first number\n");
    scanf("%d", &max);
    for(choice-- ; choice != 0 ; choice--)
    {
        scanf("%d", &n);
        if(n > max)
        {
            max = n;
        }

    }

    printf("the max is : %d", max);

    return 0;
}
