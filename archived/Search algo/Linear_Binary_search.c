#include <stdio.h>
int linearSearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++) // logic to find element
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1; // if element is not present
}
// int binarySearch(int arr[], int size, int element)
// {
//     int low, mid, high; // declaring components for binary search
//     low = 0;
//     high = size - 1; //-1 because counting starts from 0
//     while (low <= high)
//     {
//         // searching
//         mid = (low + high) / 2;
//         if (arr[mid] == element)
//         {
//             return mid;
//         }
//         if (arr[mid] < element)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             mid = high - 1;
//         }
//     }

//     return -1;
// }
int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    // Keep searching until low <= high
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    // Unsorted array for linear search
    // int arr[] = {1,3,5,56,4,3,23,5,4,54634,56,34}

    // int arr[] = {1, 3, 6, 7, 8, 12, 45, 56, 67, 69, 87, 89, 90, 99, 100};    // sorted array

    int arr[] = {1, 3, 5, 56, 64, 73, 123, 225, 444}; // sorted array
    int size = sizeof(arr) / sizeof(int);
    int element = 1; 
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}