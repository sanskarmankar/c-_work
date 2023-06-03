#include <iostream>
#include <bits/stdc++.h>
#include <climits>
#include <time.h>
using namespace std;
void findMinAndMax(int arr[], int low, int high, int &min, int &max)
{
    if (low == high)
    {
        if (max < arr[low]) {
            max = arr[low];
        }

        if (min > arr[high]) {
            min = arr[high];
        }

        return;
    }

    if (high - low == 1)
    {
        if (arr[low] < arr[high])
        {
            if (min > arr[low]) {
                min = arr[low];
            }

            if (max < arr[high]) {
                max = arr[high];
            }
        }
        else {
            if (min > arr[high]) {
                min = arr[high];
            }

            if (max < arr[low]) {
                max = arr[low];
            }
        }
        return;
    }
    int mid = (low + high) / 2;
    findMinAndMax(arr, low, mid, min, max);
    findMinAndMax(arr, mid + 1, high, min, max);
}

int main()
{
    clock_t tStart = clock();
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements:" << endl;
    for(int i = 0; i<n; i++) {
        cin >> arr[i];
    }
    int m = sizeof(arr) / sizeof(arr[0]);
    int max = INT_MIN, min = INT_MAX;

    findMinAndMax(arr, 0, n - 1, min, max);

    cout << "The minimum array element is " << min << endl;
    cout << "The maximum array element is " << max;
    printf("\nTime taken: %.9fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);
    return 0;
}
