// C program for insertion sort
#include <stdio.h>
#include <math.h>

/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
        int k;

        for (k=0; k < n; k++)
        {
            if(k<n-1)
                printf("%d ", arr[k]);
            else
                printf("%d", arr[k]);
        }
        printf("\n");


    }
}

// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i,t;
    for( t=0; t<n; t++)
    {
        if(t<n-1)
        printf("%d ", arr[t]);
        else
            printf("%d", arr[t]);
    }
    printf("\n");

}



/* Driver program to test insertion sort */
int main()
{

    int n,i,arr[10000];
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&arr[i]);

    printArray(arr, n);
    insertionSort(arr, n);

    return 0;
}

