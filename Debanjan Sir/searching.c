#include<stdio.h>

int linearSearch(int arr[], int n, int target) {
    for (int i=0; i<n; i++) {
        if (arr[i] == target)
            return i;
    }

    return -1;
} 

int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n-1;

    while(left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            right = mid-1;
        else
            left = mid+1;
    }

    return -1;
}

int main() {
    int n, target, choice, idx1, idx2;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array\n");

    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target elt: ");
    scanf("%d", &target);

    printf("1. Linear Search\n2. Binary Search\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: 
            idx1 = linearSearch(arr, n, target);
            if (idx1 != -1)
                printf("The index of %d is %d\n", target, idx1);
            else 
                printf("Element not found\n");
            break;
        case 2:
            idx2 = binarySearch(arr, n, target);
            if (idx2 != -1)
                printf("The index of %d is %d\n", target, idx2);
            else 
                printf("Element not found\n");
            break;
    }
}