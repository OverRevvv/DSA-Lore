#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}

void IndDeletion(int arr[], int size, int index)
{
    for (int i = index - 1; i < size - 1; i++) // index-1 cause in programming counting starts from 0
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[100] = {7, 8, 12, 28, 88, 100};
    int size = 6, index = 2;
    display(arr, size);
    IndDeletion(arr, size, index);
    size--;
    printf("\n");
    display(arr, size);

    return 0;
}