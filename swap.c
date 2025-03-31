#include <stdio.h>
int main()
{
    int i, n, arr[5];
    printf("enter the total no of elements:");
    scanf("%d", n);
    for (i = 0; i <= 5; i++)
    {
        printf("enter the element %d:");
        scanf("%d", arr[i]);
        printf("the elements of the array:", arr[i]);

        if (arr[i] > arr[i + 1])
        {
            printf("the element is max %d", arr[i]);
        }
        else
        {
            printf("the element is min %d", arr[i]);
        }
    }
}