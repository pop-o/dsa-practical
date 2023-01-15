/* C++ implementation of QuickSort */

#include <iostream>

using namespace std;

int partition(int[], int, int);
void quickSort(int[], int, int);
void input_array_elements(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
       cin >> arr[i];
    }
}
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
       cout << arr[i] << " ";
    }
   cout <<endl;
}
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
// Driver Code
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    input_array_elements(arr, n);

    // before sorting
    cout << "Unsorted array: " << endl;
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    // after sort
    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}

int partition(int arr[], int start, int end)
{
    int pivot = arr[start];
    int count = 0;

    for (int i = start + 1; i <= end; i++)
    {
        if (arr[i] <= pivot)
            count++;
    }
    // Giving pivot element its correct position
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // Sorting left and right parts of the pivot element
    int i = start, j = end;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{
    // base case
    if (start >= end)
        return;

    // partitioning the array
    int p = partition(arr, start, end);

    // Sorting the left part
    quickSort(arr, start, p - 1);

    // Sorting the right part
    quickSort(arr, p + 1, end);
}
