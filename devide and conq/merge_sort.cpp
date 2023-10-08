#include <bits/stdc++.h>
using namespace std;

void merge(int a[], int low, int high, int mid)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // Create temporary arrays to hold the sub-arrays
    int a1[n1];
    int a2[n2];

    // Copy data to temporary arrays a1[] and a2[]
    for (int i = 0; i < n1; i++)
        a1[i] = a[low + i];

    for (int i = 0; i < n2; i++)
        a2[i] = a[mid + 1 + i];

    // Initialize indices for merging the sub-arrays
    int i = 0, j = 0, k = low;

    // Merge the sub-arrays back into a[]
    while (i < n1 && j < n2)
    {
        if (a1[i] <= a2[j])
        {
            a[k] = a1[i];
            i++;
        }
        else
        {
            a[k] = a2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of a1[], if any
    while (i < n1)
    {
        a[k] = a1[i];
        i++;
        k++;
    }

    // Copy remaining elements of a2[], if any
    while (j < n2)
    {
        a[k] = a2[j];
        j++;
        k++;
    }
}

void merge_sort(int a[], int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;

        // Sort the first and second halves
        merge_sort(a, low, mid);
        merge_sort(a, mid + 1, high);

        // Merge the sorted halves
        merge(a, low, high, mid);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Perform merge sort
    merge_sort(arr, 0, n - 1);

    // Print the sorted array
    std::cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
