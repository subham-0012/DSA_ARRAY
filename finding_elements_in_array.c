/*
//finding the duplicate element in array without using any extra space
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size, i037;
    printf("enter the length of array: ");
    scanf("%d", &size);
    int arr[size];
    for (i037 = 0; i037 < size; i037++)
    {
        printf("Enter the %dth element of the array: ", i037 + 1);
        scanf("%d", &arr[i037]);
    }
    for (i037 = 0; i037 < size; i037++)
    {
        if (arr[abs(arr[i037])] >= 0)
        {
            arr[abs(arr[i037])] = -arr[abs(arr[i037])];
        }
        else
        {
            printf("the duplicate element is %d and the index of duplicate element is %d", abs(arr[i037]),i037);
        }
    }
    return 0;
}
*/