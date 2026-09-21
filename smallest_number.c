#include <stdio.h>

int main()
{
    int n, number;
    int smallest;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &smallest);

    for (int i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number < smallest)
        {
            smallest = number;
        }
    }

    printf("Smallest number = %d", smallest);

    return 0;
}
