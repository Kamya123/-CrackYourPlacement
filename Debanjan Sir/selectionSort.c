
#include <stdio.h>

void swap(int *xp, int *yp)
{
    *xp = *xp ^ *yp;
    *yp = *xp ^ *yp;
    *xp = *xp ^ *yp;
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;

	for (i = 0; i < n-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min_idx])
			min_idx = j;

		if(min_idx != i)
			swap(&arr[min_idx], &arr[i]);
	}
}

void printArray(int arr[], int n)
{
	int i;
	for (i=0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array\n");

    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
	
	selectionSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);

    insertionSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);

	return 0;
}

// int arr[] = {64, 25, 12, 22, 11};
// 	int n = sizeof(arr)/sizeof(arr[0]);
