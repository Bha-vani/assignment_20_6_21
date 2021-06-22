// C program to find second largest element in an array//
 
#include <limits.h>
#include <stdio.h>

void scndlargest(int arr[], int arr_size)
{
    int first, second,i;
    if (arr_size < 2)
    {
        printf(" Invalid Input ");
        return;
    }
    first = second = INT_MIN;
    for (i = 0; i < arr_size; i++) 
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MIN)
        printf("There is no second largest element\n");
    else
        printf("The second largest element is %dn", second);
}
 
int main()
{
    int arr[] = { 15, 43, 7, 12, 17, 10 };
    int n = sizeof(arr) / sizeof(arr[0]);
    scndlargest(arr, n);
    return 0;
}

output:
#if
 the second largest element is 17
#endif
