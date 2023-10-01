#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e)
{

    int pivot = arr[s];

    int count = 0;
    for (int i = s + 1; i < e + 1; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    int pIndx = s + count;
    swap(arr[pIndx], arr[s]);
    int i = s, j = e;

    while (i < pIndx && j > pIndx)
    {
        while (arr[j] > pivot)
        {
            j--;
        }
        while (arr[i] <= pivot)
        {
            i++;
        }
        if (i < pIndx && j > pIndx)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pIndx;
}

void quickSort(int arr[], int s, int e)
{

    if (s >= e)
    {
        return;
    }
    int p = partition(arr, s, e);
    quickSort(arr, p + 1, e);
    quickSort(arr, s, p - 1);
}

int main()
{

    int n;
    cout << "Enter size of an array : ";
    cin >> n;
    int arr[n];
    cout << "\n Enter elements in the array: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Elements before sort \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    quickSort(arr, 0, n - 1);
    cout << "Elements after sort \n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}