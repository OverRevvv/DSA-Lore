#include<stdio.h>

// Traversal of the elemeents basically meaning going through
// each of them in an array or specific storage  

void display(int arr[], int n){
    // Traversal 
    for (int i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
}

int indInsertion (int arr[], int size , int element, int index, int capacity ){
// Insertion 
    if(size >= capacity){ //condition in case size is larger than capacity
        printf("Insertion failed.......");
        return -1 ;
    }

    for (int  i = size-1; i >= index; i--)
    {
        arr[i+1]= arr[i];
    }
    arr[index]=element;

    return 1; 
    
}
int main ()
{   
    int arr[100]={7,8,12,28,88};
    int size=5, element= 34, index=3;
    display(arr,size);
    indInsertion( arr, size, element, index , 100);
    size++;
    printf("\n");
    display(arr,size);

return 0;
}